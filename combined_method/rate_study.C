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

// include pt parametrisations
#import "pt_on_sagitta_regions.cxx"
#import "pt_on_sagitta_stations.cxx"

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

   output_file = new TFile("rate_study.root", "RECREATE");

   h_eta = new TH1F("h_eta", "h_eta", 84, -2.52, 2.52);
   h_eta_sagitta = new TH1F("h_eta_sagitta", "h_eta_sagitta", 84, -2.52, 2.52);
   h_eta_beta = new TH1F("h_eta_beta", "h_eta_beta", 84, -2.52, 2.52);
   h_eta_standalone = new TH1F("h_eta_standalone", "h_eta_standalone", 84, -2.52, 2.52);
   h_eta_offline = new TH1F("h_eta_offline", "h_eta", 84, -2.52, 2.52);
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
   h_eta->Fill(eta);

   // fill all offline muons with pt > 20 GeV
   if(pt > 20.){
      h_eta_offline->Fill(eta);
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
