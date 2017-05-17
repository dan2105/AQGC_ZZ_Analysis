//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Sep 28 19:39:57 2015 by ROOT version 5.34/28
// from TTree T/Tree
// found on file: AAZZ_13TeV.root
//////////////////////////////////////////////////////////

#ifndef AAZZAnalysis_h
#define AAZZAnalysis_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class AAZZAnalysis {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Int_t           n_mu;
   Double_t        mu_pt[5];   //[n_mu]
   Double_t        mu_px[5];   //[n_mu]
   Double_t        mu_py[5];   //[n_mu]
   Double_t        mu_pz[5];   //[n_mu]
   Double_t        mu_eta[5];   //[n_mu]
   Double_t        mu_phi[5];   //[n_mu]
   Double_t        mu_energy[5];   //[n_mu]
   Double_t        mu_mass[5];   //[n_mu]
   Double_t        mu_charge[5];   //[n_mu]
   Int_t           n_e;
   Double_t        e_pt[6];   //[n_e]
   Double_t        e_px[6];   //[n_e]
   Double_t        e_py[6];   //[n_e]
   Double_t        e_pz[6];   //[n_e]
   Double_t        e_eta[6];   //[n_e]
   Double_t        e_phi[6];   //[n_e]
   Double_t        e_energy[6];   //[n_e]
   Double_t        e_mass[6];   //[n_e]
   Double_t        e_charge[6];   //[n_e]
   Int_t           n_chg;
   Int_t           chg_id[88];   //[n_chg]
   Double_t        chg_ch[88];   //[n_chg]
   Double_t        chg_px[88];   //[n_chg]
   Double_t        chg_py[88];   //[n_chg]
   Double_t        chg_pz[88];   //[n_chg]
   Double_t        chg_pt[88];   //[n_chg]
   Double_t        chg_eta[88];   //[n_chg]
   Double_t        chg_phi[88];   //[n_chg]
   Double_t        chg_energy[88];   //[n_chg]
   Double_t        chg_mass[88];   //[n_chg]
   Int_t           n_proton;
   Double_t        proton_px[9];   //[n_proton]
   Double_t        proton_py[9];   //[n_proton]
   Double_t        proton_pz[9];   //[n_proton]
   Double_t        proton_pt[9];   //[n_proton]
   Double_t        proton_energy[9];   //[n_proton]
   Int_t           n_jet;
   Double_t        jet_px[1];   //[n_jet]
   Double_t        jet_py[1];   //[n_jet]
   Double_t        jet_pz[1];   //[n_jet]
   Double_t        jet_pt[1];   //[n_jet]
   Double_t        jet_energy[1];   //[n_jet]
   Int_t           n_Z;
   Double_t        Z_pt[2];   //[n_Z]
   Double_t        Z_px[2];   //[n_Z]
   Double_t        Z_py[2];   //[n_Z]
   Double_t        Z_pz[2];   //[n_Z]
   Double_t        Z_eta[2];   //[n_Z]
   Double_t        Z_phi[2];   //[n_Z]
   Double_t        Z_energy[2];   //[n_Z]
   Double_t        Z_mass[2];   //[n_Z]
   Int_t           Z_decay_first_pid[2];   //[n_Z]
   Double_t        Z_decay_first_pt[2];   //[n_Z]
   Double_t        Z_decay_first_px[2];   //[n_Z]
   Double_t        Z_decay_first_py[2];   //[n_Z]
   Double_t        Z_decay_first_pz[2];   //[n_Z]
   Double_t        Z_decay_first_eta[2];   //[n_Z]
   Double_t        Z_decay_first_phi[2];   //[n_Z]
   Double_t        Z_decay_first_energy[2];   //[n_Z]
   Double_t        Z_decay_first_mass[2];   //[n_Z]
   Double_t        Z_decay_first_charge[2];   //[n_Z]
   Int_t           Z_decay_second_pid[2];   //[n_Z]
   Double_t        Z_decay_second_pt[2];   //[n_Z]
   Double_t        Z_decay_second_px[2];   //[n_Z]
   Double_t        Z_decay_second_py[2];   //[n_Z]
   Double_t        Z_decay_second_pz[2];   //[n_Z]
   Double_t        Z_decay_second_eta[2];   //[n_Z]
   Double_t        Z_decay_second_phi[2];   //[n_Z]
   Double_t        Z_decay_second_energy[2];   //[n_Z]
   Double_t        Z_decay_second_mass[2];   //[n_Z]
   Double_t        Z_decay_second_charge[2];   //[n_Z]

   // List of branches
   TBranch        *b_n_mu;   //!
   TBranch        *b_mu_pt;   //!
   TBranch        *b_mu_px;   //!
   TBranch        *b_mu_py;   //!
   TBranch        *b_mu_pz;   //!
   TBranch        *b_mu_eta;   //!
   TBranch        *b_mu_phi;   //!
   TBranch        *b_mu_energy;   //!
   TBranch        *b_mu_mass;   //!
   TBranch        *b_mu_charge;   //!
   TBranch        *b_n_e;   //!
   TBranch        *b_e_pt;   //!
   TBranch        *b_e_px;   //!
   TBranch        *b_e_py;   //!
   TBranch        *b_e_pz;   //!
   TBranch        *b_e_eta;   //!
   TBranch        *b_e_phi;   //!
   TBranch        *b_e_energy;   //!
   TBranch        *b_e_mass;   //!
   TBranch        *b_e_charge;   //!
   TBranch        *b_n_chg;   //!
   TBranch        *b_chg_id;   //!
   TBranch        *b_chg_ch;   //!
   TBranch        *b_chg_px;   //!
   TBranch        *b_chg_py;   //!
   TBranch        *b_chg_pz;   //!
   TBranch        *b_chg_pt;   //!
   TBranch        *b_chg_eta;   //!
   TBranch        *b_chg_phi;   //!
   TBranch        *b_chg_energy;   //!
   TBranch        *b_chg_mass;   //!
   TBranch        *b_n_proton;   //!
   TBranch        *b_proton_px;   //!
   TBranch        *b_proton_py;   //!
   TBranch        *b_proton_pz;   //!
   TBranch        *b_proton_pt;   //!
   TBranch        *b_proton_energy;   //!
   TBranch        *b_n_jet;   //!
   TBranch        *b_jet_px;   //!
   TBranch        *b_jet_py;   //!
   TBranch        *b_jet_pz;   //!
   TBranch        *b_jet_pt;   //!
   TBranch        *b_jet_energy;   //!
   TBranch        *b_n_Z;   //!
   TBranch        *b_Z_pt;   //!
   TBranch        *b_Z_px;   //!
   TBranch        *b_Z_py;   //!
   TBranch        *b_Z_pz;   //!
   TBranch        *b_Z_eta;   //!
   TBranch        *b_Z_phi;   //!
   TBranch        *b_Z_energy;   //!
   TBranch        *b_Z_mass;   //!
   TBranch        *b_Z_decay_first_pid;   //!
   TBranch        *b_Z_decay_first_pt;   //!
   TBranch        *b_Z_decay_first_px;   //!
   TBranch        *b_Z_decay_first_py;   //!
   TBranch        *b_Z_decay_first_pz;   //!
   TBranch        *b_Z_decay_first_eta;   //!
   TBranch        *b_Z_decay_first_phi;   //!
   TBranch        *b_Z_decay_first_energy;   //!
   TBranch        *b_Z_decay_first_mass;   //!
   TBranch        *b_Z_decay_first_charge;   //!
   TBranch        *b_Z_decay_second_pid;   //!
   TBranch        *b_Z_decay_second_pt;   //!
   TBranch        *b_Z_decay_second_px;   //!
   TBranch        *b_Z_decay_second_py;   //!
   TBranch        *b_Z_decay_second_pz;   //!
   TBranch        *b_Z_decay_second_eta;   //!
   TBranch        *b_Z_decay_second_phi;   //!
   TBranch        *b_Z_decay_second_energy;   //!
   TBranch        *b_Z_decay_second_mass;   //!
   TBranch        *b_Z_decay_second_charge;   //!

   AAZZAnalysis(TTree *tree=0);
   virtual ~AAZZAnalysis();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef AAZZAnalysis_cxx
