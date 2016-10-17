#define rate_study_cxx
// The class definition in rate_study.h has been generated automatically
// by the ROOT utility TTree::MakeSelector(). This class is derived
// from the ROOT class TSelector. For more information on the TSelector
// framework see $ROOTSYS/README/README.SELECTOR or the ROOT User Manual.

// The following methods are defined in this file:
//    Begin():        called every time a loop on the tree starts,
//                    a convenient place to create your histograms.
//    SlaveBegin():   called after Begin(), when on PROOF called only on the
//                    slave servers.
//    Process():      called for each event, in this function you decide what
//                    to read and fill your histograms.
//    SlaveTerminate: called at the end of the loop on the tree, when on PROOF
//                    called only on the slave servers.
//    Terminate():    called at the end of the loop on the tree,
//                    a convenient place to draw/fit your histograms.
//
// To use this file, try the following session on your Tree T:
//
// root> T->Process("rate_study.C")
// root> T->Process("rate_study.C","some options")
// root> T->Process("rate_study.C+")
//

#include "rate_study.h"
#include <TH1.h>
#include <TH2.h>
#include <TFile.h>
#include <TStyle.h>

#include <fstream>

// include pt parametrisations
#include "pt_on_sagitta_regions.cxx"
#include "pt_on_sagitta_stations.cxx"
#include "pt_on_beta_oi_regions.cxx"
#include "pt_on_beta_om_regions.cxx"
#include "pt_on_beta_mi_regions.cxx"

void rate_study::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

void rate_study::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

   // read thresholds from file
   ifstream input_file_standalone("L1MU20_thresholds_standalone.txt");
   ifstream input_file_combined("L1MU20_thresholds_combined.txt");
   ifstream input_file_regions("L1MU20_thresholds_regions.txt");
   ifstream input_file_stations("L1MU20_thresholds_stations.txt");


   // loop over file and fill structures in vector
   float eta_low, eta_high, phi_low, phi_high;
   int is_small_sector;
   float threshold, efficiency;
   int segment_id, eta_inner, eta_middle, eta_outer;

   while (input_file_standalone >> eta_low >> eta_high >> phi_low >> phi_high\
                                >> is_small_sector >> threshold >> efficiency){
      thresholds_standalone.push_back(Threshold{eta_low, eta_high, \
                                                phi_low, phi_high, \
                                                is_small_sector, \
                                                threshold, efficiency});
   }

   while (input_file_regions >> eta_low >> eta_high >> phi_low >> phi_high\
                                >> is_small_sector >> threshold >> efficiency){
      thresholds_regions.push_back(Threshold{eta_low, eta_high, \
                                                phi_low, phi_high, \
                                                is_small_sector, \
                                                threshold, efficiency});
   }

   while (input_file_combined >> eta_low >> eta_high >> phi_low >> phi_high\
                                >> is_small_sector >> threshold >> efficiency){
      thresholds_combined.push_back(Threshold{eta_low, eta_high, \
                                                phi_low, phi_high, \
                                                is_small_sector, \
                                                threshold, efficiency});
   }


   while (input_file_stations >> segment_id >> eta_inner >> eta_middle >> eta_outer >> threshold >> efficiency){
      thresholds_stations.push_back(Threshold_station{segment_id, eta_inner, \
                                                eta_middle, eta_outer,\
                                                threshold, efficiency});
   }

   output_file = new TFile("rate_study.root", "RECREATE");

   ntuple = new TNtuple("ntuple", "ntuple", "pt:eta:phi:is_small_sector:roi_eta:roi_phi:pt_on");

   h_eta = new TH1F("h_eta", "h_eta", 84, -2.52, 2.52);
   h_eta_sagitta = new TH1F("h_eta_sagitta", "h_eta_sagitta", 84, -2.52, 2.52);
   h_eta_beta = new TH1F("h_eta_beta", "h_eta_beta", 84, -2.52, 2.52);
   h_eta_combined = new TH1F("h_eta_combined", "h_eta_combined", 84, -2.52, 2.52);
   h_eta_standalone = new TH1F("h_eta_standalone", "h_eta_standalone", 84, -2.52, 2.52);
   h_eta_offline = new TH1F("h_eta_offline", "h_eta_offline", 84, -2.52, 2.52);

   h_pt_on_pt_off = new TH2F("h_pt_on_pt_off", ";p_{T}^{CB} [GeV];p_{T}^{on} [GeV]", 1000,0,100,1000,0,100);
}

