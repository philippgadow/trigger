//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Oct 14 15:05:11 2016 by ROOT version 6.04/06
// from TTree L1_MDT_trigger_tree/L1 MDT TRIGGER TREE
// found on file: user.pgadow.data12_8TeV.MERGE.physics_EnhancedBias.recon.ESD.f507.160517.L1MU20.minitupel.sagitta_tr.root
//////////////////////////////////////////////////////////

#ifndef rate_study_h
#define rate_study_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <vector>
// Header file for the classes stored in the TTree if any.

struct Threshold {
   float eta_low;
   float eta_high;
   float phi_low;
   float phi_high;
   int is_small_sector;
   float threshold;
   float effciency;

}

class rate_study : public TSelector {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Double_t        pt;
   Double_t        eta;
   Double_t        phi;
   Double_t        fitChi2;
   Double_t        fitNumberDoF;
   Double_t        min_dR;
   Double_t        sa_pt;
   Double_t        sa_eta;
   Double_t        sa_phi;
   Double_t        sa_fitChi2;
   Double_t        sa_fitNumberDoF;
   Int_t           nb_hits;
   Int_t           charge;
   Double_t        phi_mod;
   Int_t           is_small_sector;
   UInt_t          seg_combination_id;
   Int_t           chamber_type_inner;
   Int_t           chamber_type_middle;
   Int_t           chamber_type_outer;
   Int_t           phi_index;
   Int_t           eta_index_inner;
   Int_t           eta_index_middle;
   Int_t           eta_index_outer;
   Int_t           is_barrel;
   Int_t           is_transition_region;
   Int_t           is_endcap;
   Double_t        slope_inner;
   Double_t        slope_middle;
   Double_t        slope_outer;
   Double_t        beta_inner;
   Double_t        beta_middle;
   Double_t        beta_outer;
   Double_t        z0_inner;
   Double_t        z0_middle;
   Double_t        z0_outer;
   Double_t        z_inner;
   Double_t        z_middle;
   Double_t        z_outer;
   Double_t        z_inner_corr;
   Double_t        z_middle_corr;
   Double_t        z_outer_corr;
   Double_t        ri;
   Double_t        rm;
   Double_t        ro;
   Double_t        ri_corr;
   Double_t        rm_corr;
   Double_t        ro_corr;
   Double_t        sagitta;
   Double_t        sagitta_corr;
   Double_t        dz;
   UInt_t          has_sagitta;
   Int_t           force_accept;
   Int_t           trig_l1_passed;
   Int_t           trig_l1_prescale;
   Double_t        trig_l1_roi_phi;
   Double_t        trig_l1_roi_eta;
   Int_t           trig_l2_passed;
   Int_t           trig_l2_prescale;