AAZZAnalysis::AAZZAnalysis(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
     /*
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("AAZZ_13TeV.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("AAZZ_13TeV.root");
      }
      f->GetObject("T",tree);
     */
   
     
     TChain * chain = new TChain("T","T");
     

     //pp ZZ 

          
     /*
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_1/FPMC_ppZZ_13TeV-selectZZ-v3_1.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_2/FPMC_ppZZ_13TeV-selectZZ-v3_2.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_3/FPMC_ppZZ_13TeV-selectZZ-v3_3.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_4/FPMC_ppZZ_13TeV-selectZZ-v3_4.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_5/FPMC_ppZZ_13TeV-selectZZ-v3_5.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_6/FPMC_ppZZ_13TeV-selectZZ-v3_6.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_7/FPMC_ppZZ_13TeV-selectZZ-v3_7.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_8/FPMC_ppZZ_13TeV-selectZZ-v3_8.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_9/FPMC_ppZZ_13TeV-selectZZ-v3_9.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_10/FPMC_ppZZ_13TeV-selectZZ-v3_10.root/T");
      


       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_11/FPMC_ppZZ_13TeV-selectZZ-v3_11.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_12/FPMC_ppZZ_13TeV-selectZZ-v3_12.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_13/FPMC_ppZZ_13TeV-selectZZ-v3_13.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_14/FPMC_ppZZ_13TeV-selectZZ-v3_14.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_15/FPMC_ppZZ_13TeV-selectZZ-v3_15.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_16/FPMC_ppZZ_13TeV-selectZZ-v3_16.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_17/FPMC_ppZZ_13TeV-selectZZ-v3_17.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_18/FPMC_ppZZ_13TeV-selectZZ-v3_18.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_19/FPMC_ppZZ_13TeV-selectZZ-v3_19.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_20/FPMC_ppZZ_13TeV-selectZZ-v3_20.root/T");
       

       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_21/FPMC_ppZZ_13TeV-selectZZ-v3_21.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_22/FPMC_ppZZ_13TeV-selectZZ-v3_22.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_23/FPMC_ppZZ_13TeV-selectZZ-v3_23.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_24/FPMC_ppZZ_13TeV-selectZZ-v3_24.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_25/FPMC_ppZZ_13TeV-selectZZ-v3_25.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_26/FPMC_ppZZ_13TeV-selectZZ-v3_26.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_27/FPMC_ppZZ_13TeV-selectZZ-v3_27.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_28/FPMC_ppZZ_13TeV-selectZZ-v3_28.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_29/FPMC_ppZZ_13TeV-selectZZ-v3_29.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_30/FPMC_ppZZ_13TeV-selectZZ-v3_30.root/T");
      

       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_31/FPMC_ppZZ_13TeV-selectZZ-v3_31.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_32/FPMC_ppZZ_13TeV-selectZZ-v3_32.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_33/FPMC_ppZZ_13TeV-selectZZ-v3_33.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_34/FPMC_ppZZ_13TeV-selectZZ-v3_34.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_35/FPMC_ppZZ_13TeV-selectZZ-v3_35.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_36/FPMC_ppZZ_13TeV-selectZZ-v3_36.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_37/FPMC_ppZZ_13TeV-selectZZ-v3_37.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_38/FPMC_ppZZ_13TeV-selectZZ-v3_38.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_39/FPMC_ppZZ_13TeV-selectZZ-v3_39.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_40/FPMC_ppZZ_13TeV-selectZZ-v3_40.root/T");
    


      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_41/FPMC_ppZZ_13TeV-selectZZ-v3_41.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_42/FPMC_ppZZ_13TeV-selectZZ-v3_42.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_43/FPMC_ppZZ_13TeV-selectZZ-v3_43.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_44/FPMC_ppZZ_13TeV-selectZZ-v3_44.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_45/FPMC_ppZZ_13TeV-selectZZ-v3_45.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_46/FPMC_ppZZ_13TeV-selectZZ-v3_46.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_47/FPMC_ppZZ_13TeV-selectZZ-v3_47.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_48/FPMC_ppZZ_13TeV-selectZZ-v3_48.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_49/FPMC_ppZZ_13TeV-selectZZ-v3_49.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_50/FPMC_ppZZ_13TeV-selectZZ-v3_50.root/T");
     
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_51/FPMC_ppZZ_13TeV-selectZZ-v3_51.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_52/FPMC_ppZZ_13TeV-selectZZ-v3_52.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_53/FPMC_ppZZ_13TeV-selectZZ-v3_53.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_54/FPMC_ppZZ_13TeV-selectZZ-v3_54.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_55/FPMC_ppZZ_13TeV-selectZZ-v3_55.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_56/FPMC_ppZZ_13TeV-selectZZ-v3_56.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_57/FPMC_ppZZ_13TeV-selectZZ-v3_57.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_58/FPMC_ppZZ_13TeV-selectZZ-v3_58.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_59/FPMC_ppZZ_13TeV-selectZZ-v3_59.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_60/FPMC_ppZZ_13TeV-selectZZ-v3_60.root/T");
    

      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_61/FPMC_ppZZ_13TeV-selectZZ-v3_61.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_62/FPMC_ppZZ_13TeV-selectZZ-v3_62.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_63/FPMC_ppZZ_13TeV-selectZZ-v3_63.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_64/FPMC_ppZZ_13TeV-selectZZ-v3_64.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_65/FPMC_ppZZ_13TeV-selectZZ-v3_65.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_66/FPMC_ppZZ_13TeV-selectZZ-v3_66.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_67/FPMC_ppZZ_13TeV-selectZZ-v3_67.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_68/FPMC_ppZZ_13TeV-selectZZ-v3_68.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_69/FPMC_ppZZ_13TeV-selectZZ-v3_69.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_70/FPMC_ppZZ_13TeV-selectZZ-v3_70.root/T");
     

      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_71/FPMC_ppZZ_13TeV-selectZZ-v3_71.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_72/FPMC_ppZZ_13TeV-selectZZ-v3_72.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_73/FPMC_ppZZ_13TeV-selectZZ-v3_73.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_74/FPMC_ppZZ_13TeV-selectZZ-v3_74.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_75/FPMC_ppZZ_13TeV-selectZZ-v3_75.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_76/FPMC_ppZZ_13TeV-selectZZ-v3_76.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_77/FPMC_ppZZ_13TeV-selectZZ-v3_77.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_78/FPMC_ppZZ_13TeV-selectZZ-v3_78.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_79/FPMC_ppZZ_13TeV-selectZZ-v3_79.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_80/FPMC_ppZZ_13TeV-selectZZ-v3_80.root/T");
      

      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_81/FPMC_ppZZ_13TeV-selectZZ-v3_81.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_82/FPMC_ppZZ_13TeV-selectZZ-v3_82.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_83/FPMC_ppZZ_13TeV-selectZZ-v3_83.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_84/FPMC_ppZZ_13TeV-selectZZ-v3_84.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_85/FPMC_ppZZ_13TeV-selectZZ-v3_85.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_86/FPMC_ppZZ_13TeV-selectZZ-v3_86.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_87/FPMC_ppZZ_13TeV-selectZZ-v3_87.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_88/FPMC_ppZZ_13TeV-selectZZ-v3_88.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_89/FPMC_ppZZ_13TeV-selectZZ-v3_89.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_90/FPMC_ppZZ_13TeV-selectZZ-v3_90.root/T");
            

      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_91/FPMC_ppZZ_13TeV-selectZZ-v3_91.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_92/FPMC_ppZZ_13TeV-selectZZ-v3_92.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_93/FPMC_ppZZ_13TeV-selectZZ-v3_93.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_94/FPMC_ppZZ_13TeV-selectZZ-v3_94.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_95/FPMC_ppZZ_13TeV-selectZZ-v3_95.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_96/FPMC_ppZZ_13TeV-selectZZ-v3_96.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_97/FPMC_ppZZ_13TeV-selectZZ-v3_97.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_98/FPMC_ppZZ_13TeV-selectZZ-v3_98.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_99/FPMC_ppZZ_13TeV-selectZZ-v3_99.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_100/FPMC_ppZZ_13TeV-selectZZ-v3_100.root/T");



      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_101/FPMC_ppZZ_13TeV-selectZZ-v3_101.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_102/FPMC_ppZZ_13TeV-selectZZ-v3_102.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_103/FPMC_ppZZ_13TeV-selectZZ-v3_103.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_104/FPMC_ppZZ_13TeV-selectZZ-v3_104.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_105/FPMC_ppZZ_13TeV-selectZZ-v3_105.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_106/FPMC_ppZZ_13TeV-selectZZ-v3_106.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_107/FPMC_ppZZ_13TeV-selectZZ-v3_107.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_108/FPMC_ppZZ_13TeV-selectZZ-v3_108.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_109/FPMC_ppZZ_13TeV-selectZZ-v3_109.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_110/FPMC_ppZZ_13TeV-selectZZ-v3_110.root/T");



      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_111/FPMC_ppZZ_13TeV-selectZZ-v3_111.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_112/FPMC_ppZZ_13TeV-selectZZ-v3_112.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_113/FPMC_ppZZ_13TeV-selectZZ-v3_113.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_114/FPMC_ppZZ_13TeV-selectZZ-v3_114.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_115/FPMC_ppZZ_13TeV-selectZZ-v3_115.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_116/FPMC_ppZZ_13TeV-selectZZ-v3_116.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_117/FPMC_ppZZ_13TeV-selectZZ-v3_117.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_118/FPMC_ppZZ_13TeV-selectZZ-v3_118.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_119/FPMC_ppZZ_13TeV-selectZZ-v3_119.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_120/FPMC_ppZZ_13TeV-selectZZ-v3_120.root/T");



      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_121/FPMC_ppZZ_13TeV-selectZZ-v3_121.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_122/FPMC_ppZZ_13TeV-selectZZ-v3_122.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_123/FPMC_ppZZ_13TeV-selectZZ-v3_123.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_124/FPMC_ppZZ_13TeV-selectZZ-v3_124.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_125/FPMC_ppZZ_13TeV-selectZZ-v3_125.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_126/FPMC_ppZZ_13TeV-selectZZ-v3_126.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_127/FPMC_ppZZ_13TeV-selectZZ-v3_127.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_128/FPMC_ppZZ_13TeV-selectZZ-v3_128.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_129/FPMC_ppZZ_13TeV-selectZZ-v3_129.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_130/FPMC_ppZZ_13TeV-selectZZ-v3_130.root/T");


      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_131/FPMC_ppZZ_13TeV-selectZZ-v3_131.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_132/FPMC_ppZZ_13TeV-selectZZ-v3_132.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_133/FPMC_ppZZ_13TeV-selectZZ-v3_133.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_134/FPMC_ppZZ_13TeV-selectZZ-v3_134.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_135/FPMC_ppZZ_13TeV-selectZZ-v3_135.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_136/FPMC_ppZZ_13TeV-selectZZ-v3_136.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_137/FPMC_ppZZ_13TeV-selectZZ-v3_137.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_138/FPMC_ppZZ_13TeV-selectZZ-v3_138.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_139/FPMC_ppZZ_13TeV-selectZZ-v3_139.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_140/FPMC_ppZZ_13TeV-selectZZ-v3_140.root/T");



      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_141/FPMC_ppZZ_13TeV-selectZZ-v3_141.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_142/FPMC_ppZZ_13TeV-selectZZ-v3_142.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_143/FPMC_ppZZ_13TeV-selectZZ-v3_143.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_144/FPMC_ppZZ_13TeV-selectZZ-v3_144.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_145/FPMC_ppZZ_13TeV-selectZZ-v3_145.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_146/FPMC_ppZZ_13TeV-selectZZ-v3_146.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_147/FPMC_ppZZ_13TeV-selectZZ-v3_147.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_148/FPMC_ppZZ_13TeV-selectZZ-v3_148.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_149/FPMC_ppZZ_13TeV-selectZZ-v3_149.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_150/FPMC_ppZZ_13TeV-selectZZ-v3_150.root/T");




      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_151/FPMC_ppZZ_13TeV-selectZZ-v3_151.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_152/FPMC_ppZZ_13TeV-selectZZ-v3_152.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_153/FPMC_ppZZ_13TeV-selectZZ-v3_153.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_154/FPMC_ppZZ_13TeV-selectZZ-v3_154.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_155/FPMC_ppZZ_13TeV-selectZZ-v3_155.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_156/FPMC_ppZZ_13TeV-selectZZ-v3_156.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_157/FPMC_ppZZ_13TeV-selectZZ-v3_157.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_158/FPMC_ppZZ_13TeV-selectZZ-v3_158.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_159/FPMC_ppZZ_13TeV-selectZZ-v3_159.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_160/FPMC_ppZZ_13TeV-selectZZ-v3_160.root/T");



      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_161/FPMC_ppZZ_13TeV-selectZZ-v3_161.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_162/FPMC_ppZZ_13TeV-selectZZ-v3_162.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_163/FPMC_ppZZ_13TeV-selectZZ-v3_163.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_164/FPMC_ppZZ_13TeV-selectZZ-v3_164.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_165/FPMC_ppZZ_13TeV-selectZZ-v3_165.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_166/FPMC_ppZZ_13TeV-selectZZ-v3_166.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_167/FPMC_ppZZ_13TeV-selectZZ-v3_167.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_168/FPMC_ppZZ_13TeV-selectZZ-v3_168.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_169/FPMC_ppZZ_13TeV-selectZZ-v3_169.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_170/FPMC_ppZZ_13TeV-selectZZ-v3_170.root/T");



      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_171/FPMC_ppZZ_13TeV-selectZZ-v3_171.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_172/FPMC_ppZZ_13TeV-selectZZ-v3_172.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_173/FPMC_ppZZ_13TeV-selectZZ-v3_173.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_174/FPMC_ppZZ_13TeV-selectZZ-v3_174.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_175/FPMC_ppZZ_13TeV-selectZZ-v3_175.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_176/FPMC_ppZZ_13TeV-selectZZ-v3_176.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_177/FPMC_ppZZ_13TeV-selectZZ-v3_177.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_178/FPMC_ppZZ_13TeV-selectZZ-v3_178.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_179/FPMC_ppZZ_13TeV-selectZZ-v3_179.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_180/FPMC_ppZZ_13TeV-selectZZ-v3_180.root/T");




      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_181/FPMC_ppZZ_13TeV-selectZZ-v3_181.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_182/FPMC_ppZZ_13TeV-selectZZ-v3_182.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_183/FPMC_ppZZ_13TeV-selectZZ-v3_183.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_184/FPMC_ppZZ_13TeV-selectZZ-v3_184.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_185/FPMC_ppZZ_13TeV-selectZZ-v3_185.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_186/FPMC_ppZZ_13TeV-selectZZ-v3_186.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_187/FPMC_ppZZ_13TeV-selectZZ-v3_187.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_188/FPMC_ppZZ_13TeV-selectZZ-v3_188.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_189/FPMC_ppZZ_13TeV-selectZZ-v3_189.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_190/FPMC_ppZZ_13TeV-selectZZ-v3_190.root/T");



      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_191/FPMC_ppZZ_13TeV-selectZZ-v3_191.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_192/FPMC_ppZZ_13TeV-selectZZ-v3_192.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_193/FPMC_ppZZ_13TeV-selectZZ-v3_193.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_194/FPMC_ppZZ_13TeV-selectZZ-v3_194.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_195/FPMC_ppZZ_13TeV-selectZZ-v3_195.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_196/FPMC_ppZZ_13TeV-selectZZ-v3_196.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_197/FPMC_ppZZ_13TeV-selectZZ-v3_197.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_198/FPMC_ppZZ_13TeV-selectZZ-v3_198.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_199/FPMC_ppZZ_13TeV-selectZZ-v3_199.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_200/FPMC_ppZZ_13TeV-selectZZ-v3_200.root/T");



      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_201/FPMC_ppZZ_13TeV-selectZZ-v3_201.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_202/FPMC_ppZZ_13TeV-selectZZ-v3_202.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_203/FPMC_ppZZ_13TeV-selectZZ-v3_203.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_204/FPMC_ppZZ_13TeV-selectZZ-v3_204.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_205/FPMC_ppZZ_13TeV-selectZZ-v3_205.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_206/FPMC_ppZZ_13TeV-selectZZ-v3_206.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_207/FPMC_ppZZ_13TeV-selectZZ-v3_207.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_208/FPMC_ppZZ_13TeV-selectZZ-v3_208.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_209/FPMC_ppZZ_13TeV-selectZZ-v3_209.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_210/FPMC_ppZZ_13TeV-selectZZ-v3_210.root/T");



      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_211/FPMC_ppZZ_13TeV-selectZZ-v3_211.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_212/FPMC_ppZZ_13TeV-selectZZ-v3_212.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_213/FPMC_ppZZ_13TeV-selectZZ-v3_213.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_214/FPMC_ppZZ_13TeV-selectZZ-v3_214.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_215/FPMC_ppZZ_13TeV-selectZZ-v3_215.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_216/FPMC_ppZZ_13TeV-selectZZ-v3_216.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_217/FPMC_ppZZ_13TeV-selectZZ-v3_217.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_218/FPMC_ppZZ_13TeV-selectZZ-v3_218.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_219/FPMC_ppZZ_13TeV-selectZZ-v3_219.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_220/FPMC_ppZZ_13TeV-selectZZ-v3_220.root/T");


      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_221/FPMC_ppZZ_13TeV-selectZZ-v3_221.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_222/FPMC_ppZZ_13TeV-selectZZ-v3_222.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_223/FPMC_ppZZ_13TeV-selectZZ-v3_223.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_224/FPMC_ppZZ_13TeV-selectZZ-v3_224.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_225/FPMC_ppZZ_13TeV-selectZZ-v3_225.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_226/FPMC_ppZZ_13TeV-selectZZ-v3_226.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_227/FPMC_ppZZ_13TeV-selectZZ-v3_227.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_228/FPMC_ppZZ_13TeV-selectZZ-v3_228.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_229/FPMC_ppZZ_13TeV-selectZZ-v3_229.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_230/FPMC_ppZZ_13TeV-selectZZ-v3_230.root/T");


      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_231/FPMC_ppZZ_13TeV-selectZZ-v3_231.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_232/FPMC_ppZZ_13TeV-selectZZ-v3_232.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_233/FPMC_ppZZ_13TeV-selectZZ-v3_233.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_234/FPMC_ppZZ_13TeV-selectZZ-v3_234.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_235/FPMC_ppZZ_13TeV-selectZZ-v3_235.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_236/FPMC_ppZZ_13TeV-selectZZ-v3_236.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_237/FPMC_ppZZ_13TeV-selectZZ-v3_237.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_238/FPMC_ppZZ_13TeV-selectZZ-v3_238.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_239/FPMC_ppZZ_13TeV-selectZZ-v3_239.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_240/FPMC_ppZZ_13TeV-selectZZ-v3_240.root/T");



      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_241/FPMC_ppZZ_13TeV-selectZZ-v3_241.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_242/FPMC_ppZZ_13TeV-selectZZ-v3_242.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_243/FPMC_ppZZ_13TeV-selectZZ-v3_243.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_244/FPMC_ppZZ_13TeV-selectZZ-v3_244.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_245/FPMC_ppZZ_13TeV-selectZZ-v3_245.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_246/FPMC_ppZZ_13TeV-selectZZ-v3_246.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_247/FPMC_ppZZ_13TeV-selectZZ-v3_247.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_248/FPMC_ppZZ_13TeV-selectZZ-v3_248.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_249/FPMC_ppZZ_13TeV-selectZZ-v3_249.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_250/FPMC_ppZZ_13TeV-selectZZ-v3_250.root/T");



      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_251/FPMC_ppZZ_13TeV-selectZZ-v3_251.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_252/FPMC_ppZZ_13TeV-selectZZ-v3_252.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_253/FPMC_ppZZ_13TeV-selectZZ-v3_253.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_254/FPMC_ppZZ_13TeV-selectZZ-v3_254.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_255/FPMC_ppZZ_13TeV-selectZZ-v3_255.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_256/FPMC_ppZZ_13TeV-selectZZ-v3_256.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_257/FPMC_ppZZ_13TeV-selectZZ-v3_257.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_258/FPMC_ppZZ_13TeV-selectZZ-v3_258.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_259/FPMC_ppZZ_13TeV-selectZZ-v3_259.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_260/FPMC_ppZZ_13TeV-selectZZ-v3_260.root/T");



      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_261/FPMC_ppZZ_13TeV-selectZZ-v3_261.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_262/FPMC_ppZZ_13TeV-selectZZ-v3_262.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_263/FPMC_ppZZ_13TeV-selectZZ-v3_263.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_264/FPMC_ppZZ_13TeV-selectZZ-v3_264.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_265/FPMC_ppZZ_13TeV-selectZZ-v3_265.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_266/FPMC_ppZZ_13TeV-selectZZ-v3_266.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_267/FPMC_ppZZ_13TeV-selectZZ-v3_267.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_268/FPMC_ppZZ_13TeV-selectZZ-v3_268.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_269/FPMC_ppZZ_13TeV-selectZZ-v3_269.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_270/FPMC_ppZZ_13TeV-selectZZ-v3_270.root/T");




      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_271/FPMC_ppZZ_13TeV-selectZZ-v3_271.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_272/FPMC_ppZZ_13TeV-selectZZ-v3_272.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_273/FPMC_ppZZ_13TeV-selectZZ-v3_273.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_274/FPMC_ppZZ_13TeV-selectZZ-v3_274.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_275/FPMC_ppZZ_13TeV-selectZZ-v3_275.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_276/FPMC_ppZZ_13TeV-selectZZ-v3_276.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_277/FPMC_ppZZ_13TeV-selectZZ-v3_277.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_278/FPMC_ppZZ_13TeV-selectZZ-v3_278.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_279/FPMC_ppZZ_13TeV-selectZZ-v3_279.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_280/FPMC_ppZZ_13TeV-selectZZ-v3_280.root/T");



      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_281/FPMC_ppZZ_13TeV-selectZZ-v3_281.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_282/FPMC_ppZZ_13TeV-selectZZ-v3_282.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_283/FPMC_ppZZ_13TeV-selectZZ-v3_283.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_284/FPMC_ppZZ_13TeV-selectZZ-v3_284.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_285/FPMC_ppZZ_13TeV-selectZZ-v3_285.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_286/FPMC_ppZZ_13TeV-selectZZ-v3_286.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_287/FPMC_ppZZ_13TeV-selectZZ-v3_287.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_288/FPMC_ppZZ_13TeV-selectZZ-v3_288.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_289/FPMC_ppZZ_13TeV-selectZZ-v3_289.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_290/FPMC_ppZZ_13TeV-selectZZ-v3_290.root/T");





      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_291/FPMC_ppZZ_13TeV-selectZZ-v3_291.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_292/FPMC_ppZZ_13TeV-selectZZ-v3_292.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_293/FPMC_ppZZ_13TeV-selectZZ-v3_293.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_294/FPMC_ppZZ_13TeV-selectZZ-v3_294.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_295/FPMC_ppZZ_13TeV-selectZZ-v3_295.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_296/FPMC_ppZZ_13TeV-selectZZ-v3_296.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_297/FPMC_ppZZ_13TeV-selectZZ-v3_297.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_298/FPMC_ppZZ_13TeV-selectZZ-v3_298.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_299/FPMC_ppZZ_13TeV-selectZZ-v3_299.root/T");
      chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/pp_zz_sel_13tev/job_pp_zz_sel_13tev_300/FPMC_ppZZ_13TeV-selectZZ-v3_300.root/T");


    */

     



                                
     /*          
       //A0Z p5  FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_1.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_2.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_3.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_4.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_5.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_6.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_7.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_8.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_9.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_10.root/T");
      
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_11.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_12.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_13.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_14.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_15.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_16.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_17.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_18.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_19.root/T");

       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_20.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_21.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_22.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_23.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_24.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_25.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_26.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_27.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_28.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_29.root/T");

       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_30.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_31.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_32.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_33.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_34.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_35.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_36.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_37.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_38.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_39.root/T");


       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_40.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_41.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_42.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_43.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_44.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_45.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_46.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_47.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_48.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_49.root/T");



       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_50.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_51.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_52.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_53.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_54.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_55.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_56.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_57.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_58.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_59.root/T");

       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_60.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_61.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_62.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_63.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_64.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_65.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_66.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_67.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_68.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_69.root/T");


       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_70.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_71.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_72.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_73.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_74.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_75.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_76.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_77.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_78.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_79.root/T");



       
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_80.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_81.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_82.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_83.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_84.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_85.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_86.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_87.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_88.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_89.root/T");

       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_90.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_91.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_92.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_93.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_94.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_95.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_96.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_97.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_98.root/T");
       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_99.root/T");

       chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_Lambda_2TeV_13TeV-v1_100.root/T");
          
     */               
     
     


     //a0z5acz5
     
     /*          
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_1/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_1.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_2/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_2.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_3/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_3.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_4/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_4.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_5/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_5.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_6/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_6.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_7/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_7.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_8/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_8.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_9/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_9.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_10/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_10.root/T");




     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_11/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_11.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_12/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_12.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_13/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_13.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_14/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_14.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_15/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_15.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_16/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_16.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_17/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_17.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_18/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_18.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_19/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_19.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_20/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_20.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_21/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_21.root/T");

     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_22/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_22.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_23/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_23.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_24/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_24.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_25/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_25.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_26/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_26.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_27/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_27.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_28/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_28.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_29/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_29.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_30/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_30.root/T");

     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_31/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_31.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_32/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_32.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_33/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_33.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_34/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_34.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_35/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_35.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_36/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_36.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_37/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_37.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_38/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_38.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_39/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_39.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_40/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_40.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_41/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_41.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_42/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_42.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_43/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_43.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_44/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_44.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_45/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_45.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_46/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_46.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_47/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_47.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_48/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_48.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_49/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_49.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_50/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_50.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_51/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_51.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_52/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_52.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_53/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_53.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_54/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_54.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_55/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_55.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_56/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_56.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_57/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_57.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_58/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_58.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_59/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_59.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_60/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_60.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_61/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_61.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_62/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_62.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_63/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_63.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_64/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_64.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_65/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_65.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_66/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_66.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_67/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_67.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_68/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_68.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_69/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_69.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_70/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_70.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_71/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_71.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_72/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_72.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_73/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_73.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_74/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_74.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_75/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_75.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_76/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_76.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_77/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_77.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_78/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_78.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_79/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_79.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_80/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_80.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_81/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_81.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_82/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_82.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_83/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_83.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_84/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_84.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_85/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_85.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_86/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_86.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_87/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_87.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_88/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_88.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_89/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_89.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_90/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_90.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_91/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_91.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_92/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_92.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_93/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_93.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_94/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_94.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_95/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_95.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_96/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_96.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_97/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_97.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_98/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_98.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz5_a0zp5_13tev/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp5_a0zp5_13tev_99/FPMC_gamgamZZ_anom_A0Z_5E-6_ACZ_5E-6\
_Lambda_2TeV_13TeV-selectZZ-v1_99.root/T");
     */     
                    



          
     /*     
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_1/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_1.root/T");                                                                                                                                                                  
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_2/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_2.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_3/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_3.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_4/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_4.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_5/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_5.root/T");                                           
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_6/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_6.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_7/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_7.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_8/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_8.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_9/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_9.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_10/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_10.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_11/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_11.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_12/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_12.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_13/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_13.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_14/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_14.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_15/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_15.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_16/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_16.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_17/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_17.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_18/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_18.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_19/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_19.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_20/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_20.root/T");                               
                                         
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_21/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_21.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_22/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_22.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_23/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_23.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_24/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_24.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_25/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_25.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_26/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_26.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_27/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_27.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_28/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_28.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_29/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_29.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_30/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_30.root/T"); 
                                         

chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_31/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_31.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_32/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_32.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_33/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_33.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_34/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_34.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_35/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_35.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_36/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_36.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_37/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_37.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_38/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_38.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_39/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_39.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_40/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_40.root/T"); 

chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_41/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_41.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_42/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_42.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_43/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_43.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_44/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_44.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_45/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_45.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_46/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_46.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_47/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_47.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_48/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_48.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_49/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_49.root/T"); 
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_50/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_50.root/T");        

chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_51/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_51.root/T");
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_52/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_52.root/T");
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_53/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_53.root/T");
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_54/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_54.root/T");
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_55/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_55.root/T");
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_56/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_56.root/T");
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_57/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_57.root/T");
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_58/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_58.root/T");
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_59/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_59.root/T");
chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_60/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_60.root/T");

  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_61/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_61.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_62/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_62.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_63/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_63.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_64/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_64.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_65/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_65.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_66/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_66.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_67/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_67.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_68/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_68.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_69/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_69.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_70/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_70.root/T");


  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_71/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_71.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_72/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_72.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_73/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_73.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_74/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_74.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_75/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_75.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_76/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_76.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_77/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_77.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_78/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_78.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_79/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_79.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_80/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_80.root/T");


  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_81/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_81.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_82/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_82.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_83/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_83.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_84/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_84.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_85/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_85.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_86/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_86.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_87/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_87.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_88/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_88.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_89/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_89.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_90/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_90.root/T");


  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_91/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_91.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_92/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_92.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_93/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_93.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_94/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_94.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_95/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_95.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_96/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_96.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_97/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_97.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_98/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_98.root/T");
  chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz20_a0zp20_13tev/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1/job_aazz_aczp20_a0zp20_13tev_99/FPMC_gamgamZZ_anom_A0Z_10E-6_ACZ_20E-6_Lambda_2TeV_13TeV-selectZZ-v1_99.root/T");

     */       
       

    



             
                                   
    //  a0zp +10E-6
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_1/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_1.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_2/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_2.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_3/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_3.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_4/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_4.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_5/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_5.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_6/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_6.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_7/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_7.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_8/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_8.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_9/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_9.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_10/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_10.root/T");
     
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_11/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_11.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_12/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_12.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_13/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_13.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_14/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_14.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_15/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_15.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_16/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_16.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_17/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_17.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_18/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_18.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_19/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_19.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_20/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_20.root/T");
     
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_21/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_21.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_22/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_22.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_23/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_23.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_24/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_24.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_25/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_25.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_26/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_26.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_27/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_27.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_28/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_28.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_29/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_29.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_30/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_30.root/T");
     
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_31/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_31.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_32/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_32.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_33/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_33.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_34/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_34.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_35/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_35.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_36/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_36.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_37/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_37.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_38/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_38.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_39/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_39.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_40/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_40.root/T");
     
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_41/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_41.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_42/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_42.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_43/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_43.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_44/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_44.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_45/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_45.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_46/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_46.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_47/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_47.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_48/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_48.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_49/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_49.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p10_13tev/job_aazz_a0zp10_13tev_50/FPMC_gamgamZZ_anom_A0Z_1E-5_Lambda_2TeV_13TeV-v1_50.root/T");
                            
     
     

     /*                                             
     //	    A0Z 1.5E-5_Lambda_2TeV_13TeV
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_1.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_2.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_3.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_4.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_5.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_6.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_7.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_8.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_9.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_10.root/T");
     
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_11.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_12.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_13.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_14.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_15.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_16.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_17.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_18.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_19.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_20.root/T");
     
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_21.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_22.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_23.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_24.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_25.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_26.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_27.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_28.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_29.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_30.root/T");
     
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_31.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_32.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_33.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_34.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_35.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_36.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_37.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_38.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_39.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_40.root/T");
     
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_41.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_42.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_43.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_44.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_45.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_46.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_47.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_48.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_49.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_50.root/T");



     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_51.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_52.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_53.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_54.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_55.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_56.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_57.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_58.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_59.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_60.root/T");


     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_61.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_62.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_63.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_64.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_65.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_66.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_67.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_68.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_69.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_70.root/T");

     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_71.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_72.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_73.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_74.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_75.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_76.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_77.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_78.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_79.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_80.root/T");

     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_81.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_82.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_83.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_84.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_85.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_86.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_87.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_88.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_89.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_90.root/T");


     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_91.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_92.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_93.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_94.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_95.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_96.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_97.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_98.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/a0z_p15_13tev/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_99.root/T");
     //     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/job_aazz_a0zp15_13tev_100/FPMC_gamgamZZ_anom_A0Z_15E-5_Lambda_2TeV_13TeV-v1_100.root/T");
     */     
                        
          




     /*          
     //ACZ5E-6
                         
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_1/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_1.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_2/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_2.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_3/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_3.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_4/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_4.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_5/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_5.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_6/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_6.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_7/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_7.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_8/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_8.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_9/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_9.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_10/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_10.root/T");
     

     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_11/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_11.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_12/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_12.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_13/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_13.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_14/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_14.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_15/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_15.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_16/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_16.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_17/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_17.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_18/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_18.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_19/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_19.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_20/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_20.root/T");
     

     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_21/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_21.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_22/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_22.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_23/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_23.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_24/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_24.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_25/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_25.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_26/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_26.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_27/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_27.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_28/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_28.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_29/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_29.root/T");
    

     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_30/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_30.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_31/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_31.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_32/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_32.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_33/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_33.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_34/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_34.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_35/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_35.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_36/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_36.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_37/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_37.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_38/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_38.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_39/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_39.root/T");
     

     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_40/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_40.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_41/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_41.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_42/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_42.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_43/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_43.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_44/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_44.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_45/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_45.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_46/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_46.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_47/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_47.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_48/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_48.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_49/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_49.root/T");
     


     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_50/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_50.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_51/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_51.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_52/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_52.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_53/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_53.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_54/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_54.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_55/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_55.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_56/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_56.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_57/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_57.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_58/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_58.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_59/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_59.root/T");
     


     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_60/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_60.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_61/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_61.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_62/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_62.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_63/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_63.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_64/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_64.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_65/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_65.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_66/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_66.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_67/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_67.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_68/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_68.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_69/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_69.root/T");
     


     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_70/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_70.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_71/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_71.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_72/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_72.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_73/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_73.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_74/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_74.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_75/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_75.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_76/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_76.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_77/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_77.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_78/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_78.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_79/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_79.root/T");
     


     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_80/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_80.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_81/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_81.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_82/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_82.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_83/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_83.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_84/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_84.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_85/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_85.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_86/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_86.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_87/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_87.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_88/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_88.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_89/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_89.root/T");
     

     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_90/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_90.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_91/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_91.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_92/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_92.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_93/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_93.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_94/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_94.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_95/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_95.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_96/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_96.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_97/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_97.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_98/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_98.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_99/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_99.root/T");
     
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p5_13tev/job_aazz_aczp5_13tev_100/FPMC_gamgamZZ_anom_ACZ_5E-6_Lambda_2TeV_13TeV-selectZZ-v1_100.root/T");
          
     */        
     
               
     //ACZ10E-6

     /*                    
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_1/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_1.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_2/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_2.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_3/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_3.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_4/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_4.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_5/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_5.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_6/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_6.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_7/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_7.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_8/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_8.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_9/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_9.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_10/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_10.root/T");
     

     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_11/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_11.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_12/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_12.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_13/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_13.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_14/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_14.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_15/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_15.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_16/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_16.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_17/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_17.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_18/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_18.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_19/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_19.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_20/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_20.root/T");
     

     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_21/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_21.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_22/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_22.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_23/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_23.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_24/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_24.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_25/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_25.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_26/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_26.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_27/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_27.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_28/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_28.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_29/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_29.root/T");
    

     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_30/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_30.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_31/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_31.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_32/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_32.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_33/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_33.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_34/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_34.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_35/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_35.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_36/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_36.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_37/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_37.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_38/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_38.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_39/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_39.root/T");
     

     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_40/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_40.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_41/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_41.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_42/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_42.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_43/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_43.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_44/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_44.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_45/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_45.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_46/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_46.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_47/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_47.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_48/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_48.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_49/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_49.root/T");
     


     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_50/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_50.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_51/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_51.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_52/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_52.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_53/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_53.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_54/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_54.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_55/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_55.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_56/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_56.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_57/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_57.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_58/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_58.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_59/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_59.root/T");
     


     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_60/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_60.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_61/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_61.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_62/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_62.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_63/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_63.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_64/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_64.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_65/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_65.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_66/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_66.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_67/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_67.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_68/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_68.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_69/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_69.root/T");
     


     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_70/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_70.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_71/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_71.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_72/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_72.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_73/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_73.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_74/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_74.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_75/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_75.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_76/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_76.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_77/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_77.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_78/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_78.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_79/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_79.root/T");
     


     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_80/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_80.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_81/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_81.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_82/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_82.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_83/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_83.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_84/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_84.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_85/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_85.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_86/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_86.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_87/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_87.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_88/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_88.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_89/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_89.root/T");
     

     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_90/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_90.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_91/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_91.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_92/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_92.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_93/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_93.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_94/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_94.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_95/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_95.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_96/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_96.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_97/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_97.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_98/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_98.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_99/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_99.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p10_13tev/job_aazz_aczp10_13tev_100/FPMC_gamgamZZ_anom_ACZ_1E-5_Lambda_2TeV_13TeV-selectZZ-v1_100.root/T");
     */                        
              

          
     //ACZ20E-6

     /*                           
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_1/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_1.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_2/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_2.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_3/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_3.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_4/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_4.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_5/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_5.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_6/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_6.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_7/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_7.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_8/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_8.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_9/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_9.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_10/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_10.root/T");
     

     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_11/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_11.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_12/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_12.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_13/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_13.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_14/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_14.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_15/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_15.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_16/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_16.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_17/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_17.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_18/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_18.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_19/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_19.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_20/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_20.root/T");
     

     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_21/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_21.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_22/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_22.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_23/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_23.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_24/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_24.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_25/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_25.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_26/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_26.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_27/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_27.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_28/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_28.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_29/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_29.root/T");
    

     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_30/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_30.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_31/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_31.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_32/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_32.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_33/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_33.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_34/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_34.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_35/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_35.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_36/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_36.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_37/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_37.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_38/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_38.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_39/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_39.root/T");
     

     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_40/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_40.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_41/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_41.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_42/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_42.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_43/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_43.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_44/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_44.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_45/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_45.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_46/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_46.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_47/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_47.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_48/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_48.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_49/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_49.root/T");
     


     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_50/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_50.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_51/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_51.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_52/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_52.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_53/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_53.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_54/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_54.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_55/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_55.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_56/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_56.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_57/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_57.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_58/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_58.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_59/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_59.root/T");
     


     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_60/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_60.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_61/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_61.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_62/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_62.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_63/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_63.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_64/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_64.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_65/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_65.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_66/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_66.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_67/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_67.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_68/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_68.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_69/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_69.root/T");
     


     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_70/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_70.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_71/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_71.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_72/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_72.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_73/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_73.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_74/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_74.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_75/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_75.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_76/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_76.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_77/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_77.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_78/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_78.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_79/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_79.root/T");
     


     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_80/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_80.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_81/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_81.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_82/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_82.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_83/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_83.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_84/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_84.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_85/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_85.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_86/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_86.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_87/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_87.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_88/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_88.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_89/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_89.root/T");
     

     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_90/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_90.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_91/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_91.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_92/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_92.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_93/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_93.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_94/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_94.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_95/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_95.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_96/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_96.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_97/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_97.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_98/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_98.root/T");
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_99/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_99.root/T");
     
     chain->Add("/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/acz_p20_13tev/job_aazz_aczp20_13tev_100/FPMC_gamgamZZ_anom_ACZ_2E-5_Lambda_2TeV_13TeV-selectZZ-v1_100.root/T");
     */    
             
                   














      tree=chain;
   } 
   Init(tree);
}