Bool_t rate_study::Process(Long64_t entry)
{
   // The Process() function is called for each entry in the tree (or possibly
   // keyed object in the case of PROOF) to be processed. The entry argument
   // specifies which entry in the currently loaded tree is to be processed.
   // It can be passed to either rate_study::GetEntry() or TBranch::GetEntry()
   // to read either all or the required parts of the data. When processing
   // keyed objects with PROOF, the object is already loaded and is available
   // via the fObject pointer.
   //
   // This function should contain the "body" of the analysis. It can contain
   // simple or elaborate selection criteria, run algorithms on the data
   // of the event and typically fill histograms.
   //
   // The processing can be stopped by calling Abort().
   //
   // Use fStatus to set the return value of TTree::Process().
   //
   // The return value is currently not used.

   // print event number all 10 000 events
   if(entry % 10000 == 0)
      std::cout << "Event " << entry << " processed." << std::endl;
   GetEntry(entry);
   // loop over all entries in this ntupe, it includes all trigger candidates that are matched to offline muons
   // with pt < 100 GeV

   // fill all muons after phase-1 trigger requirements
   h_eta->Fill(trig_l1_roi_eta);

   // fill muons fulfilling the stand-alone requirement
   for(Threshold threshold : thresholds_standalone){
      if(abs(eta) > threshold.eta_low && abs(eta) < threshold.eta_high && \
         phi > threshold.phi_low && phi < threshold.phi_high && \
         is_small_sector == threshold.is_small_sector){
         if(sa_pt > threshold.threshold){
            h_eta_standalone->Fill(trig_l1_roi_eta);
            break;
         }
      }
   }

   // fill all offline muons with pt > 20 GeV
   if(pt > 20.){
      h_eta_offline->Fill(trig_l1_roi_eta);
   }

   // fill muons fulfilling the sagitta requirement

   // fill muons fulfilling the beta requirement

   // fill muons fulfilling the combined requirement
   double pt_sagitta_stations = pt_on_sagitta_stations(sagitta, eta, phi_mod, seg_combination_id, eta_index_inner, eta_index_middle, eta_index_outer, phi_index);
   double pt_sagitta_regions = pt_on_sagitta_regions(sagitta, eta, phi_mod, is_barrel, is_transition_region, is_small_sector, chamber_type_inner);

   double pt_beta_oi_regions = pt_on_beta_oi_regions(beta_outer, beta_inner, eta, phi_mod, is_barrel, is_transition_region, is_small_sector, chamber_type_inner);
   double pt_beta_om_regions = pt_on_beta_om_regions(beta_outer, beta_middle, eta, phi_mod, is_barrel, is_transition_region, is_small_sector, chamber_type_inner);
   double pt_beta_mi_regions = pt_on_beta_mi_regions(beta_middle, beta_inner, eta, phi_mod, is_barrel, is_transition_region, is_small_sector, chamber_type_inner);
   

   float pt_rec = 999;

   // first try angle method which works almost everywhere
   // the methods should be more precise in this order mi < om < oi
   // because of independence of special type inner chambers and the length of the lever arm 
   //if(abs(phi_mod) > 0){ // check if there is a segment
      if(pt_beta_mi_regions > 0 && pt_beta_mi_regions < 999){
         pt_rec = pt_beta_mi_regions;
      }
      if(is_barrel && pt_beta_om_regions > 0 && pt_beta_om_regions < 999){
         pt_rec = pt_beta_om_regions;
      }
      if(is_barrel && pt_beta_oi_regions > 10 && pt_beta_oi_regions < 100){
         pt_rec = pt_beta_oi_regions;
      }
   //}

   // if possible, change result from angle method by sagitta method
   // only apply sagitta method in regions where magnetic field is homogeneous
   if(abs(sagitta) > 0 && (abs(eta) < 1.4 || abs(eta) > 1.6)){
      if(pt_sagitta_regions < 100){
         pt_rec = pt_sagitta_regions;
      }

      if(seg_combination_id > 0 && pt_sagitta_stations < 500){ // was 200
         pt_rec = pt_sagitta_stations;
      }
   }

   h_pt_on_pt_off->Fill(pt, pt_rec);
   ntuple->Fill(pt, eta, phi, is_small_sector, trig_l1_roi_eta, trig_l1_roi_phi, pt_rec);


   // check pt_rec against sagitta threshold
   if(abs(sagitta) > 0 && (abs(eta) < 1.4 || abs(eta) > 1.6) && seg_combination_id > 0){
      for(Threshold_station threshold : thresholds_stations){
         if(seg_combination_id == threshold.segment_id && \
            eta_index_inner == threshold.eta_inner && \
            eta_index_middle == threshold.eta_middle && \
            eta_index_outer == threshold.eta_outer){
      
            if(pt_sagitta_stations > threshold.threshold){
               h_eta_combined->Fill(trig_l1_roi_eta);
               break;
            }
         }
      }
   }
   else if(abs(sagitta) > 0 && (abs(eta) < 1.4 || abs(eta) > 1.6)){
      for(Threshold threshold : thresholds_regions){
         if(abs(eta) > threshold.eta_low && abs(eta) < threshold.eta_high && \
            phi > threshold.phi_low && phi < threshold.phi_high && \
            is_small_sector == threshold.is_small_sector){
      
            if(pt_sagitta_regions > threshold.threshold){
               h_eta_combined->Fill(trig_l1_roi_eta);
               break;
            }
         }
      }
   }
   else{
      // check pt_rec against threshold
      for(Threshold threshold : thresholds_combined){
         if(abs(eta) > threshold.eta_low && abs(eta) < threshold.eta_high && \
            phi > threshold.phi_low && phi < threshold.phi_high && \
            is_small_sector == threshold.is_small_sector){
            if(pt_rec > threshold.threshold){
               h_eta_combined->Fill(trig_l1_roi_eta);
               break;
            }
         }
      }
   }


   return kTRUE;
}

void rate_study::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

   // write all to file
   output_file->Write();
   output_file->Close();
}

void rate_study::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.

}