   // List of branches
   TBranch        *b_pt;   //!
   TBranch        *b_eta;   //!
   TBranch        *b_phi;   //!
   TBranch        *b_fitChi2;   //!
   TBranch        *b_fitNumberDoF;   //!
   TBranch        *b_min_dR;   //!
   TBranch        *b_sa_pt;   //!
   TBranch        *b_sa_eta;   //!
   TBranch        *b_sa_phi;   //!
   TBranch        *b_sa_fitChi2;   //!
   TBranch        *b_sa_fitNumberDoF;   //!
   TBranch        *b_nb_hits;   //!
   TBranch        *b_charge;   //!
   TBranch        *b_phi_mod;   //!
   TBranch        *b_is_small_sector;   //!
   TBranch        *b_seg_combination_id;   //!
   TBranch        *b_chamber_type_inner;   //!
   TBranch        *b_chamber_type_middle;   //!
   TBranch        *b_chamber_type_outer;   //!
   TBranch        *b_phi_index;   //!
   TBranch        *b_eta_index_inner;   //!
   TBranch        *b_eta_index_middle;   //!
   TBranch        *b_eta_index_outer;   //!
   TBranch        *b_is_barrel;   //!
   TBranch        *b_is_transition_region;   //!
   TBranch        *b_is_endcap;   //!
   TBranch        *b_slope_inner;   //!
   TBranch        *b_slope_middle;   //!
   TBranch        *b_slope_outer;   //!
   TBranch        *b_beta_inner;   //!
   TBranch        *b_beta_middle;   //!
   TBranch        *b_beta_outer;   //!
   TBranch        *b_z0_inner;   //!
   TBranch        *b_z0_middle;   //!
   TBranch        *b_z0_outer;   //!
   TBranch        *b_z_inner;   //!
   TBranch        *b_z_middle;   //!
   TBranch        *b_z_outer;   //!
   TBranch        *b_z_inner_corr;   //!
   TBranch        *b_z_middle_corr;   //!
   TBranch        *b_z_outer_corr;   //!
   TBranch        *b_ri;   //!
   TBranch        *b_rm;   //!
   TBranch        *b_ro;   //!
   TBranch        *b_ri_corr;   //!
   TBranch        *b_rm_corr;   //!
   TBranch        *b_ro_corr;   //!
   TBranch        *b_sagitta;   //!
   TBranch        *b_sagitta_corr;   //!
   TBranch        *b_dz;   //!
   TBranch        *b_has_sagitta;   //!
   TBranch        *b_force_accept;   //!
   TBranch        *b_trig_l1_passed;   //!
   TBranch        *b_trig_l1_prescale;   //!
   TBranch        *b_trig_l1_roi_phi;   //!
   TBranch        *b_trig_l1_roi_eta;   //!
   TBranch        *b_trig_l2_passed;   //!
   TBranch        *b_trig_l2_prescale;   //!