AAZZAnalysis::~AAZZAnalysis()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t AAZZAnalysis::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t AAZZAnalysis::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void AAZZAnalysis::Init(TTree *tree)
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
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("n_mu", &n_mu, &b_n_mu);
   fChain->SetBranchAddress("mu_pt", mu_pt, &b_mu_pt);
   fChain->SetBranchAddress("mu_px", mu_px, &b_mu_px);
   fChain->SetBranchAddress("mu_py", mu_py, &b_mu_py);
   fChain->SetBranchAddress("mu_pz", mu_pz, &b_mu_pz);
   fChain->SetBranchAddress("mu_eta", mu_eta, &b_mu_eta);
   fChain->SetBranchAddress("mu_phi", mu_phi, &b_mu_phi);
   fChain->SetBranchAddress("mu_energy", mu_energy, &b_mu_energy);
   fChain->SetBranchAddress("mu_mass", mu_mass, &b_mu_mass);
   fChain->SetBranchAddress("mu_charge", mu_charge, &b_mu_charge);
   fChain->SetBranchAddress("n_e", &n_e, &b_n_e);
   fChain->SetBranchAddress("e_pt", e_pt, &b_e_pt);
   fChain->SetBranchAddress("e_px", e_px, &b_e_px);
   fChain->SetBranchAddress("e_py", e_py, &b_e_py);
   fChain->SetBranchAddress("e_pz", e_pz, &b_e_pz);
   fChain->SetBranchAddress("e_eta", e_eta, &b_e_eta);
   fChain->SetBranchAddress("e_phi", e_phi, &b_e_phi);
   fChain->SetBranchAddress("e_energy", e_energy, &b_e_energy);
   fChain->SetBranchAddress("e_mass", e_mass, &b_e_mass);
   fChain->SetBranchAddress("e_charge", e_charge, &b_e_charge);
   fChain->SetBranchAddress("n_chg", &n_chg, &b_n_chg);
   fChain->SetBranchAddress("chg_id", chg_id, &b_chg_id);
   fChain->SetBranchAddress("chg_ch", chg_ch, &b_chg_ch);
   fChain->SetBranchAddress("chg_px", chg_px, &b_chg_px);
   fChain->SetBranchAddress("chg_py", chg_py, &b_chg_py);
   fChain->SetBranchAddress("chg_pz", chg_pz, &b_chg_pz);
   fChain->SetBranchAddress("chg_pt", chg_pt, &b_chg_pt);
   fChain->SetBranchAddress("chg_eta", chg_eta, &b_chg_eta);
   fChain->SetBranchAddress("chg_phi", chg_phi, &b_chg_phi);
   fChain->SetBranchAddress("chg_energy", chg_energy, &b_chg_energy);
   fChain->SetBranchAddress("chg_mass", chg_mass, &b_chg_mass);
   fChain->SetBranchAddress("n_proton", &n_proton, &b_n_proton);
   fChain->SetBranchAddress("proton_px", proton_px, &b_proton_px);
   fChain->SetBranchAddress("proton_py", proton_py, &b_proton_py);
   fChain->SetBranchAddress("proton_pz", proton_pz, &b_proton_pz);
   fChain->SetBranchAddress("proton_pt", proton_pt, &b_proton_pt);
   fChain->SetBranchAddress("proton_energy", proton_energy, &b_proton_energy);
   fChain->SetBranchAddress("n_jet", &n_jet, &b_n_jet);
   fChain->SetBranchAddress("jet_px", jet_px, &b_jet_px);
   fChain->SetBranchAddress("jet_py", jet_py, &b_jet_py);
   fChain->SetBranchAddress("jet_pz", jet_pz, &b_jet_pz);
   fChain->SetBranchAddress("jet_pt", jet_pt, &b_jet_pt);
   fChain->SetBranchAddress("jet_energy", jet_energy, &b_jet_energy);
   fChain->SetBranchAddress("n_Z", &n_Z, &b_n_Z);
   fChain->SetBranchAddress("Z_pt", Z_pt, &b_Z_pt);
   fChain->SetBranchAddress("Z_px", Z_px, &b_Z_px);
   fChain->SetBranchAddress("Z_py", Z_py, &b_Z_py);
   fChain->SetBranchAddress("Z_pz", Z_pz, &b_Z_pz);
   fChain->SetBranchAddress("Z_eta", Z_eta, &b_Z_eta);
   fChain->SetBranchAddress("Z_phi", Z_phi, &b_Z_phi);
   fChain->SetBranchAddress("Z_energy", Z_energy, &b_Z_energy);
   fChain->SetBranchAddress("Z_mass", Z_mass, &b_Z_mass);
   fChain->SetBranchAddress("Z_decay_first_pid", Z_decay_first_pid, &b_Z_decay_first_pid);
   fChain->SetBranchAddress("Z_decay_first_pt", Z_decay_first_pt, &b_Z_decay_first_pt);
   fChain->SetBranchAddress("Z_decay_first_px", Z_decay_first_px, &b_Z_decay_first_px);
   fChain->SetBranchAddress("Z_decay_first_py", Z_decay_first_py, &b_Z_decay_first_py);
   fChain->SetBranchAddress("Z_decay_first_pz", Z_decay_first_pz, &b_Z_decay_first_pz);
   fChain->SetBranchAddress("Z_decay_first_eta", Z_decay_first_eta, &b_Z_decay_first_eta);
   fChain->SetBranchAddress("Z_decay_first_phi", Z_decay_first_phi, &b_Z_decay_first_phi);
   fChain->SetBranchAddress("Z_decay_first_energy", Z_decay_first_energy, &b_Z_decay_first_energy);
   fChain->SetBranchAddress("Z_decay_first_mass", Z_decay_first_mass, &b_Z_decay_first_mass);
   fChain->SetBranchAddress("Z_decay_first_charge", Z_decay_first_charge, &b_Z_decay_first_charge);
   fChain->SetBranchAddress("Z_decay_second_pid", Z_decay_second_pid, &b_Z_decay_second_pid);
   fChain->SetBranchAddress("Z_decay_second_pt", Z_decay_second_pt, &b_Z_decay_second_pt);
   fChain->SetBranchAddress("Z_decay_second_px", Z_decay_second_px, &b_Z_decay_second_px);
   fChain->SetBranchAddress("Z_decay_second_py", Z_decay_second_py, &b_Z_decay_second_py);
   fChain->SetBranchAddress("Z_decay_second_pz", Z_decay_second_pz, &b_Z_decay_second_pz);
   fChain->SetBranchAddress("Z_decay_second_eta", Z_decay_second_eta, &b_Z_decay_second_eta);
   fChain->SetBranchAddress("Z_decay_second_phi", Z_decay_second_phi, &b_Z_decay_second_phi);
   fChain->SetBranchAddress("Z_decay_second_energy", Z_decay_second_energy, &b_Z_decay_second_energy);
   fChain->SetBranchAddress("Z_decay_second_mass", Z_decay_second_mass, &b_Z_decay_second_mass);
   fChain->SetBranchAddress("Z_decay_second_charge", Z_decay_second_charge, &b_Z_decay_second_charge);
   Notify();
}

Bool_t AAZZAnalysis::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void AAZZAnalysis::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t AAZZAnalysis::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef AAZZAnalysis_cxx