   rate_study(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~rate_study() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   // user defined variables
   TFile* output_file;
   TH1F* h_eta;
   TH1F* h_eta_sagitta;
   TH1F* h_eta_beta;
   TH1F* h_eta_combined;
   TH1F* h_eta_standalone;
   TH1F* h_eta_offline;

   std::vector<Threshold> thresholds_standalone;
   ClassDef(rate_study,0);
};

#endif

#ifdef rate_study_cxx
void rate_study::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("pt", &pt, &b_pt);
   fChain->SetBranchAddress("eta", &eta, &b_eta);
   fChain->SetBranchAddress("phi", &phi, &b_phi);
   fChain->SetBranchAddress("fitChi2", &fitChi2, &b_fitChi2);
   fChain->SetBranchAddress("fitNumberDoF", &fitNumberDoF, &b_fitNumberDoF);
   fChain->SetBranchAddress("min_dR", &min_dR, &b_min_dR);
   fChain->SetBranchAddress("sa_pt", &sa_pt, &b_sa_pt);
   fChain->SetBranchAddress("sa_eta", &sa_eta, &b_sa_eta);
   fChain->SetBranchAddress("sa_phi", &sa_phi, &b_sa_phi);
   fChain->SetBranchAddress("sa_fitChi2", &sa_fitChi2, &b_sa_fitChi2);
   fChain->SetBranchAddress("sa_fitNumberDoF", &sa_fitNumberDoF, &b_sa_fitNumberDoF);
   fChain->SetBranchAddress("nb_hits", &nb_hits, &b_nb_hits);
   fChain->SetBranchAddress("charge", &charge, &b_charge);
   fChain->SetBranchAddress("phi_mod", &phi_mod, &b_phi_mod);
   fChain->SetBranchAddress("is_small_sector", &is_small_sector, &b_is_small_sector);
   fChain->SetBranchAddress("seg_combination_id", &seg_combination_id, &b_seg_combination_id);
   fChain->SetBranchAddress("chamber_type_inner", &chamber_type_inner, &b_chamber_type_inner);
   fChain->SetBranchAddress("chamber_type_middle", &chamber_type_middle, &b_chamber_type_middle);
   fChain->SetBranchAddress("chamber_type_outer", &chamber_type_outer, &b_chamber_type_outer);
   fChain->SetBranchAddress("phi_index", &phi_index, &b_phi_index);
   fChain->SetBranchAddress("eta_index_inner", &eta_index_inner, &b_eta_index_inner);
   fChain->SetBranchAddress("eta_index_middle", &eta_index_middle, &b_eta_index_middle);
   fChain->SetBranchAddress("eta_index_outer", &eta_index_outer, &b_eta_index_outer);
   fChain->SetBranchAddress("is_barrel", &is_barrel, &b_is_barrel);
   fChain->SetBranchAddress("is_transition_region", &is_transition_region, &b_is_transition_region);
   fChain->SetBranchAddress("is_endcap", &is_endcap, &b_is_endcap);
   fChain->SetBranchAddress("slope_inner", &slope_inner, &b_slope_inner);
   fChain->SetBranchAddress("slope_middle", &slope_middle, &b_slope_middle);
   fChain->SetBranchAddress("slope_outer", &slope_outer, &b_slope_outer);
   fChain->SetBranchAddress("beta_inner", &beta_inner, &b_beta_inner);
   fChain->SetBranchAddress("beta_middle", &beta_middle, &b_beta_middle);
   fChain->SetBranchAddress("beta_outer", &beta_outer, &b_beta_outer);
   fChain->SetBranchAddress("z0_inner", &z0_inner, &b_z0_inner);
   fChain->SetBranchAddress("z0_middle", &z0_middle, &b_z0_middle);
   fChain->SetBranchAddress("z0_outer", &z0_outer, &b_z0_outer);
   fChain->SetBranchAddress("z_inner", &z_inner, &b_z_inner);
   fChain->SetBranchAddress("z_middle", &z_middle, &b_z_middle);
   fChain->SetBranchAddress("z_outer", &z_outer, &b_z_outer);
   fChain->SetBranchAddress("z_inner_corr", &z_inner_corr, &b_z_inner_corr);
   fChain->SetBranchAddress("z_middle_corr", &z_middle_corr, &b_z_middle_corr);
   fChain->SetBranchAddress("z_outer_corr", &z_outer_corr, &b_z_outer_corr);
   fChain->SetBranchAddress("ri", &ri, &b_ri);
   fChain->SetBranchAddress("rm", &rm, &b_rm);
   fChain->SetBranchAddress("ro", &ro, &b_ro);
   fChain->SetBranchAddress("ri_corr", &ri_corr, &b_ri_corr);
   fChain->SetBranchAddress("rm_corr", &rm_corr, &b_rm_corr);
   fChain->SetBranchAddress("ro_corr", &ro_corr, &b_ro_corr);
   fChain->SetBranchAddress("sagitta", &sagitta, &b_sagitta);
   fChain->SetBranchAddress("sagitta_corr", &sagitta_corr, &b_sagitta_corr);
   fChain->SetBranchAddress("dz", &dz, &b_dz);
   fChain->SetBranchAddress("has_sagitta", &has_sagitta, &b_has_sagitta);
   fChain->SetBranchAddress("force_accept", &force_accept, &b_force_accept);
   fChain->SetBranchAddress("trig_l1_passed", &trig_l1_passed, &b_trig_l1_passed);
   fChain->SetBranchAddress("trig_l1_prescale", &trig_l1_prescale, &b_trig_l1_prescale);
   fChain->SetBranchAddress("trig_l1_roi_phi", &trig_l1_roi_phi, &b_trig_l1_roi_phi);
   fChain->SetBranchAddress("trig_l1_roi_eta", &trig_l1_roi_eta, &b_trig_l1_roi_eta);
   fChain->SetBranchAddress("trig_l2_passed", &trig_l2_passed, &b_trig_l2_passed);
   fChain->SetBranchAddress("trig_l2_prescale", &trig_l2_prescale, &b_trig_l2_prescale);
}

Bool_t rate_study::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef rate_study_cxx
