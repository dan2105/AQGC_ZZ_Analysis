#define AAZZAnalysis_cxx
#include "/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/AAZZAnalysis.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

#include <TFile.h>
#include <TH1D.h>
#include <TString.h>
#include <TLorentzVector.h>

#include <time.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include <stdlib.h>

#include "TRandom.h"
#include "TRandom1.h"
#include "TRandom2.h"
#include "TRandom3.h"
#include <iostream>
#include <vector>
#include <TROOT.h>
#include "TStopwatch.h"


#include "TInterpreter.h"
#include "TCanvas.h"
#include "TSystem.h"
#include "TFile.h"
#include "TH2.h"
#include "TNtuple.h"
#include "TPaveLabel.h"
#include "TPaveText.h"
#include "TMath.h" 
#include "TFrame.h"
#include "TSystem.h"
#include "TInterpreter.h"
#include "TPad.h"
#include "TCanvas.h"
#include "TTree.h"


void AAZZAnalysis::Loop()
{
  //   In a ROOT session, you can do:
  //    Root > .L AAZZAnalysis.C
  //    Root > AAZZAnalysis 
  //    Root > t.GetEntry(12); // Fill t data members with entry number 12
  //    Root > t.Show();       // Show values of entry 12
  //    Root > t.Show(16);     // Read and show values of entry 16
  //    Root > t.Loop();       // Loop on all entries
  //

  //    This is the loop skeleton where:
  //    jentry is the global entry number in the chain
  //    ientry is the entry number in the current Tree
  //    Note that the argument to GetEntry must be:
  //    jentry for TChain::GetEntry
  //    ientry for TTree::GetEntry and TBranch::GetEntry
  //
  //    To read only selected branches, Insert statements like:
  //    METHOD1:
  //    fChain->SetBranchStatus("*",0);  // disable all branches
  //    fChain->SetBranchStatus("branchname",1);  // activate branchname
  //    METHOD2: replace line
  //    fChain->GetEntry(jentry);       //read all branches
  //    by  b_branchname->GetEntry(ientry); //read only this branch
  /*
    M-%	Encontrar e trocar
    C-M-%	Encontrar e trocar (versão expressões regulares)
    C-espaço	Marcar início de bloco
    C-w	Cortar bloco
    M-w	Copiar bloco
    C-y	Colar bloco
    S-Del	Apagar o bloco selecionado
  */



  if (fChain == 0) return;

  Long64_t nentries = fChain->GetEntriesFast();
  Long64_t nbytes = 0, nb = 0;

  Double_t const mass_Z  = 91.1876;
 
  Double_t z1_xi=mass_Z-10., z1_xf=mass_Z+10., z2_xi=mass_Z-10., z2_xf=mass_Z+10., zz_xi=0., zz_xf=5000., mpps_xi=300., mpps_xf=3000., pT_i=0., pT_f=500.;
  Double_t z1_bin=80, z2_bin=80, zz_bin=120, mpps_bin =70, pT_bin=100, PPSDetX_bin=30, PPSDetY_bin=30;

  TH1D* hPtEle = new TH1D("hPtEle","hPtEle",250,0,3000);   hPtEle->SetFillColor(4);  hPtEle->GetXaxis()->SetTitle("p_{T}(GeV)");
  TH1D* hmassEle = new TH1D("hmassEle","hmassEle",250,0,2);hmassEle->SetFillColor(4);hmassEle->GetXaxis()->SetTitle("mass(GeV)");
  TH1D* hEtaEle = new TH1D("hEtaEle","hEtaEle",100,-4,4);  hEtaEle->SetFillColor(4); hEtaEle->GetXaxis()->SetTitle("#eta");
  TH1D* hPhiEle = new TH1D("hPhiEle","hPhiEle",100,-4,4);  hPhiEle->SetFillColor(4); hPhiEle->GetXaxis()->SetTitle("#phi");
  TH1D* hPtMu = new TH1D("hPtMu","hPtMu",250,0,3000);      hPtMu->SetFillColor(4);   hPtMu->GetXaxis()->SetTitle("p_{T}(GeV)");
  TH1D* hmassMu = new TH1D("hmassMu","hmassMu",200,0,0.2); hmassMu->SetFillColor(4); hmassMu->GetXaxis()->SetTitle("mass(GeV)");
  TH1D* hEtaMu = new TH1D("hEtaMu","hEtaMu",100,-4,4);     hEtaMu->SetFillColor(4);  hEtaMu->GetXaxis()->SetTitle("#eta");
  TH1D* hPhiMu = new TH1D("hPhiMu","hPhiMu",100,-4,4);     hPhiMu->SetFillColor(4);  hPhiMu->GetXaxis()->SetTitle("#phi");
  TH1D* hVtz = new TH1D("hVtz","hVtz",250,-25,25);         hVtz->SetFillColor(4);    hVtz->GetXaxis()->SetTitle("Vtz (cm)");
  TH1D* hVtxDiffZ = new TH1D("hVtxDiffZ","hVtxDiffZ",500,-0.05,0.05);   hVtxDiffZ->SetFillColor(4);   hVtxDiffZ->GetXaxis()->SetTitle("VtxDiffZ (cm)");
  TH1D* hExtratracks1mm = new TH1D("hExtratracks1mm","hExtratracks1mm",70,0,70); hExtratracks1mm->SetFillColor(4);   hExtratracks1mm->GetXaxis()->SetTitle("Extratracks1mm");
  TH1D* hExtratracks2mm = new TH1D("hExtratracks2mm","hExtratracks2mm",70,0,70); hExtratracks2mm->SetFillColor(4);   hExtratracks2mm->GetXaxis()->SetTitle("Extratracks2mm");
  TH1D* hExtratracks5mm = new TH1D("hExtratracks5mm","hExtratracks5mm",70,0,70); hExtratracks5mm->SetFillColor(4);   hExtratracks5mm->GetXaxis()->SetTitle("Extratracks5mm");
  TH1D* hExtratracks1cm = new TH1D("hExtratracks1cm","hExtratracks1cm",70,0,70); hExtratracks1cm->SetFillColor(4);   hExtratracks1cm->GetXaxis()->SetTitle("Extratracks1cm");
  //======================================================================
  //Final state protons
  //===================================================================
  TH1F* h_nproton     = new TH1F("nproton","nproton",10,0.,10.);
  TH1F* h_nproton1    = new TH1F("nproton1","nproton1",50,0.,50.);
  TH1F* h_nproton2    = new TH1F("nproton2","nproton2",50,0.,50.);
  TH1F* h_nproton1_pu    = new TH1F("nproton1_pu","nproton1_pu",50,0.,50.);
  TH1F* h_nproton2_pu    = new TH1F("nproton2_pu","nproton2_pu",50,0.,50.);
  TH1F* h_proton_pt   = new TH1F("proton_pt","proton_pt",100,0.,5.);
  TH1F* h_proton_px   = new TH1F("proton_px","proton_px",100,0.,5.);
  TH1F* h_proton_py   = new TH1F("proton_py","proton_py",100,0.,5.);
  TH1F* h_proton_pz   = new TH1F("proton_pz","proton_pz",1000,-7000.,7000.);
  TH1F* h_proton_energy = new TH1F("proton_energy","proton_energy",100,-4000.,4000.);
  TH1F* h_proton1_xi  = new TH1F("proton1_xi","proton1_xi",1000,0.,1.);
  TH1F* h_proton2_xi  = new TH1F("proton2_xi","proton2_xi",1000,0.,1.);
  TH1F* h_proton_eta  = new TH1F("proton_eta","proton_eta",100,-5.,5.);
  TH1F* h_ecm_sum = new TH1F("e_cm_sum","",1000,0.,4000.);
  TH1F* h_ecm_sig = new TH1F("e_cm_sig","",1000,0.,4000.);
  TH1F* h_ecm_puleft = new TH1F("e_cm_puleft","",1000,0.,4000.);
  TH1F* h_ecm_puright = new TH1F("e_cm_puright","",1000,0.,4000.);
  TH1F* h_ecm_puleftright = new TH1F("e_cm_puleftright","",1000,0.,4000.);
  TH1F* h_ecm_pudouble = new TH1F("e_cm_pudouble","",1000,0.,4000.);
  TH1F* h_Mzzsmea2 = new TH1F("M_zz_smearing2","M_zz_smearing2",1000,0.,4000.);

  
  TH1F* h_ratio4mumass   = new TH1F("ratio4mumass","ratio4mumass",1000,0.,5.);
  TH1F* h_ratio4mumass_m600   = new TH1F("ratio4mumass_m600","ratio4mumass_m600",1000,0.,5.);
  TH1F* h_ratio4mumass_sel   = new TH1F("ratio4mumass_sel","ratio4mumass_sel",1000,0.,5.);
  TH1F* h_ratio4mumass_rap   = new TH1F("ratio4mumass_rap","ratio4mumass_rap",1000,0.,5.);
 
  TH1F* h_ratio4emass   = new TH1F("ratio4emass","ratio4emass",1000,0.,5.);
  TH1F* h_ratio4emass_m600   = new TH1F("ratio4emass_m600","ratio4emass_m600",1000,0.,5.);
  TH1F* h_ratio4emass_sel   = new TH1F("ratio4emass_sel","ratio4emass_sel",1000,0.,5.);
  TH1F* h_ratio4emass_rap   = new TH1F("ratio4emass_rap","ratio4emass_rap",1000,0.,5.);

  TH1F* h_ratio2e2mumass   = new TH1F("ratio2e2mumass","ratio2e2mumass",1000,0.,5.);
  TH1F* h_ratio2e2mumass_m600   = new TH1F("ratio2e2mumass_m600","ratio2e2mumass_m600",1000,0.,5.);
  TH1F* h_ratio2e2mumass_sel   = new TH1F("ratio2e2mumass_sel","ratio2e2mumass_sel",1000,0.,5.);
  TH1F* h_ratio2e2mumass_rap   = new TH1F("ratio2e2mumass_rap","ratio2e2mumass_rap",1000,0.,5.);
 
  //========================================================================
  //No selection
  //=======================================================================
  TH1F* h_ratio4mumass_nosel   = new TH1F("ratio4mumass_nosel","ratio4mumass_nosel",1000,0.,5.);
  TH1F* h_ratio4mumass_m600_nosel   = new TH1F("ratio4mumass_m600_nosel","ratio4mumass_m600_nosel",1000,0.,5.);
  TH1F* h_ratio4mumass_ratio_nosel   = new TH1F("ratio4mumass_ratio_nosel","ratio4mumass_ratio_nosel",1000,0.,5.);
  TH1F* h_ratio4mumass_rap_nosel   = new TH1F("ratio4mumass_rap_nosel","ratio4mumass_rap_nosel",1000,0.,5.);



  TH1F* h_ratiomzzsum   = new TH1F("ratio4leptotal","ratio4leptotal",1000,0.,5.);
  TH1F* h_ratiomzzsum_4mu   = new TH1F("ratio4mulep","ratio4mulep",1000,0.,5.);
  TH1F* h_ratiomzzsum_4e   = new TH1F("ratio4elep","ratio4elep",1000,0.,5.);
  TH1F* h_ratiomzzsum_2e2mu   = new TH1F("ratio2e2mulep","ratio2e2mulep",1000,0.,5.);

  TH1F* h_ratiomzzsum_4mu_m600   = new TH1F("ratio4mulep_m600","ratio4mulep_m600",1000,0.,5.);
  TH1F* h_ratiomzzsum_4e_m600   = new TH1F("ratio4elep_m600","ratio4elep_m600",1000,0.,5.);
  TH1F* h_ratiomzzsum_2e2mu_m600   = new TH1F("ratio2e2mulep_m600","ratio2e2mulep_m600",1000,0.,5.);


  TH1F* h_ratiomzzsum_4mu_sel   = new TH1F("ratio4mulep_sel","ratio4mulep_sel",1000,0.,5.);
  TH1F* h_ratiomzzsum_4e_sel   = new TH1F("ratio4elep_sel","ratio4elep_sel",1000,0.,5.);
  TH1F* h_ratiomzzsum_2e2mu_sel   = new TH1F("ratio2e2mulep_sel","ratio2e2mulep_sel",1000,0.,5.);

  TH1F* h_ratiomzzsum_4mu_rap   = new TH1F("ratio4mulep_rap","ratio4mulep_rap",1000,0.,5.);
  TH1F* h_ratiomzzsum_4e_rap   = new TH1F("ratio4elep_rap","ratio4elep_rap",1000,0.,5.);
  TH1F* h_ratiomzzsum_2e2mu_rap  = new TH1F("ratio2e2mulep_rap","ratio2e2mulep_rap",1000,0.,5.);


  TH1F* h_dY4lp   = new TH1F("dY4lp","dY4lp",1000,-2.,2.);




  TH1F* h_massx_smear1   = new TH1F("massx_smear1","h_massx_smear1",1000,0.,2000.);
  TH1F* h_massx_smear2   = new TH1F("massx_smear2","h_massx_smear2",1000,0.,2000.);


  TH1F* h_dmass_dif_smear1   = new TH1F("dmass_dif_smear1","dmass_dif_smear1",1000,-2.,2.);
  TH1F* h_dmass_dif_smear2   = new TH1F("dmass_dif_smear2","dmass_dif_smear2",1000,-2.,2.);

  TH1F* h_dxi1_dif_smear1   = new TH1F("dxi1_dif_smear1","dxi1_dif_smear1",1000,-2.,2.);
  TH1F* h_dxi1_dif_smear2   = new TH1F("dxi1_dif_smear2","dxi1_dif_smear2",1000,-2.,2.);

  TH1F* h_dypp_dif_smear1   = new TH1F("dypp_dif_smear1","dypp_dif_smear1",1000,-2.,2.);
  TH1F* h_dypp_dif_smear2   = new TH1F("dypp_dif_smear2","dypp_dif_smear2",1000,-2.,2.);

  TH1F* h_dY4lp_signal   = new TH1F("dY4lp_signal","dY4lp_signal",1000,-2.,2.);
  //=======================================================================================

  TH1F* h_pileup = new TH1F("pileup","pileup",100,0,100);
  TH1F* h_uniform = new TH1F("uniform","uniform",1000,0,1);
  TH1F* h_Np_left = new TH1F("Np_left","Np_left",100,0,10);
  TH1F* h_Np_right = new TH1F("Np_right","Np_right",100,0,10);
  TH1F* h_xi1pileup = new TH1F("xi1_pileup","xi1_pileup",1000,0,1);
  TH1F* h_xi2pileup = new TH1F("xi2_pileup","xi2_pileup",1000,0,1);
  TH1F* h_xidoublepileup = new TH1F("xidouble_pileup","xidouble_pileup",1000,0,1);
  TH1F* h_xi_notagleft = new TH1F("Np_notagleft","Np_notagleft",1000,0,1);
  TH1F* h_xi_notagright = new TH1F("Np_notagright","Np_notagright",1000,0,1);
  TH1F* h_ngood = new TH1F("ngood","ngood",100,0,100);
  TH1F* h_ratio1   = new TH1F("ratio1","ratio1",1000,0.,5.);
  TH1F* h_ratio2   = new TH1F("ratio2","ratio2",1000,0.,5.);
  TH1F* h_ratio3   = new TH1F("ratio3","ratio3",1000,0.,5.);

  TH1F* h_ratio_signal   = new TH1F("ratio_signal","ratio_signal",1000,0.,5.);

  TH1F* h_e_leading_pt= new TH1F("e_leading_pt","e_leading_pt",1000,0.,1000.);
  TH1F* h_e_second_pt= new TH1F("e_second_pt","e_second_pt",1000,0,1000.);
  TH1F* h_e_leading_off_pt= new TH1F("e_leading_off_pt","e_leading_off_pt",1000,0.,1000.);
  TH1F* h_e_second_off_pt= new TH1F("e_second_off_pt","e_second_off_pt",1000,0,1000.);


  TH1F* h_mu_leading_pt= new TH1F("mu_leading_pt","mu_leading_pt",1000,0.,1000.);
  TH1F* h_mu_second_pt= new TH1F("mu_second_pt","mu_second_pt",1000,0,1000.);
  TH1F* h_mu_leading_off_pt= new TH1F("mu_leading_off_pt","mu_leading_off_pt",1000,0.,1000.);
  TH1F* h_mu_second_off_pt= new TH1F("mu_second_off_pt","mu_second_off_pt",1000,0,1000.);


  TH1F* h_e_leading_pt_m600= new TH1F("e_leading_pt_m600","e_leading_pt_m600",1000,0.,1000.);
  TH1F* h_e_second_pt_m600= new TH1F("e_second_pt_m600","e_second_pt_m600",1000,0,1000.);
  TH1F* h_mu_leading_pt_m600= new TH1F("mu_leading_pt_m600","mu_leading_pt_m600",1000,0.,1000.);
  TH1F* h_mu_second_pt_m600= new TH1F("mu_second_pt_m600","mu_second_pt_m600",1000,0,1000.);

  TH1F* h_NZZ4lep= new TH1F("NZZ4lep","NZZ4lep",4,0,4);

  TH1F* h_NZZ4elep= new TH1F("NZZ4elep","NZZ4elep",4,0,4);
  TH1F* h_NZZ4mulep= new TH1F("NZZ4mulep","NZZ4mulep",4,0,4);
  TH1F* h_NZZ2e2mulep= new TH1F("NZZ2e2mulep","NZZ2e2mulep",4,0,4);


  TH1F* h_NZZ4mu= new TH1F("NZZ4mu","NZZ4mu",4,0,4);
  TH1F* h_NZZ4e= new TH1F("NZZ4e","NZZ4e",4,0,4);
  TH1F* h_NZZ2e2mu= new TH1F("NZZ2e2mu","NZZ2e2mu",4,0,4);


  //=======================================================================

  //-------------------- Histograms for particles reconstruction --------------------------------------------
  TString type = "Events/", unit = "GeV", scale, scale_zz, scale_mpps;
  std::stringstream sac;
   
  //---------------------- Z's ---------------------
  sac << (z1_xf - z1_xi)/z1_bin;   scale = sac.str();
  TH1D* h_Z1ee = new TH1D("h_Z1ee","Z1 #rightarrow 2e",z1_bin,z1_xi,z1_xf);   h_Z1ee->SetFillColor(0);   
  h_Z1ee->GetXaxis()->SetTitle("m_{2e} (GeV)");   h_Z1ee->GetYaxis()->SetTitle(type+scale+unit);
  TH1D* h_Z1uu = new TH1D("h_Z1uu","Z1 #rightarrow 2#mu",z1_bin,z1_xi,z1_xf);   h_Z1uu->SetFillColor(0);
  h_Z1uu->GetXaxis()->SetTitle("m_{2#mu} (GeV)");   h_Z1uu->GetYaxis()->SetTitle(type+scale+unit);
  TH1D* h_Z1 = new TH1D("h_Z1","Z1 #rightarrow ll",z1_bin,z1_xi,z1_xf);   h_Z1->SetFillColor(0);
  h_Z1->GetXaxis()->SetTitle("m_{ll} (GeV)");   h_Z1->GetYaxis()->SetTitle(type+scale+unit);
  TH1D* h_Z1Cand = new TH1D("h_Z1Cand","Z1 #rightarrow ll",z1_bin,z1_xi,z1_xf);   h_Z1Cand->SetFillColor(0);
  h_Z1Cand->GetXaxis()->SetTitle("m_{ll} (GeV)");   h_Z1Cand->GetYaxis()->SetTitle(type+scale+unit);
    
  sac.str("");   sac << (z2_xf - z2_xi)/z2_bin;   scale = sac.str();
  TH1D* h_Z2ee = new TH1D("h_Z2ee","Z2 #rightarrow 2e",z2_bin,z2_xi,z2_xf);   h_Z2ee->SetFillColor(0);   
  h_Z2ee->GetXaxis()->SetTitle("m_{2e} (GeV)");   h_Z2ee->GetYaxis()->SetTitle(type+scale+unit);
  TH1D* h_Z2uu = new TH1D("h_Z2uu","Z2 #rightarrow 2#mu",z2_bin,z2_xi,z2_xf);   h_Z2uu->SetFillColor(0);   
  h_Z2uu->GetXaxis()->SetTitle("m_{2#mu} (GeV)");   h_Z2uu->GetYaxis()->SetTitle(type+scale+unit);
  TH1D* h_Z2 = new TH1D("h_Z2","Z2 #rightarrow ll",z2_bin,z2_xi,z2_xf);   h_Z2->SetFillColor(0);
  h_Z2->GetXaxis()->SetTitle("m_{ll} (GeV)");   h_Z2->GetYaxis()->SetTitle(type+scale+unit);
  TH1D* h_Z2Cand = new TH1D("h_Z2Cand","Z2 #rightarrow ll",z2_bin,z2_xi,z2_xf);   h_Z2Cand->SetFillColor(0);
  h_Z2Cand->GetXaxis()->SetTitle("m_{ll} (GeV)");   h_Z2Cand->GetYaxis()->SetTitle(type+scale+unit);
    
  TH1D* h_ee = new TH1D("h_ee","Z #rightarrow 2e",z2_bin,z2_xi,z2_xf);   h_ee->SetFillColor(0);   
  h_ee->GetXaxis()->SetTitle("m_{2e} (GeV)");   h_ee->GetYaxis()->SetTitle(type+scale+unit);
  TH1D* h_uu = new TH1D("h_uu","Z #rightarrow 2#mu",z2_bin,z2_xi,z2_xf);   h_uu->SetFillColor(0);
  h_uu->GetXaxis()->SetTitle("m_{2#mu} (GeV)");   h_uu->GetYaxis()->SetTitle(type+scale+unit);
    
  //------------------------------ Z mass scatter -------------------------------------------------------
  TH2D* Zmass_scatter = new TH2D("Zmass_scatter","Z Mass Scatter", z1_bin,z1_xi,z1_xf, z2_bin,z2_xi,z2_xf);
  Zmass_scatter->GetXaxis()->SetTitle("Z on shell mass (GeV)");
  Zmass_scatter->GetYaxis()->SetTitle("Z off shell mass (GeV)");
  Zmass_scatter->SetMarkerStyle(6);
   
  //-----------------------------------------------------------------------------------------------------
    
  //-------------------- ZZ's histograms -------------------
  sac.str("");   sac << (zz_xf - zz_xi)/zz_bin;   scale_zz = sac.str();
  TH1D* h_ZZ_M_4u = new TH1D("h_ZZ_M_4u","4#mu #rightarrow ZZ (M)",100, 0, 4000);
  //h_ZZ_M_4u->SetFillColor(kRed);
  h_ZZ_M_4u->GetXaxis()->SetTitle("m_{4#mu} (GeV)");
  //  h_ZZ_M_4u->GetYaxis()->SetTitle(type+scale_zz+unit);
   
  TH1D* h_ZZ_M_4e = new TH1D("h_ZZ_M_4e","4e #rightarrow ZZ (M)",100, 0, 4000);
  //h_ZZ_M_4e->SetFillColor(kGreen);
  h_ZZ_M_4e->GetXaxis()->SetTitle("m_{4e} (GeV)");
  // h_ZZ_M_4e->GetYaxis()->SetTitle(type+scale_zz+unit);
   
  TH1D* h_ZZ_M_eu = new TH1D("h_ZZ_M_eu","2e2#mu/2#mu2e #rightarrow ZZ (M)",100,0, 4000);
  //h_ZZ_M_eu->SetFillColor(kYellow);
  h_ZZ_M_eu->GetXaxis()->SetTitle("m_{2e2#mu/2#mu2e} (GeV)");
  // h_ZZ_M_eu->GetYaxis()->SetTitle(type+scale_zz+unit);
    
  TH1D* h_ZZ_M = new TH1D("h_ZZ_M","4l #rightarrow ZZ (M)",100,0,4000);
  //h_ZZ_M->SetFillColor(kBlue);
  h_ZZ_M->GetXaxis()->SetTitle("m_{4l} (GeV)");
  // h_ZZ_M->GetYaxis()->SetTitle(type+scale_zz+unit);
   
  TH1D* h_ZZ_M_signal = new TH1D("h_ZZ_M_signal","4l #rightarrow ZZ (M)",100,0,4000);
  //h_ZZ_M_signal->SetFillColor(kBlue);
  h_ZZ_M_signal->GetXaxis()->SetTitle("m_{4l} (GeV)");
  h_ZZ_M_signal->GetYaxis()->SetTitle(type+scale_zz+unit);
   
  TH1D* h_ZZ_pT_4u = new TH1D("h_ZZ_pT_4u","4#mu #rightarrow ZZ (p_{T})",pT_bin, pT_i, pT_f);
  h_ZZ_pT_4u->SetFillColor(kRed);
  h_ZZ_pT_4u->GetXaxis()->SetTitle("pT_{4#mu} (GeV^{2})");
    
  TH1D* h_ZZ_pT_4e = new TH1D("h_ZZ_pT_4e","4e #rightarrow ZZ (p_{T})",pT_bin, pT_i, pT_f);
  h_ZZ_pT_4e->SetFillColor(kGreen);
  h_ZZ_pT_4e->GetXaxis()->SetTitle("pT_{4e} (GeV^{2})");
    
  TH1D* h_ZZ_pT_eu = new TH1D("h_ZZ_pT_eu","2e2#mu/2#mu2e #rightarrow ZZ (p_{T})",pT_bin, pT_i, pT_f);
  h_ZZ_pT_eu->SetFillColor(kYellow);
  h_ZZ_pT_eu->GetXaxis()->SetTitle("pT_{2e2#mu/2#mu2e} (GeV^{2})");
    
  TH1D* h_ZZ_pT = new TH1D("h_ZZ_pT","4l #rightarrow ZZ (p_{T})",pT_bin, pT_i, pT_f);
  h_ZZ_pT->SetFillColor(kBlue);
  h_ZZ_pT->GetXaxis()->SetTitle("pT_{4l} (GeV^{2})");
   
  TH1D* h_ZZ_pT_signal = new TH1D("h_ZZ_pT_signal","4l #rightarrow ZZ (p_{T})",pT_bin, pT_i, pT_f);
  h_ZZ_pT_signal->SetFillColor(kBlue);
  h_ZZ_pT_signal->GetXaxis()->SetTitle("pT_{4l} (GeV^{2})");
    
  TH2D* h_ZZ_pTvsM = new TH2D("h_ZZ_pTvsM","4l #rightarrow ZZ (p_{T} vs m)",zz_bin, zz_xi, zz_xf, pT_bin, pT_i, pT_f);
  h_ZZ_pTvsM->SetFillColor(kBlue);
  h_ZZ_pTvsM->GetXaxis()->SetTitle("m_{4l} (GeV)");
  h_ZZ_pTvsM->GetYaxis()->SetTitle("p_{T}^{4l} (5GeV^{-1})");
    
  TH1D* h_ZZ_Eta_4u = new TH1D("h_ZZ_Eta_4u","4#mu #rightarrow ZZ (#eta)",100, -10, 10);
  h_ZZ_Eta_4u->SetFillColor(kRed);
  h_ZZ_Eta_4u->GetXaxis()->SetTitle("#eta_{4#mu}");
    
  TH1D* h_ZZ_Eta_4e = new TH1D("h_ZZ_Eta_4e","4e #rightarrow ZZ (#eta)",100, -10, 10);
  h_ZZ_Eta_4e->SetFillColor(kGreen);
  h_ZZ_Eta_4e->GetXaxis()->SetTitle("#eta_{4e}");
    
  TH1D* h_ZZ_Eta_eu = new TH1D("h_ZZ_Eta_eu","2e2#mu/2#mu2e #rightarrow ZZ (#eta)",100, -10, 10);
  h_ZZ_Eta_eu->SetFillColor(kYellow);
  h_ZZ_Eta_eu->GetXaxis()->SetTitle("#eta_{2e2#mu/2#mu2e}");
    
  TH1D* h_ZZ_Eta = new TH1D("h_ZZ_Eta","4l #rightarrow ZZ (#eta)",100, -10, 10);
  h_ZZ_Eta->SetFillColor(kBlue);
  h_ZZ_Eta->GetXaxis()->SetTitle("#eta");
    
  TH1D* h_ZZ_Phi_4u = new TH1D("h_ZZ_Phi_4u","4#mu #rightarrow ZZ (#phi)",100, -4., 4.);
  //h_ZZ_Phi_4u->SetFillColor(kRed);
  h_ZZ_Phi_4u->GetXaxis()->SetTitle("#phi_{4#mu}");
    
  TH1D* h_ZZ_Phi_4e = new TH1D("h_ZZ_Phi_4e","4e #rightarrow ZZ (#phi)",100, -4., 4.);
  //h_ZZ_Phi_4e->SetFillColor(kGreen);
  h_ZZ_Phi_4e->GetXaxis()->SetTitle("#phi_{4e}");
    
  TH1D* h_ZZ_Phi_eu = new TH1D("h_ZZ_Phi_eu","2e2#mu/2#mu2e #rightarrow ZZ (#phi)",100, -4., 4.);
  //h_ZZ_Phi_eu->SetFillColor(kYellow);
  h_ZZ_Phi_eu->GetXaxis()->SetTitle("#phi_{2e2#mu/2#mu2e}");
    
  TH1D* h_ZZ_Phi = new TH1D("h_ZZ_Phi","4l #rightarrow ZZ (#phi)",100, -4., 4.);
  //h_ZZ_Phi->SetFillColor(kBlue);
  h_ZZ_Phi->GetXaxis()->SetTitle("#phi");
    
  TH2D* h_ZZ_PhivsEta = new TH2D("h_ZZ_PhivsEta","4l #rightarrow ZZ (#phi vs #eta)",100, -10, 10, 100, -4., 4.);
  h_ZZ_PhivsEta->GetXaxis()->SetTitle("#eta");
  h_ZZ_PhivsEta->GetYaxis()->SetTitle("#phi");
    
  TH1D* h_ZZ_Y_4u = new TH1D("h_ZZ_Y_4u","4#mu #rightarrow ZZ (y)",200, -1.5, 1.5);
  //h_ZZ_Y_4u->SetFillColor(kRed);
  h_ZZ_Y_4u->GetXaxis()->SetTitle("y_{4#mu}");
   
  TH1D* h_ZZ_Y_4e = new TH1D("h_ZZ_Y_4e","4e #rightarrow ZZ (y)",200, -1.5, 1.5);
  //h_ZZ_Y_4e->SetFillColor(kGreen);
  h_ZZ_Y_4e->GetXaxis()->SetTitle("y_{4e}");
    
  TH1D* h_ZZ_Y_eu = new TH1D("h_ZZ_Y_eu","2e2#mu/2#mu2e #rightarrow ZZ (y)",200, -1.5, 1.5);
  //h_ZZ_Y_eu->SetFillColor(kYellow);
  h_ZZ_Y_eu->GetXaxis()->SetTitle("y_{2e2#mu/2#mu2e}");
    
  TH1D* h_ZZ_Y = new TH1D("h_ZZ_Y","4l #rightarrow ZZ (y)",200, -1.5, 1.5);
  //h_ZZ_Y->SetFillColor(kBlue);
  h_ZZ_Y->GetXaxis()->SetTitle("y");

  // User variables
  Int_t ZZgen4u=0, ZZgen4e=0, ZZgen2u2e=0, ZZgenX=0;
  Int_t ZZ4u=0, ZZ4e=0, ZZ2u2e=0, NZZ=0;
  Int_t ZZ4u_sel_mass=0, ZZ4e_sel_mass=0, ZZ2u2e_sel_mass=0, NZZ_sel_mass=0, N_sel_vertex=0;
  Int_t ratio_selection=0;
  Int_t lep_selection1 =0;  
  Int_t lep_selection2 =0;
  Int_t lep_selection3 =0;
  Int_t lep_selection4 =0;
  Int_t massx_selection=0;
  Int_t drap_selection=0;
  double ROOTS=13000.;    
  double Y_pp =-999;
  double Y_pp1 =-999;
  double Y_pp2 =-999;
  double Y_ppsmearing=-999.;
  double Ecm=-999.;
  double e_cmsmearing=-999.;
  double ecm_pileup_left=-999.;
  double ecm_pileup_right=-999.;
  double ecm_pileup_double=-999.;
  double xi=-999.;
  double ratio1=-999.; //left 
  double ratio2=-999.; //right
  double ratio3=-999.; //double
  double ratio_inc=-999.; //
  double ratio_inc_rl=-999.; //
  double ratio_inc_dr=-999.; //
  double ratio_inc_dl=-999.; //
  double M_ZZsumsmearing2=-999.;
  double ratio_mzzsum=-999.;
  double ratio_mzzsum_smearing=-999.;
  double dY4lp=-999.;   //Y_pp-Y_ZZ
  double dY4lp1=-999.;   //Y_pp-Y_ZZ pileupleft
  double dY4lp2=-999.;   //Y_pp-Y_ZZ pileupright
  double dY4lp_smearing=-999.;
  double ecm_pileup_inc =-999.;
  double ecm_inc_rl =-999.;
  double ecm_inc_dl =-999.;
  double ecm_inc_dr =-999.;
  double xi_l=-999.;
  double xi_r=-999.;
  double xi_d=-999.;
  double Y_inc_rl=-999.;      
  double dY4lp_rl=-999.;


  double mu_lead=-999.;
  double mu_sec=-999.;

  double mu_lead_off=-999.;
  double mu_sec_off=-999.;

  double e_lead=-999.;
  double e_sec=-999.;

  double e_lead_off=-999.;
  double e_sec_off=-999.;


  enum pileup_type {INVALID, NOPU, PULEFT, PURIGHT, PULEFTRIGHT, PUDOUBLE};

  bool selectZZtruth = true;

  Int_t n_events = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0 ) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    // if (Cut(ientry) < 0) continue;
    //nentries
    ++n_events;

    
    //=======================================
    if( n_Z == 2 ) {
       // 4e
       if( abs( Z_decay_first_pid[0] ) == 11 && abs( Z_decay_second_pid[0] ) == 11 &&
           abs( Z_decay_first_pid[1] ) == 11 && abs( Z_decay_second_pid[1] ) == 11 ) ++ZZgen4e;
       // 4u
       else if( abs( Z_decay_first_pid[0] ) == 13 && abs( Z_decay_second_pid[0] ) == 13 &&
           abs( Z_decay_first_pid[1] ) == 13 && abs( Z_decay_second_pid[1] ) == 13 ) ++ZZgen4u;
       // 2e2u
       else if( abs( Z_decay_first_pid[0] ) == 11 && abs( Z_decay_second_pid[0] ) == 11 &&
           abs( Z_decay_first_pid[1] ) == 13 && abs( Z_decay_second_pid[1] ) == 13 ) ++ZZgen2u2e;
       // 2u2e
       else if( abs( Z_decay_first_pid[0] ) == 13 && abs( Z_decay_second_pid[0] ) == 13 &&
           abs( Z_decay_first_pid[1] ) == 11 && abs( Z_decay_second_pid[1] ) == 11 ) ++ZZgen2u2e;
       else {
          ++ZZgenX;
          if( selectZZtruth ) continue;
       }
    }
    
    
    //=======================================


    //===================================== On shell Z =======================================================================
    

    //Seleçao dos 4 leptons

      
    Int_t e1=-1, e2=-1, e3=-1, e4=-1, 
      u1=-1, u2=-1, u3=-1, u4=-1; 
    Int_t ZZuu=0, ZZee=0, ZZue=0, ZZeu=0;
    //Int_t lep1=-1, lep2=-1;    

    Int_t proton_final=0;
    

    TLorentzVector Z_uu, Z_ee, Zuu_off, Zee_off;
    TLorentzVector Z_on, Z_off;
    TLorentzVector q11, q12, q21, q22;

    TLorentzVector mu_leading_ue;
    TLorentzVector mu_second_ue;

    TLorentzVector mu_leading;
    TLorentzVector mu_second;

    TLorentzVector ele_leading;
    TLorentzVector ele_second;

    TLorentzVector ele_leading_eu;
    TLorentzVector ele_second_eu;

    TLorentzVector mu_leading_off;
    TLorentzVector mu_second_off;

    TLorentzVector ele_leading_off;
    TLorentzVector ele_second_off;

    TLorentzVector ele_leading_off_ue;
    TLorentzVector ele_second_off_ue;

    TLorentzVector mu_leading_off_eu;
    TLorentzVector mu_second_off_eu;

    ele_leading.SetPxPyPzE(0.,0.,0.,0.);
    ele_second.SetPxPyPzE(0.,0.,0.,0.);
    
    ele_leading_off.SetPxPyPzE(0.,0.,0.,0.);
    ele_second_off.SetPxPyPzE(0.,0.,0.,0.);

    mu_leading.SetPxPyPzE(0.,0.,0.,0.);
    mu_second.SetPxPyPzE(0.,0.,0.,0.);

    mu_leading_off.SetPxPyPzE(0.,0.,0.,0.);
    mu_second_off.SetPxPyPzE(0.,0.,0.,0.);
        
    mu_leading_off_eu.SetPxPyPzE(0.,0.,0.,0.);
    mu_second_off_eu.SetPxPyPzE(0.,0.,0.,0.);

    ele_leading_eu.SetPxPyPzE(0.,0.,0.,0.);
    ele_second_eu.SetPxPyPzE(0.,0.,0.,0.);
 
    mu_leading_ue.SetPxPyPzE(0.,0.,0.,0.);
    mu_second_ue.SetPxPyPzE(0.,0.,0.,0.);

    ele_leading_off_ue.SetPxPyPzE(0.,0.,0.,0.);
    ele_second_off_ue.SetPxPyPzE(0.,0.,0.,0.);


    Z_on.SetPxPyPzE(0.,0.,0.,0.); Z_off.SetPxPyPzE(0.,0.,0.,0.);


    Double_t Z_diff_mass_min = 999.;
    for( Int_t i = 0; i < n_mu; i++ )
      for( Int_t j=i+1; j < n_mu; j++ ) {
	if( mu_charge[i]*mu_charge[j] < 0 ) {
	  if( mu_pt[i] < 5. || mu_pt[j] < 5. ||
	      fabs( mu_eta[i] ) > 2.4 || fabs( mu_eta[j] ) > 2.4 ) continue;

	  TLorentzVector Z_cand; 
	  Z_cand.SetPxPyPzE(mu_px[i] + mu_px[j],
			    mu_py[i] + mu_py[j],
			    mu_pz[i] + mu_pz[j],
			    mu_energy[i] + mu_energy[j]);
	 

	  // Select Z candidate with mass closest to nominal
	  if( fabs( Z_cand.M() - mass_Z ) < Z_diff_mass_min ) { 
	    Z_diff_mass_min = fabs( Z_cand.M() - mass_Z ); u1 = i; u2 = j;
	    Z_uu = Z_cand;
	  }
	}
      }
  
    //plotar  eta, pt     
    Z_diff_mass_min = 999.;
    for( Int_t i = 0; i < n_e; i++ ) 
      for( Int_t j=i+1; j < n_e; j++ ){
	if( e_charge[i]*e_charge[j] < 0 ){
	  if( e_pt[i] < 7. || e_pt[j] < 7. ||
	      fabs( e_eta[i] ) > 2.5 || fabs( e_eta[j] ) > 2.5 ) continue;
	  TLorentzVector Z_cand; 
	  Z_cand.SetPxPyPzE(e_px[i] + e_px[j],
			    e_py[i] + e_py[j],
			    e_pz[i] + e_pz[j],
			    e_energy[i] + e_energy[j]);
	  // Select Z candidate with mass closest to nominal
	  if( fabs( Z_cand.M() - mass_Z ) < Z_diff_mass_min ) { 
	    Z_diff_mass_min = fabs( Z_cand.M() - mass_Z ); e1 = i; e2 = j;
	    Z_ee = Z_cand;
	  }
	}
      }
    
    //============================================ Define Z1 and searches Z2 ====================================================== 
     
    //******* Case 1: On shell Z, built with muons, more close to nominal Z mass *********************
    if(  ( u1!=-1 && u2!=-1 && ( e1==-1 || e2==-1 ) ) ||
	 ( u1!=-1 && u2!=-1 && e1!=-1 && e2!=-1 && fabs( Z_uu.M() - mass_Z ) <= fabs( Z_ee.M() - mass_Z ) ) ) {
      Z_on = Z_uu;
      Int_t lep1=-1, lep2=-1;
      if( mu_charge[u1] < 0 && mu_charge[u2] > 0 ){ lep1 = u1; lep2 = u2; }
      else if( mu_charge[u1] > 0 && mu_charge[u2] < 0 ){ lep1 = u2; lep2 = u1; }
      q11.SetPtEtaPhiM(mu_pt[lep1], mu_eta[lep1], mu_phi[lep1], mu_mass[lep1]);
      q12.SetPtEtaPhiM(mu_pt[lep2], mu_eta[lep2], mu_phi[lep2], mu_mass[lep2]);
      //4mu
      
      //--------------------- Selection of 1st lepton of off shell Z -----------------------------------
      Double_t max_ptu=0;
      for( Int_t i = 0; i < n_mu; i++ ){
	if( i != u1 && i != u2 ){
	  if( mu_pt[i] < 5. || fabs( mu_eta[i] ) > 2.4 ) continue;
	  if( mu_pt[i] > max_ptu ){
	    max_ptu = mu_pt[i]; u3 = i;
	  }
	}
      }
      Double_t max_pte=0;
      for(Int_t i=0; i< n_e; i++){
	if( e_pt[i] < 7. || fabs( e_eta[i] ) > 2.5 ) continue;
	if( e_pt[i] > max_pte ){
	  max_pte = e_pt[i]; e3 = i;
	}
      }
      //-------------------- Selection of 2nd lepton of off shell Z --------------------------------------------------------------------------
      max_ptu=0;
      for( Int_t i = 0; i < n_mu; i++ ){
	if( u3 != -1 && mu_charge[i]*mu_charge[u3] < 0 &&
	    i!=u1 && i!=u2 && i!=u3 ){
	  if( mu_pt[i] < 5. || fabs( mu_eta[i] ) > 2.4 ) continue;
	  if( mu_pt[i] > max_ptu ){
	    max_ptu = mu_pt[i]; u4 = i;
	  }
	}
      }
      max_pte=0;
      for(Int_t i=0; i<n_e; i++){
	if( e3 != -1 && e_charge[i]*e_charge[e3] < 0 && i!=e3 ){
	  if( e_pt[i] < 7. || fabs( e_eta[i] ) > 2.5 ) continue;
	  if( e_pt[i] > max_pte ){
	    max_pte = e_pt[i]; e4 = i;
	  }
	}
      }

      //------- Choice of Z2 Case 1 -------------------
      if( ( u3!=-1 && u4!=-1 && ( e3==-1 || e4==-1 ) ) || ( u3!=-1 && u4!=-1 && e3!=-1 && e4!=-1 && mu_pt[u3]+mu_pt[u4] >= e_pt[e3]+e_pt[e4] ) ){
	TLorentzVector Z_cand; 
	Z_cand.SetPxPyPzE(mu_px[u3] + mu_px[u4],
			  mu_py[u3] + mu_py[u4],
			  mu_pz[u3] + mu_pz[u4],
			  mu_energy[u3] + mu_energy[u4]);
	Z_off = Z_cand;
	++ZZuu;
	//=======================================================================================
	if(ZZuu != 0){
	  double max_pt = 0.;
	  int idx_mu_leading = -1;
	  int idx_mu_second = -1;
	  if(mu_pt[u1] >= e_pt[u2]){
	    max_pt = mu_pt[u1];
	    idx_mu_leading = u1;
	    idx_mu_second = u2;
	  }else{
	    max_pt = e_pt[u2];
	    idx_mu_leading = u2;
	    idx_mu_second = u1;
	  }
	  mu_leading.SetPxPyPzE(mu_px[idx_mu_leading],
				mu_py[idx_mu_leading],
				mu_pz[idx_mu_leading],
				mu_energy[idx_mu_leading]);
	  mu_second.SetPxPyPzE(mu_px[idx_mu_second],
			       mu_py[idx_mu_second],
			       mu_pz[idx_mu_second],
			       mu_energy[idx_mu_second]);
	}

	if(ZZuu != 0){
	  double max_pt = 0.;
	  int idx_mu_leading_off = -1;
	  int idx_mu_second_off = -1;
	  if(mu_pt[u3] >= mu_pt[u4]){
	    max_pt = mu_pt[u3];
	    idx_mu_leading_off = u3;
	    idx_mu_second_off = u4;
	  }else{
	    max_pt = mu_pt[u4];
	    idx_mu_leading_off = u4;
	    idx_mu_second_off = u3;
	  }
	  mu_leading_off.SetPxPyPzE(mu_px[idx_mu_leading_off],
				    mu_py[idx_mu_leading_off],
				    mu_pz[idx_mu_leading_off],
				    mu_energy[idx_mu_leading_off]);
	  mu_second_off.SetPxPyPzE(mu_px[idx_mu_second_off],
				   mu_py[idx_mu_second_off],
				   mu_pz[idx_mu_second_off],
				   mu_energy[idx_mu_second_off]);



	}

	//========================================================================

	//-------------------------------------------------------------------------------------------------------------------
	Int_t lep1=-1, lep2=-1;
	if( mu_charge[u3] < 0 && mu_charge[u4] > 0 ){ lep1 = u3; lep2 = u4; }
	else if( mu_charge[u3] > 0 && mu_charge[u4] < 0 ){ lep1 = u4; lep2 = u3; }
	q21.SetPtEtaPhiM(mu_pt[lep1], mu_eta[lep1], mu_phi[lep1], mu_mass[lep1]);
	q22.SetPtEtaPhiM(mu_pt[lep2], mu_eta[lep2], mu_phi[lep2], mu_mass[lep2]);
      }
      //-------------------------------------------------------------------------------------------------------------------
      if( ( e3!=-1 && e4!=-1 && ( u3==-1 || u4==-1 ) ) || (u3!=-1 && u4!=-1 && e3!=-1 && e4!=-1 && mu_pt[u3]+mu_pt[u4] < e_pt[e3]+e_pt[e4]) ){
	TLorentzVector Z_cand; 
	Z_cand.SetPxPyPzE(e_px[e3] + e_px[e4],
			  e_py[e3] + e_py[e4],
			  e_pz[e3] + e_pz[e4],
			  e_energy[e3] + e_energy[e4]);
	Z_off = Z_cand;
	++ZZue;

	if(ZZue != 0){
	  double max_pt = 0.;
	  int idx_mu_leading_ue = -1;
	  int idx_mu_second_ue = -1;
	  if(mu_pt[u1] >= mu_pt[u2]){
	    max_pt = mu_pt[u1];
	    idx_mu_leading_ue = u1;
	    idx_mu_second_ue = u2;
	  }else{
	    max_pt = mu_pt[u2];
	    idx_mu_leading_ue = u2;
	    idx_mu_second_ue = u1;
	  }
	  mu_leading_ue.SetPxPyPzE(mu_px[idx_mu_leading_ue],
				   mu_py[idx_mu_leading_ue],
				   mu_pz[idx_mu_leading_ue],
				   mu_energy[idx_mu_leading_ue]);
	  mu_second_ue.SetPxPyPzE(mu_px[idx_mu_second_ue],
				  mu_py[idx_mu_second_ue],
				  mu_pz[idx_mu_second_ue],
				  mu_energy[idx_mu_second_ue]);
	}
	
	if(ZZue != 0){
	  double max_pt = 0.;
	  int idx_e_leading_off_ue = -1;
	  int idx_e_second_off_ue = -1;
	  if(e_pt[e3] >= e_pt[e4]){
	    max_pt = e_pt[e3];
	    idx_e_leading_off_ue = e3;
	    idx_e_second_off_ue = e4;
	  }else{
	    max_pt = e_pt[e4];
	    idx_e_leading_off_ue = e4;
	    idx_e_second_off_ue = e3;
	  }
	  ele_leading_off_ue.SetPxPyPzE(e_px[idx_e_leading_off_ue],
					e_py[idx_e_leading_off_ue],
					e_pz[idx_e_leading_off_ue],
					e_energy[idx_e_leading_off_ue]);
	  ele_second_off_ue.SetPxPyPzE(e_px[idx_e_second_off_ue],
				       e_py[idx_e_second_off_ue],
				       e_pz[idx_e_second_off_ue],
				       e_energy[idx_e_second_off_ue]);
	}

	//-------------------------------------------------------------------------------------------------------------------------
	Int_t lep1=-1, lep2=-1;
	if( e_charge[e3] < 0 && e_charge[e4] > 0 ){ lep1 = e3; lep2 = e4; }
	else if( e_charge[e3] > 0 && e_charge[e4] < 0 ){ lep1 = e4; lep2 = e3; }
	q21.SetPtEtaPhiM(e_pt[lep1], e_eta[lep1], e_phi[lep1], e_mass[lep1]);
	q22.SetPtEtaPhiM(e_pt[lep2], e_eta[lep2], e_phi[lep2], e_mass[lep2]);
      }
    } //End Case 1 (Z(uu) on-shell)
      //************* Case 2: On shell Z, built with electrons
    else if( ( e1!=-1 && e2!=-1 && ( u1==-1 || u2==-1 ) ) ||
	     ( u1!=-1 && u2!=-1 && e1!=-1 && e2!=-1 && fabs( Z_uu.M() - mass_Z ) > fabs( Z_ee.M() - mass_Z) ) ){
      Z_on = Z_ee;
      //------------------------------------------------------------------------------------------------------------------------
      Int_t lep1=-1, lep2=-1;
      if( e_charge[e1] < 0 && e_charge[e2] > 0 ){ lep1 = e1; lep2 = e2; }
      else if( e_charge[e1] > 0 && e_charge[e2] < 0 ){ lep1 = e2; lep2 = e1; }
      q11.SetPtEtaPhiM(e_pt[lep1], e_eta[lep1], e_phi[lep1], e_mass[lep1]);
      q12.SetPtEtaPhiM(e_pt[lep2], e_eta[lep2], e_phi[lep2], e_mass[lep2]);
      //------------------------------------ Selection of 1st lepton of off shell Z ---------------------------------------------------
      Double_t max_ptu=0; 
      for( Int_t i = 0; i < n_mu; i++ ) {
	if( mu_pt[i] < 5. || fabs( mu_eta[i] ) > 2.4 ) continue;
	if( mu_pt[i] > max_ptu ){
	  max_ptu = mu_pt[i]; u3 = i;
	}
      }
      Double_t max_pte=0;
      for(Int_t i=0; i< n_e; i++){
	if( i != e1 && i != e2 ){
	  if( e_pt[i] < 7. || fabs( e_eta[i] ) > 2.5 ) continue;
	  if( e_pt[i] > max_pte ){
	    max_pte = e_pt[i]; e3 = i;
	  }
	}
      }
      //------------------------- Selection of 2nd lepton of off shell Z --------------------------------------------------------------------------
      max_ptu=0;
      for( Int_t i = 0; i < n_mu; i++ ) {
	if( u3 != -1 && mu_charge[i]*mu_charge[u3] < 0 && i!=u3 ){
	  if( mu_pt[i] < 5. || fabs( mu_eta[i] ) > 2.4 ) continue;
	  if( mu_pt[i] > max_ptu ){
	    max_ptu = mu_pt[i]; u4 = i;
	  }
	}
      }
      max_pte=0;
      for(Int_t i=0; i<n_e; i++){
	if( e3 != -1 && e_charge[i]*e_charge[e3] < 0 && i!=e1 && i!=e2 && i!=e3 ){
	  if( e_pt[i] < 7. || fabs( e_eta[i] ) > 2.5 ) continue;
	  if( e_pt[i] > max_pte ) {
	    max_pte = e_pt[i]; e4 = i;
	  }
	}
      }
      //------- Choice of off shell Z Case 2 -------------------
      if( ( u3!=-1 && u4!=-1 && ( e3==-1 || e4==-1 ) ) || (u3!=-1 && u4!=-1 && e3!=-1 && e4!=-1 && mu_pt[u3]+mu_pt[u4] >= e_pt[e3]+e_pt[e4]) ){ 
	TLorentzVector Z_cand; 
	Z_cand.SetPxPyPzE(mu_px[u3] + mu_px[u4],
			  mu_py[u3] + mu_py[u4],
			  mu_pz[u3] + mu_pz[u4],
			  mu_energy[u3] + mu_energy[u4]);
	Z_off = Z_cand;
	++ZZeu;


     	if(ZZeu != 0){
	  double max_pt = 0.;
	  int idx_e_leading_eu = -1;
	  int idx_e_second_eu = -1;
	  if(e_pt[e1] >= e_pt[e2]){
	    max_pt = e_pt[e1];
	    idx_e_leading_eu = e1;
	    idx_e_second_eu = e2;
	  }else{
	    max_pt = e_pt[e2];
	    idx_e_leading_eu = e2;
	    idx_e_second_eu = e1;
	  }
	  ele_leading_eu.SetPxPyPzE(e_px[idx_e_leading_eu],
				    e_py[idx_e_leading_eu],
				    e_pz[idx_e_leading_eu],
				    e_energy[idx_e_leading_eu]);
	  ele_second_eu.SetPxPyPzE(e_px[idx_e_second_eu],
				   e_py[idx_e_second_eu],
				   e_pz[idx_e_second_eu],
				   e_energy[idx_e_second_eu]);
	}
	

	if(ZZeu != 0){
	  double max_pt = 0.;
	  int idx_mu_leading_off_eu = -1;
	  int idx_mu_second_off_eu = -1;
	  if(mu_pt[u3] >= mu_pt[u4]){
	    max_pt = mu_pt[u3];
	    idx_mu_leading_off_eu = u3;
	    idx_mu_second_off_eu = u4;
	  }else{
	    max_pt = mu_pt[u4];
	    idx_mu_leading_off_eu = u4;
	    idx_mu_second_off_eu = u3;
	  }
	  mu_leading_off_eu.SetPxPyPzE(mu_px[idx_mu_leading_off_eu],
				       mu_py[idx_mu_leading_off_eu],
				       mu_pz[idx_mu_leading_off_eu],
				       mu_energy[idx_mu_leading_off_eu]);
	  mu_second_off_eu.SetPxPyPzE(mu_px[idx_mu_second_off_eu],
				      mu_py[idx_mu_second_off_eu],
				      mu_pz[idx_mu_second_off_eu],
				      mu_energy[idx_mu_second_off_eu]);
	}


	//-------------------------------------------------------------------------------------------------------------------
	Int_t lep1=-1, lep2=-1;
	if( mu_charge[u3] < 0 && mu_charge[u4] > 0 ){ lep1 = u3; lep2 = u4; }
	else if( mu_charge[u3] > 0 && mu_charge[u4] < 0 ){ lep1 = u4; lep2 = u3; }
	q21.SetPtEtaPhiM(mu_pt[lep1], mu_eta[lep1], mu_phi[lep1], mu_mass[lep1]);
	q22.SetPtEtaPhiM(mu_pt[lep2], mu_eta[lep2], mu_phi[lep2], mu_mass[lep2]);
      }
      //-------------------------------------------------------------------------------------------------------------------    
      if( ( e3!=-1 && e4!=-1 && ( u3==-1 || u4==-1 ) ) || (u3!=-1 && u4!=-1 && e3!=-1 && e4!=-1 && mu_pt[u3]+mu_pt[u4] < e_pt[e3]+e_pt[e4]) ){
	TLorentzVector Z_cand; 
	Z_cand.SetPxPyPzE(e_px[e3] + e_px[e4],
			  e_py[e3] + e_py[e4],
			  e_pz[e3] + e_pz[e4],
			  e_energy[e3] + e_energy[e4]);
	Z_off = Z_cand;
	++ZZee;

      
	if(ZZee != 0){
	  double max_pt = 0.;
	  int idx_e_leading = -1;
	  int idx_e_second = -1;
	  if(e_pt[e1] >= e_pt[e2]){
	    max_pt = e_pt[e1];
	    idx_e_leading = e1;
	    idx_e_second = e2;
	  }else{
	    max_pt = e_pt[e2];
	    idx_e_leading = e2;
	    idx_e_second = e1;
	  }
	  ele_leading.SetPxPyPzE(e_px[idx_e_leading],
				 e_py[idx_e_leading],
				 e_pz[idx_e_leading],
				 e_energy[idx_e_leading]);
	  ele_second.SetPxPyPzE(e_px[idx_e_second],
				e_py[idx_e_second],
				e_pz[idx_e_second],
				e_energy[idx_e_second]);

	}
	
	if(ZZee != 0){
	  double max_pt = 0.;
	  int idx_e_leading_off = -1;
	  int idx_e_second_off = -1;
	  if(e_pt[e3] >= e_pt[e4]){
	    max_pt = e_pt[e3];
	    idx_e_leading_off = e3;
	    idx_e_second_off = e4;
	  }else{
	    max_pt = e_pt[e4];
	    idx_e_leading_off = e4;
	    idx_e_second_off = e3;
	  }
	  ele_leading_off.SetPxPyPzE(e_px[idx_e_leading_off],
				     e_py[idx_e_leading_off],
				     e_pz[idx_e_leading_off],
				     e_energy[idx_e_leading_off]);
	  ele_second_off.SetPxPyPzE(e_px[idx_e_second_off],
				    e_py[idx_e_second_off],
				    e_pz[idx_e_second_off],
				    e_energy[idx_e_second_off]);

	}


	//-------------------------------------------------------------------------------------------------------------------------
	Int_t lep1=-1, lep2=-1;
	if( e_charge[e3] < 0 && e_charge[e4] > 0 ){ lep1 = e3; lep2 = e4; }
	else if( e_charge[e3] > 0 && e_charge[e4] < 0 ){ lep1 = e4; lep2 = e3; }
	q21.SetPtEtaPhiM(e_pt[lep1], e_eta[lep1], e_phi[lep1], e_mass[lep1]);
	q22.SetPtEtaPhiM(e_pt[lep2], e_eta[lep2], e_phi[lep2], e_mass[lep2]);
      }
    } // End Case 2 (Z(ee) on-shell)
      //==================================================================================================================================


    //============================================================
    //Cuts    
    //============================================================
      
    //----------    ZZ       -----------------
    Double_t M_ZZ = -999;
    Double_t pT_ZZ = -999;
    Double_t Eta_ZZ = -999;
    Double_t Phi_ZZ = -999;
    Double_t Y_ZZ = -999;
    Double_t E_ZZ = -999;
    Double_t Pz_ZZ = -999;
    cout << "Event " << n_events << ": " << endl;
    cout << "ZZuu | ZZee | ZZue | ZZeu = " << ZZuu << " | " << ZZee << " | " << ZZue << " | " << ZZeu << endl;
    if( ZZuu != 0 || ZZee != 0 || ZZue != 0 || ZZeu != 0 ){ 
      
      if(ZZuu != 0){                   ++ZZ4u;
	h_NZZ4lep->Fill(0);
      }
      else if(ZZee != 0){              ++ZZ4e;
	h_NZZ4lep->Fill(1);
      }
      else if(ZZue != 0 || ZZeu != 0){ ++ZZ2u2e;
	h_NZZ4lep->Fill(2);
      }
      ++NZZ; 
      
      if ( Z_off.M() < z2_xi || Z_off.M() > z2_xf ) continue;
      if ( Z_on.M() < z1_xi || Z_on.M() > z1_xf ) continue;


      //h_NZZ4lep->Fill(NZZ);
      // h_NZZ4lep->Fill(0)



      
      h_Z1->Fill(Z_on.M()); h_Z1uu->Fill(Z_on.M()); h_uu->Fill(Z_on.M());  
      h_Z2->Fill(Z_off.M()); h_Z2uu->Fill(Z_off.M()); h_uu->Fill(Z_off.M());

      M_ZZ = ((Z_on+Z_off).M());
      M_ZZ*=gRandom->Gaus(1,0.04); //smearing 4%
      if(M_ZZ < 195 || M_ZZ > 1950) continue;

      pT_ZZ = ((Z_on+Z_off).Pt());
      Eta_ZZ = ((Z_on+Z_off).Eta());
      E_ZZ = ( (Z_on+Z_off).E() );
      Pz_ZZ = ( (Z_on+Z_off).Pz() ); 

      Phi_ZZ = TMath::ATan2( (Z_on+Z_off).Py() , (Z_on+Z_off).Px() );
      //if ( Phi_ZZ >= TMath::Pi() ) Phi_ZZ -= 2*TMath::Pi(); // [-pi,pi)
      //if ( Phi_ZZ < -TMath::Pi() ) Phi_ZZ += 2*TMath::Pi();
      if(Phi_ZZ > TMath::Pi()) Phi_ZZ = 2*TMath::Pi()-Phi_ZZ; 


      Y_ZZ = 0.5*log( (E_ZZ + Pz_ZZ)/(E_ZZ - Pz_ZZ) );
      Y_ZZ*=gRandom->Gaus(1,0.04); //smearing 4%
      double Y_ZZ_gen = 0.5*log( (E_ZZ + Pz_ZZ)/(E_ZZ - Pz_ZZ) );



      //======================================================================        
      //proton (Declare 4vector of each particle and make it acessible to the whole macro)
      //======================================================================
      bool found_proton1=false;
      bool found_proton2=false;
      int nproton1=0;
      int nproton2=0;

      double ib1=6500.;
      double ib2=6500.;      


      double xi_min_sel = 0.015;
      //double xi_min_sel = 0.03;
      double xi_max_sel = 0.15;	 

      TLorentzVector proton1p4,proton2p4, protonp4;
      for(int iproton = 0; iproton < n_proton; iproton++){
	   
	double proton1_px = proton_px[iproton];
	double proton1_py = proton_py[iproton];
	double proton1_pz = proton_pz[iproton];
	double proton1_pt = proton_pt[iproton];
	double proton1_energy = proton_energy[iproton];
	protonp4.SetPxPyPzE(proton1_px,proton1_py,proton1_pz,proton1_energy);
      
	if(protonp4.Pz()>0){
          double xi_tmp = 1. - fabs(protonp4.Pz())/ib1;
          if( (xi_tmp >= xi_min_sel) && (xi_tmp <= xi_max_sel) ){
	    proton1p4.SetPxPyPzE(proton1_px,proton1_py,proton1_pz,proton1_energy);
	    found_proton1=true;
	    ++nproton1;
          }
	}// 4 vector  Pz>0
	if(protonp4.Pz()<0){
          double xi_tmp =  1. - fabs(protonp4.Pz())/ib2;
          if( (xi_tmp >= xi_min_sel) && (xi_tmp <= xi_max_sel) ){
	    proton2p4.SetPxPyPzE(proton1_px,proton1_py,proton1_pz,proton1_energy);
	    found_proton2=true;
	    ++nproton2;
          }
	}// 4 vector Pz<0
      }// end proton loop  
      h_proton_pt->Fill(protonp4.Pt());
      h_proton_px->Fill(protonp4.Px());
      h_proton_py->Fill(protonp4.Py());
      h_proton_pz->Fill(protonp4.Pz());
      h_proton_energy->Fill(protonp4.E());    
      h_nproton->Fill(n_proton);
      //==============================================================
      //Keeping sure that i am selection just one proton per event  
      //==============================================================
      h_nproton1->Fill(nproton1);       
      h_nproton2->Fill(nproton2);            
      //===============================================================    
     
      double proton1_xi = (found_proton1) ? ( 1. - fabs(proton1p4.Pz())/ib1 ) : -1.;
      proton1_xi*=gRandom->Gaus(1,0.02); //smearing 2%
      double proton2_xi = (found_proton2) ? ( 1. - fabs(proton2p4.Pz())/ib2 ) : -1.;
      proton2_xi*=gRandom->Gaus(1,0.02);  //smearing 2%


      //=========================================================================================
      //no Smear
      //=========================================================================================
      double proton1_xi_gen= (found_proton1) ? ( 1. - fabs(proton1p4.Pz())/ib1 ) : -1.;
      double proton2_xi_gen= (found_proton2) ? ( 1. - fabs(proton2p4.Pz())/ib1 ) : -1.;
      //========================================================================================

      double massx_nosmear = sqrt(proton1_xi_gen*proton2_xi_gen)*ROOTS;
      double y_pp_nosmear= 0.5*TMath::Log(proton1_xi_gen/proton2_xi_gen);
      double ypp_yzz = y_pp_nosmear-Y_ZZ_gen;

      double proton1_xi_gen_smear1= (found_proton1) ? ( 1. - fabs(proton1p4.Pz())/ib1 ) : -1.;
      proton1_xi_gen_smear1*=gRandom->Gaus(1,0.01); //smearing 1%
      double proton2_xi_gen_smear1= (found_proton2) ? ( 1. - fabs(proton2p4.Pz())/ib1 ) : -1.;
      proton2_xi_gen_smear1*=gRandom->Gaus(1,0.01); //smearing 1%
      
      double massx_smear1 = sqrt(proton1_xi_gen_smear1*proton2_xi_gen_smear1)*ROOTS;
      
      
      double dphi_proton=fabs(proton1p4.Phi()-proton2p4.Phi());
      if(dphi_proton>3.1415927) dphi_proton= 6.2831853-dphi_proton;



      if(proton1_xi_gen_smear1 <0.2 && proton1_xi_gen_smear1 > 0.00015 && proton2_xi_gen_smear1 <0.2 && proton2_xi_gen_smear1 > 0.00015 &&
	 proton1_xi_gen <0.2 && proton1_xi_gen > 0.00015 && proton2_xi_gen <0.2 && proton2_xi_gen > 0.00015 ){
	
	h_massx_smear1->Fill(massx_smear1);	
	double dif_smear1 = (massx_nosmear - massx_smear1)/(massx_nosmear);
	h_dmass_dif_smear1->Fill(dif_smear1);
	double dif_xi1_smear1= (proton1_xi_gen - proton1_xi_gen_smear1)/proton1_xi_gen;
	h_dxi1_dif_smear1->Fill(dif_xi1_smear1);
	double y_pp_smear1 =  0.5*TMath::Log(proton1_xi_gen_smear1/proton2_xi_gen_smear1);
	double ypp_yzz_smear1 = y_pp_smear1 - Y_ZZ_gen;
	double dif_ypp_yzz_smear1= (ypp_yzz - ypp_yzz_smear1)/ypp_yzz;
	h_dypp_dif_smear1->Fill(dif_ypp_yzz_smear1);


      }
      
      double proton1_xi_gen_smear2= (found_proton1) ? ( 1. - fabs(proton1p4.Pz())/ib1 ) : -1.;
      proton1_xi_gen_smear2*=gRandom->Gaus(1,0.02); //smearing 2%
      double proton2_xi_gen_smear2= (found_proton2) ? ( 1. - fabs(proton2p4.Pz())/ib1 ) : -1.;
      proton2_xi_gen_smear2*=gRandom->Gaus(1,0.02); //smearing 2%
      double massx_smear2 = sqrt(proton1_xi_gen_smear2*proton2_xi_gen_smear2)*ROOTS;
      

      if(proton1_xi_gen_smear2 < 0.2 && proton1_xi_gen_smear2 > 0.00015 && proton2_xi_gen_smear2 <0.2 && proton2_xi_gen_smear2 > 0.00015 ){
	
	h_massx_smear2->Fill(massx_smear2);	
	double dif_smear2 = (massx_nosmear - massx_smear2)/(massx_nosmear);
	h_dmass_dif_smear2->Fill(dif_smear2);

	double dif_xi1_smear2= (proton1_xi_gen - proton1_xi_gen_smear2)/proton1_xi_gen;
	h_dxi1_dif_smear2->Fill(dif_xi1_smear2);

	double y_pp_smear2 = 0.5*TMath::Log(proton1_xi_gen_smear2/proton2_xi_gen_smear2);

	double ypp_yzz_smear2 = y_pp_smear2-Y_ZZ_gen;
	double dif_ypp_yzz_smear2= (ypp_yzz - ypp_yzz_smear2)/ypp_yzz;
	h_dypp_dif_smear2->Fill(dif_ypp_yzz_smear2);

	
       }





         
      //=====================================================================
      //Pile-up
      //=====================================================================

      /*                                                                                                
      double P_n = 0.9672261;
      double P_sl= 0.9834837;  //0.01653060
      double P_sr= 0.9997270;  //0.01651630
      double P_d = 1;          //0.00009150
      */
      
                                    
      //=========================================================================
      //Probilities * 2 
      //=============================================================================
                       
                                                         
      double P_n = 0.9337232;  //0.9337232
      double P_sl= 0.9667844;  //0.01653060*2 = 0.0330612
      double P_sr= 0.999817;   //0.01651630*2 = 0.0330326
      double P_d = 1;          //0.00009150*2 = 0.000183 
      
      


      double ximin=0.015;
      double ximax=0.15;
    
      // Poisson draw
      double mu=50;
      double nb_pileup_inter =gRandom->Poisson(mu);
    
      h_pileup->Fill(nb_pileup_inter);
    
      vector<double> proton_xi1_pup; //right
      vector<double> proton_xi2_pup; //left
      vector<double> proton_double_xi1_pup; // double
      vector<double> proton_double_xi2_pup;


      for (int i_inter=0; i_inter<nb_pileup_inter; i_inter++)
	{
	  // Uniform draw
	  double uniform_draw = gRandom->Uniform(1);
	  h_uniform->Fill(uniform_draw);	


	  if(uniform_draw <= P_n) {}
	  else if(uniform_draw > P_n && uniform_draw <= P_sl){
            double xi2 = ximin*pow(ximax/ximin,gRandom->Uniform(1));
	    proton_xi2_pup.push_back(xi2);
	    h_xi2pileup->Fill(xi2);
	  } //left pile-up protons				     
	  else if(uniform_draw > P_sl &&  uniform_draw <= P_sr){
            double xi1 = ximin*pow(ximax/ximin,gRandom->Uniform(1));
	    proton_xi1_pup.push_back(xi1);
	    h_xi1pileup->Fill(xi1);
	  } //right pile-up protons
	  else if(uniform_draw > P_sr && uniform_draw <= P_d){
            double xi1=ximin*pow(ximax/ximin,gRandom->Uniform(1));
            double xi2=ximin*pow(ximax/ximin,gRandom->Uniform(1));
	    proton_double_xi1_pup.push_back(xi1);
            proton_double_xi2_pup.push_back(xi2);
	    h_xidoublepileup->Fill(xi1);
	    h_xidoublepileup->Fill(xi2);
	  } //double pile-up protons
	}

      int n_proton1_pu = proton_xi1_pup.size() + proton_double_xi1_pup.size();
      int n_proton2_pu = proton_xi2_pup.size() + proton_double_xi2_pup.size();
      h_nproton1_pu->Fill(n_proton1_pu);
      h_nproton2_pu->Fill(n_proton2_pu);

      bool pileup_comb = false;
      pileup_type pileup_comb_type = (proton1_xi != -1 && proton2_xi != -1) ? NOPU : INVALID;
      double e_cm_comb = (proton1_xi != -1 && proton2_xi != -1) ? sqrt(proton1_xi*proton2_xi)*ROOTS : 0. ;
      double y_comb = (proton1_xi != -1 && proton2_xi != -1) ? 0.5*TMath::Log(proton1_xi/proton2_xi) : 0.;

      if(proton1_xi != -1){
	for(size_t i = 0; i < proton_xi2_pup.size(); ++i){

	  double xi2 = proton_xi2_pup[i];

	  if( (xi2 < xi_min_sel) || (xi2 > xi_max_sel) ) continue;
 
	  ecm_pileup_left = sqrt(proton1_xi*xi2)*ROOTS;
	  double y_pp = 0.5*TMath::Log( proton1_xi/xi2 );  

	  if(ecm_pileup_left > e_cm_comb) { e_cm_comb = ecm_pileup_left; y_comb = y_pp; pileup_comb = true; pileup_comb_type = PULEFT;}
	}
	for(size_t i = 0; i < proton_double_xi2_pup.size(); ++i){

	  double xi2 = proton_double_xi2_pup[i];

	  if( (xi2 < xi_min_sel) || (xi2 > xi_max_sel) ) continue;

	  ecm_pileup_left = sqrt(proton1_xi*xi2)*ROOTS;
	  double y_pp = 0.5*TMath::Log( proton1_xi/xi2 );  

	  if(ecm_pileup_left > e_cm_comb) { e_cm_comb = ecm_pileup_left; y_comb = y_pp; pileup_comb = true; pileup_comb_type = PULEFT;}
	}
      }
      if(proton2_xi != -1){
	for(size_t i = 0; i < proton_xi1_pup.size(); ++i){

	  double xi1 = proton_xi1_pup[i];

	  if( (xi1 < xi_min_sel) || (xi1 > xi_max_sel) ) continue;

	  ecm_pileup_right = sqrt(proton2_xi*xi1)*ROOTS;
	  double y_pp = 0.5*TMath::Log( xi1/proton2_xi );  

	  if(ecm_pileup_right > e_cm_comb) { e_cm_comb = ecm_pileup_right; y_comb = y_pp; pileup_comb = true; pileup_comb_type = PURIGHT;}
	}
	for(size_t i = 0; i < proton_double_xi1_pup.size(); ++i){

	  double xi1 = proton_double_xi1_pup[i];

	  if( (xi1 < xi_min_sel) || (xi1 > xi_max_sel) ) continue;

	  ecm_pileup_right = sqrt(proton2_xi*xi1)*ROOTS;
	  double y_pp = 0.5*TMath::Log( xi1/proton2_xi );  

	  if(ecm_pileup_right > e_cm_comb) { e_cm_comb = ecm_pileup_right; y_comb = y_pp; pileup_comb = true; pileup_comb_type = PURIGHT;}
	}
      }

      for(size_t i = 0; i < proton_xi1_pup.size(); ++i){
	for(size_t j = 0; j < proton_xi2_pup.size(); ++j){
	  double xi1 = proton_xi1_pup[i];
	  double xi2 = proton_xi2_pup[j];

	  if( (xi1 < xi_min_sel) || (xi1 > xi_max_sel) ) continue;
	  if( (xi2 < xi_min_sel) || (xi2 > xi_max_sel) ) continue;

	  ecm_pileup_double = sqrt(xi1*xi2)*ROOTS;
	  double y_pp = 0.5*TMath::Log( xi1/xi2 ); 
 
	  if(ecm_pileup_double > e_cm_comb) { e_cm_comb = ecm_pileup_double; y_comb = y_pp; pileup_comb = true; pileup_comb_type = PULEFTRIGHT;}
	}
      }
      for(size_t i = 0; i < proton_xi1_pup.size(); ++i){
	for(size_t j = 0; j < proton_double_xi2_pup.size(); ++j){
	  double xi1 = proton_xi1_pup[i];
	  double xi2 = proton_double_xi2_pup[j];

	  if( (xi1 < xi_min_sel) || (xi1 > xi_max_sel) ) continue;
	  if( (xi2 < xi_min_sel) || (xi2 > xi_max_sel) ) continue;

	  ecm_pileup_double = sqrt(xi1*xi2)*ROOTS;
	  double y_pp = 0.5*TMath::Log( xi1/xi2 ); 
 
	  if(ecm_pileup_double > e_cm_comb) { e_cm_comb = ecm_pileup_double; y_comb = y_pp; pileup_comb = true; pileup_comb_type = PUDOUBLE;}
	}
      }
      for(size_t i = 0; i < proton_double_xi1_pup.size(); ++i){
	for(size_t j = 0; j < proton_xi2_pup.size(); ++j){
	  double xi1 = proton_double_xi1_pup[i];
	  double xi2 = proton_xi2_pup[j];

	  if( (xi1 < xi_min_sel) || (xi1 > xi_max_sel) ) continue;
	  if( (xi2 < xi_min_sel) || (xi2 > xi_max_sel) ) continue;

	  ecm_pileup_double = sqrt(xi1*xi2)*ROOTS;
	  double y_pp = 0.5*TMath::Log( xi1/xi2 ); 
 
	  if(ecm_pileup_double > e_cm_comb) { e_cm_comb = ecm_pileup_double; y_comb = y_pp; pileup_comb = true; pileup_comb_type = PUDOUBLE;}
	}
      }
      for(size_t i = 0; i < proton_double_xi1_pup.size(); ++i){
	for(size_t j = 0; j < proton_double_xi2_pup.size(); ++j){
	  double xi1 = proton_double_xi1_pup[i];
	  double xi2 = proton_double_xi2_pup[j];

	  if( (xi1 < xi_min_sel) || (xi1 > xi_max_sel) ) continue;
	  if( (xi2 < xi_min_sel) || (xi2 > xi_max_sel) ) continue;

	  ecm_pileup_double = sqrt(xi1*xi2)*ROOTS;
	  double y_pp = 0.5*TMath::Log( xi1/xi2 ); 
 
	  if(ecm_pileup_double > e_cm_comb) { e_cm_comb = ecm_pileup_double; y_comb = y_pp; pileup_comb = true; pileup_comb_type = PUDOUBLE;}
	}
      }
      //e_cm_comb *= gRandom->Gaus(1,0.02);  //smearing 2%
      //y_comb*= gRandom->Gaus(1,0.02);

      ++NZZ_sel_mass;
      //h_NZZ4lep->Fill(NZZ_sel_mass);
      // h_NZZ4lep->Fill(1);
      if(proton1_xi >0.15 || proton1_xi < 0.015) continue;
      if(proton2_xi >0.15 || proton2_xi < 0.015) continue;


	  mu_lead=mu_leading.Pt();
	  mu_sec=mu_second.Pt();
	  h_mu_leading_pt->Fill(mu_lead);			      
	  h_mu_second_pt->Fill( mu_sec);     

	  mu_lead_off=mu_leading_off.Pt();
	  mu_sec_off=mu_second_off.Pt();
	  h_mu_leading_off_pt->Fill(mu_lead_off);			      
	  h_mu_second_off_pt->Fill( mu_sec_off);     

	  e_lead=ele_leading.Pt();
	  e_sec=ele_second.Pt();
	  h_e_leading_pt->Fill(e_lead);			              
	  h_e_second_pt->Fill(e_sec);


	  e_lead_off=ele_leading_off.Pt();
	  e_sec_off=ele_second_off.Pt();
	  h_e_leading_off_pt->Fill(e_lead_off);			      
	  h_e_second_off_pt->Fill( e_sec_off);     



      if(pileup_comb_type != INVALID){
	switch(pileup_comb_type){
	case NOPU:
	  h_ecm_sig->Fill( e_cm_comb );
	  break;
	case PULEFT:
	  h_ecm_puleft->Fill( e_cm_comb );
	  break;
	case PURIGHT:
	  h_ecm_puright->Fill( e_cm_comb );  
	  break;
	case PULEFTRIGHT: 
	  h_ecm_puleftright->Fill( e_cm_comb );
	  break;
	case PUDOUBLE: 
	  h_ecm_pudouble->Fill( e_cm_comb );
	  break;
	default:
	  cout << "ERROR: Invalid pile-up combination." << endl;
	  continue;
	}          
      }       




     
      h_ZZ_M->Fill(M_ZZ);
      h_ZZ_pT->Fill(pT_ZZ);
      h_ZZ_Eta->Fill(Eta_ZZ);
      h_ZZ_Phi->Fill(Phi_ZZ);
      h_ZZ_PhivsEta->Fill(Eta_ZZ,Phi_ZZ);
      h_ZZ_Y->Fill(Y_ZZ);
      h_ZZ_pTvsM->Fill(M_ZZ,pT_ZZ);
      Zmass_scatter->Fill(Z_on.M(),Z_off.M());      
      ratio_mzzsum = M_ZZ/e_cm_comb;
      dY4lp=y_comb-Y_ZZ;   //Y_pp-Y_ZZ  Signal
      h_ecm_sum->Fill(e_cm_comb);
	
     
      h_dY4lp->Fill(dY4lp);        		      
      h_ratiomzzsum->Fill(ratio_mzzsum);                   	  


      //==========================================================================
      //Only pileup combination      	 
      //================================================================
      if(pileup_comb_type != INVALID){
	switch(pileup_comb_type){
	case NOPU:
	  h_dY4lp_signal->Fill(dY4lp);        		      
	  h_ratio_signal->Fill(M_ZZ/e_cm_comb);
	  if(ZZuu != 0){
	    ++ZZ4u_sel_mass;
	    h_NZZ4mu->Fill(0);
	    h_ZZ_M_4u->Fill(M_ZZ);
	    h_ZZ_pT_4u->Fill(pT_ZZ);
	    h_ZZ_Eta_4u->Fill(Eta_ZZ);
	    h_ZZ_Phi_4u->Fill(Phi_ZZ);
	    h_ZZ_Y_4u->Fill(Y_ZZ);
	    double ratio_4mu_mass = M_ZZ/e_cm_comb;
	    h_ratio4mumass->Fill(ratio_4mu_mass);
	    if( e_cm_comb < 600 ) continue;
	    h_NZZ4mu->Fill(1);
	    h_ratio4mumass_m600->Fill(ratio_4mu_mass);	
	    if(ratio_4mu_mass < 0.9 ||  ratio_4mu_mass > 1.1 ) continue;      
	    h_ratio4mumass_sel->Fill(ratio_4mu_mass);	
	    h_NZZ4mu->Fill(2);
	    if( dY4lp < -0.04 || dY4lp > 0.04 ) continue;   
	    h_ratio4mumass_rap->Fill(ratio_4mu_mass);
	    h_NZZ4mu->Fill(3);
	  } else if(ZZee != 0){
	    ++ZZ4e_sel_mass;
	    h_NZZ4e->Fill(0);
	    h_ZZ_M_4e->Fill(M_ZZ);
	    h_ZZ_pT_4e->Fill(pT_ZZ);
	    h_ZZ_Eta_4e->Fill(Eta_ZZ);
	    h_ZZ_Phi_4e->Fill(Phi_ZZ);
	    h_ZZ_Y_4e->Fill(Y_ZZ);
	    double ratio_4e_mass = M_ZZ/e_cm_comb;
	    h_ratio4emass->Fill(ratio_4e_mass);
	    if( e_cm_comb < 600 ) continue;
	    h_ratio4emass_m600->Fill(ratio_4e_mass);	
	    h_NZZ4e->Fill(1);
	    if(ratio_4e_mass < 0.9 ||  ratio_4e_mass > 1.1 ) continue;      
	    h_ratio4emass_sel->Fill(ratio_4e_mass);	
	    h_NZZ4e->Fill(2);
	    if( dY4lp < -0.04 || dY4lp > 0.04 ) continue;   
	    h_ratio4emass_rap->Fill(ratio_4e_mass);	
	    h_NZZ4e->Fill(3);
	  } else if(ZZue != 0 || ZZeu != 0){
	    ++ZZ2u2e_sel_mass;
	    h_NZZ2e2mu->Fill(0);
	    h_ZZ_M_eu->Fill(M_ZZ);
	    h_ZZ_pT_eu->Fill(pT_ZZ);
	    h_ZZ_Eta_eu->Fill(Eta_ZZ);
	    h_ZZ_Phi_eu->Fill(Phi_ZZ);
	    h_ZZ_Y_eu->Fill(Y_ZZ);
	    double ratio_2e2mu_mass = M_ZZ/ e_cm_comb;
	    h_ratio2e2mumass->Fill(ratio_2e2mu_mass);
	    if( e_cm_comb < 600 ) continue;
	    h_NZZ2e2mu->Fill(1);
	    h_ratio2e2mumass_m600->Fill(ratio_2e2mu_mass);	
	    if(ratio_2e2mu_mass < 0.9 ||  ratio_2e2mu_mass > 1.1 ) continue;      
	    h_NZZ2e2mu->Fill(2);
	    h_ratio2e2mumass_sel->Fill(ratio_2e2mu_mass);	
	    if( dY4lp < -0.04 || dY4lp > 0.04 ) continue;   
	    h_ratio2e2mumass_rap->Fill(ratio_2e2mu_mass);
	    h_NZZ2e2mu->Fill(3);
	  }
	  
	  break;
	case PULEFT: 
	case PURIGHT:
	case PULEFTRIGHT:
	case PUDOUBLE:
	  if(ZZuu != 0){
	    h_NZZ4mulep->Fill(0);
 	    h_ratiomzzsum_4mu->Fill(ratio_mzzsum);                   	  
	    if(e_cm_comb < 600) continue;
	    h_NZZ4mulep->Fill(1);
	    h_ratiomzzsum_4mu_m600->Fill(ratio_mzzsum);                   	  
	    if(ratio_mzzsum < 0.9 ||  ratio_mzzsum > 1.1 ) continue;      
	    h_ratiomzzsum_4mu_sel->Fill(ratio_mzzsum);                   	  
	    h_NZZ4mulep->Fill(2);
	    if( dY4lp < -0.04 || dY4lp > 0.04 ) continue;   
	    h_ratiomzzsum_4mu_rap->Fill(ratio_mzzsum);                   	  
	    h_NZZ4mulep->Fill(3);
	 
 }
      else if (ZZee != 0){
	h_NZZ4elep->Fill(0);
	h_ratiomzzsum_4e->Fill(ratio_mzzsum);                   	  
	if(e_cm_comb < 600) continue;
	h_NZZ4elep->Fill(1);
	h_ratiomzzsum_4e_m600->Fill(ratio_mzzsum);                   	  
	if(ratio_mzzsum < 0.9 ||  ratio_mzzsum > 1.1 ) continue;      
	h_ratiomzzsum_4e_sel->Fill(ratio_mzzsum);                   	  
	h_NZZ4elep->Fill(2);
	if( dY4lp < -0.04 || dY4lp > 0.04 ) continue;   
	h_ratiomzzsum_4e_rap->Fill(ratio_mzzsum);                   	        
	h_NZZ4elep->Fill(3);

      }
      else if(ZZue != 0 || ZZeu != 0 ){
	h_NZZ2e2mulep->Fill(0);
	h_ratiomzzsum_2e2mu->Fill(ratio_mzzsum);                   	  
	if(e_cm_comb < 600) continue;
	h_ratiomzzsum_2e2mu_m600->Fill(ratio_mzzsum);                   	  
	h_NZZ2e2mulep->Fill(1);
        if(ratio_mzzsum < 0.9 ||  ratio_mzzsum > 1.1 ) continue;      
	h_ratiomzzsum_2e2mu_sel->Fill(ratio_mzzsum);
	h_NZZ2e2mulep->Fill(2);
	if( dY4lp < -0.04 || dY4lp > 0.04 ) continue;   
	h_ratiomzzsum_2e2mu_rap->Fill(ratio_mzzsum);                   	                     	  
	h_NZZ2e2mulep->Fill(3);
     
 }
	  break;
	default:
          cout << "ERROR: Invalid pile-up combination." << endl;
          continue;
	}
      }      
      //=======================================================================
		          


      //       if( mu_lead < 20 ||  e_lead < 20) continue;

      /*
      if(pileup_comb_type != INVALID){
	switch(pileup_comb_type){
	case NOPU:
	  h_dY4lp_signal->Fill(dY4lp);        		      
	  h_ratio_signal->Fill(M_ZZ/e_cm_comb);
	  if(ZZuu != 0){
	    ++ZZ4u_sel_mass;
	    h_NZZ4mu->Fill(0);
	    h_ZZ_M_4u->Fill(M_ZZ);
	    h_ZZ_pT_4u->Fill(pT_ZZ);
	    h_ZZ_Eta_4u->Fill(Eta_ZZ);
	    h_ZZ_Phi_4u->Fill(Phi_ZZ);
	    h_ZZ_Y_4u->Fill(Y_ZZ);
	    double ratio_4mu_mass = M_ZZ/e_cm_comb;
	    h_ratio4mumass->Fill(ratio_4mu_mass);
	    if( e_cm_comb < 600 ) continue;
	    h_ratio4mumass_m600->Fill(ratio_4mu_mass);	
	    if(ratio_4mu_mass < 0.9 ||  ratio_4mu_mass > 1.1 ) continue;      
	    h_ratio4mumass_sel->Fill(ratio_4mu_mass);	
	    if( dY4lp < -0.04 || dY4lp > 0.04 ) continue;   
	    h_ratio4mumass_rap->Fill(ratio_4mu_mass);
	  } else if(ZZee != 0){
	    ++ZZ4e_sel_mass;
	    h_NZZ4e->Fill(0);
	    h_ZZ_M_4e->Fill(M_ZZ);
	    h_ZZ_pT_4e->Fill(pT_ZZ);
	    h_ZZ_Eta_4e->Fill(Eta_ZZ);
	    h_ZZ_Phi_4e->Fill(Phi_ZZ);
	    h_ZZ_Y_4e->Fill(Y_ZZ);
	    double ratio_4e_mass = M_ZZ/e_cm_comb;
	    h_ratio4emass->Fill(ratio_4e_mass);
	    if( e_cm_comb < 600 ) continue;
	    h_ratio4emass_m600->Fill(ratio_4e_mass);	
	    if(ratio_4e_mass < 0.9 ||  ratio_4e_mass > 1.1 ) continue;      
	    h_ratio4emass_sel->Fill(ratio_4e_mass);	
	    if( dY4lp < -0.04 || dY4lp > 0.04 ) continue;   
	    h_ratio4emass_rap->Fill(ratio_4e_mass);	
	  } else if(ZZue != 0 || ZZeu != 0){
	    ++ZZ2u2e_sel_mass;
	    h_NZZ2e2mu->Fill(0);
	    h_ZZ_M_eu->Fill(M_ZZ);
	    h_ZZ_pT_eu->Fill(pT_ZZ);
	    h_ZZ_Eta_eu->Fill(Eta_ZZ);
	    h_ZZ_Phi_eu->Fill(Phi_ZZ);
	    h_ZZ_Y_eu->Fill(Y_ZZ);
	    double ratio_2e2mu_mass = M_ZZ/ e_cm_comb;
	    h_ratio2e2mumass->Fill(ratio_2e2mu_mass);
	    if( e_cm_comb < 600 ) continue;
	    h_ratio2e2mumass_m600->Fill(ratio_2e2mu_mass);	
	    if(ratio_2e2mu_mass < 0.9 ||  ratio_2e2mu_mass > 1.1 ) continue;      
	    h_ratio2e2mumass_sel->Fill(ratio_2e2mu_mass);	
	    if( dY4lp < -0.04 || dY4lp > 0.04 ) continue;   
	    h_ratio2e2mumass_rap->Fill(ratio_2e2mu_mass);
	  }
	  
	  break;
	case PULEFT:
	  h_ratio1->Fill( M_ZZ/e_cm_comb );
	  break;
	case PURIGHT:  
	  h_ratio2->Fill( M_ZZ/e_cm_comb );
	  break;
	case PULEFTRIGHT: 
	  h_ratio3->Fill( M_ZZ/e_cm_comb );
	  break;
	case PUDOUBLE: 
	  break;
	default:
	  cout << "ERROR: Invalid pile-up combination." << endl;
	  continue;
	}
      }

      */


      //====================================
      h_Np_left->Fill(proton_xi1_pup.size());
      h_Np_right->Fill(proton_xi2_pup.size());

      h_proton_eta->Fill(Y_pp);      	  
      h_proton2_xi->Fill(proton2_xi);  
      h_proton1_xi->Fill(proton1_xi);
      /*
	if(ZZuu != 0){
	++ZZ4u_sel_mass;
	h_ZZ_M_4u->Fill(M_ZZ);
	h_ZZ_pT_4u->Fill(pT_ZZ);
	h_ZZ_Eta_4u->Fill(Eta_ZZ);
	h_ZZ_Phi_4u->Fill(Phi_ZZ);
	h_ZZ_Y_4u->Fill(Y_ZZ);
	double ratio_4mu_mass = M_ZZ/e_cm_comb;

	h_ratio4mumass->Fill(ratio_4mu_mass);
	} else if(ZZee != 0){
	++ZZ4e_sel_mass;
	h_ZZ_M_4e->Fill(M_ZZ);
	h_ZZ_pT_4e->Fill(pT_ZZ);
	h_ZZ_Eta_4e->Fill(Eta_ZZ);
	h_ZZ_Phi_4e->Fill(Phi_ZZ);
	h_ZZ_Y_4e->Fill(Y_ZZ);
	double ratio_4e_mass = M_ZZ/e_cm_comb;

	h_ratio4emass->Fill(ratio_4e_mass);
	} else if(ZZue != 0 || ZZeu != 0){
	++ZZ2u2e_sel_mass;
	h_ZZ_M_eu->Fill(M_ZZ);
	h_ZZ_pT_eu->Fill(pT_ZZ);
	h_ZZ_Eta_eu->Fill(Eta_ZZ);
	h_ZZ_Phi_eu->Fill(Phi_ZZ);
	h_ZZ_Y_eu->Fill(Y_ZZ);
	double ratio_2e2mu_mass = M_ZZ/ e_cm_comb;

	h_ratio2e2mumass->Fill(ratio_2e2mu_mass);
	}
      */ // funciona, fazer para sel dos canais separados, fazer nos protons fazer plots de smearing, de todos os canais separados, contagem de eventos com 1.5% e 3% 
      //qumentar a estatistica com mais 2 milhoes de eventos refazer apenas com valores 10 e  15 X 10-6 Gev-2

 		      
      //======================================================
      
      //      h_e_second_pt_m600->Fill(ele_second.Pt());
      //h_mu_second_pt_m600->Fill(mu_second.Pt());          
      
     
      //      if( mu_lead < 20.0 || e_lead < 20.0) continue;
      
      if(e_cm_comb < 600 ) continue;
      h_mu_leading_pt_m600->Fill(mu_lead);			                     	      
      h_e_leading_pt_m600->Fill(e_lead);				  

      if(ratio_mzzsum < 0.9 && ratio_mzzsum > 1.1 )continue;      

      if( dY4lp < -0.04 && dY4lp > 0.04 )continue;      

 
      
    } //End of ZZ analysis
     
  }//entries  
  
  				     
  cout << "Number of entries analyzed: " << n_events << endl; 
  cout << "----------------------------------------------------------------------------" << endl;
  cout << "ZZ4u= " << ZZ4u << "  |ZZ4e= " << ZZ4e << "  |ZZ2u2e= " << ZZ2u2e << endl;
  cout << "NZZ= " << NZZ << endl;

  cout << "ZZ Gen 4u= " << ZZgen4u << "  | ZZ Gen 4e= " << ZZgen4e << "  | ZZ Gen 2u2e= " << ZZgen2u2e << "  | ZZ Gen X = " << ZZgenX << endl;

  TString extension, name, path;
  extension = ".root";
  name = "aazz_a0zp10lumi100_pu2x_13tev";
  path = "/media/daniel/11eb5a4b-2239-4ba5-9d71-965f47b8b84c/Analise_xicerto_ZZ/";
  TFile f(path+name+extension,"RECREATE");
   
  //==========================================================================
  int L_int = 100;
  //Double_t sigma_zz acz 5= 0.002 ,  acz 10= 0.009 ,  acz 20= 0.035 ;

  //Double_t sigma_zz a0z 5=6.74; a0zp10=27 ppzz 10200 a0zp15=61.5  0<xi<1
 
 //Double_t sigma_zz a0z5 acz5 = 10.65  ,   Xs*br= 0.047     

  //Double_t sigma_zz a0z10 acz20 = 62.2   , Xs*br = 0.2799   


  Double_t sigma_zz =27;
  Double_t eff_presel = 172035./500000; // signal todos os eventos 
  //presel 100 por cento
  //Double_t eff_presel = 1; 
  int N_zz =n_events;  //3000000    
  Double_t scale1 = (sigma_zz * eff_presel * L_int)/(N_zz);  
  //Double_t scale = norm/n_events;

  hPtEle->Scale(scale1);
  hEtaEle->Scale(scale1);
  hPhiEle->Scale(scale1);
  hPtMu->Scale(scale1);
  hEtaMu->Scale(scale1);
  hPhiMu->Scale(scale1);
  hmassEle->Scale(scale1);
  hmassMu->Scale(scale1);

  hVtz->Scale(scale1);
  hVtxDiffZ->Scale(scale1);
   
  hExtratracks1mm->Scale(scale1);
  hExtratracks2mm->Scale(scale1);
  hExtratracks5mm->Scale(scale1);
  hExtratracks1cm->Scale(scale1);

  h_ee->Scale(scale1);
  h_uu->Scale(scale1);
  h_Z1ee->Scale(scale1);
  h_Z2ee->Scale(scale1);
  h_Z1uu->Scale(scale1);
  h_Z2uu->Scale(scale1);
  h_Z1->Scale(scale1);
  h_Z2->Scale(scale1);
  Zmass_scatter->Scale(scale1);
   
  h_ZZ_M_4u->Scale(scale1);
  h_ZZ_M_4e->Scale(scale1);
  h_ZZ_M_eu->Scale(scale1);
  h_ZZ_M->Scale(scale1);
  h_ZZ_M_signal->Scale(scale1);
  h_ZZ_pT_4u->Scale(scale1);
  h_ZZ_pT_4e->Scale(scale1);
  h_ZZ_pT_eu->Scale(scale1);
  h_ZZ_pT->Scale(scale1);
  h_ZZ_pT_signal->Scale(scale1);
  h_ZZ_Eta_4u->Scale(scale1);
  h_ZZ_Eta_4e->Scale(scale1);
  h_ZZ_Eta_eu->Scale(scale1);
  h_ZZ_Eta->Scale(scale1);
  h_ZZ_Phi_4u->Scale(scale1);
  h_ZZ_Phi_4e->Scale(scale1);
  h_ZZ_Phi_eu->Scale(scale1);
  h_ZZ_Phi->Scale(scale1);
  h_ZZ_Y_4u->Scale(scale1);
  h_ZZ_Y_4e->Scale(scale1);
  h_ZZ_Y_eu->Scale(scale1);
  h_ZZ_Y->Scale(scale1);
  h_ZZ_pTvsM->Scale(scale1);
  h_ZZ_PhivsEta->Scale(scale1);

  //===================================================================
  h_nproton->Scale(scale1);
  h_nproton1->Scale(scale1);
  h_nproton2->Scale(scale1);
  h_nproton1_pu->Scale(scale1);
  h_nproton2_pu->Scale(scale1);
  h_proton_px->Scale(scale1);
  h_proton_py->Scale(scale1);
  h_proton_pz->Scale(scale1);
  h_proton_pt->Scale(scale1);
  h_proton_eta->Scale(scale1);
  h_proton1_xi->Scale(scale1);
  h_proton2_xi->Scale(scale1);
  h_dY4lp->Scale(scale1);
  h_dY4lp_signal->Scale(scale1);
  h_ecm_sum->Scale(scale1);
  h_ecm_sig->Scale(scale1);
  h_ecm_puleft->Scale(scale1);
  h_ecm_puright->Scale(scale1);
  h_ecm_puleftright->Scale(scale1);
  h_ecm_pudouble->Scale(scale1);
  h_proton_energy->Scale(scale1);
  h_ratio4mumass->Scale(scale1);
  h_ratio4mumass_m600->Scale(scale1);
  h_ratio4mumass_sel->Scale(scale1);
  h_ratio4mumass_rap->Scale(scale1);
  h_ratio4emass->Scale(scale1);
  h_ratio4emass_m600->Scale(scale1);
  h_ratio4emass_sel->Scale(scale1);
  h_ratio4emass_rap->Scale(scale1);
  h_ratio2e2mumass->Scale(scale1);
  h_ratio2e2mumass_m600->Scale(scale1);
  h_ratio2e2mumass_sel->Scale(scale1);
  h_ratio2e2mumass_rap->Scale(scale1);

  h_ratiomzzsum->Scale(scale1); 
  h_ratiomzzsum_4mu->Scale(scale1); 
  h_ratiomzzsum_4e->Scale(scale1); 
  h_ratiomzzsum_2e2mu->Scale(scale1); 

  h_ratiomzzsum_4mu_m600->Scale(scale1); 
  h_ratiomzzsum_4e_m600->Scale(scale1); 
  h_ratiomzzsum_2e2mu_m600->Scale(scale1); 

  h_ratiomzzsum_4mu_sel->Scale(scale1); 
  h_ratiomzzsum_4e_sel->Scale(scale1); 
  h_ratiomzzsum_2e2mu_sel->Scale(scale1); 

  h_ratiomzzsum_4mu_rap->Scale(scale1); 
  h_ratiomzzsum_4e_rap->Scale(scale1); 
  h_ratiomzzsum_2e2mu_rap->Scale(scale1); 


  h_pileup->Scale(scale1);
  h_uniform->Scale(scale1);
  h_xi1pileup->Scale(scale1);
  h_xi2pileup->Scale(scale1);
  h_xidoublepileup->Scale(scale1);
  h_Np_left->Scale(scale1);
  h_Np_right->Scale(scale1);
  h_ratio1->Scale(scale1);
  h_ratio2->Scale(scale1);
  h_ratio3->Scale(scale1);

  h_ratio_signal->Scale(scale1);


  h_e_leading_pt->Scale(scale1);
  h_e_second_pt->Scale(scale1);
  h_e_leading_off_pt->Scale(scale1);
  h_e_second_off_pt->Scale(scale1);

  h_mu_leading_pt->Scale(scale1);
  h_mu_second_pt->Scale(scale1);
  h_mu_leading_off_pt->Scale(scale1);
  h_mu_second_off_pt->Scale(scale1);



  h_e_leading_pt_m600->Scale(scale1);
  h_e_second_pt_m600->Scale(scale1);
  h_mu_leading_pt_m600->Scale(scale1);
  h_mu_second_pt_m600->Scale(scale1);

  h_NZZ4lep->Scale(scale1);

  h_NZZ4elep->Scale(scale1);
  h_NZZ4mulep->Scale(scale1);
  h_NZZ2e2mulep->Scale(scale1);


  h_NZZ4mu->Scale(scale1);
  h_NZZ4e->Scale(scale1);
  h_NZZ2e2mu->Scale(scale1);


  h_massx_smear1->Scale(scale1);
  h_massx_smear2->Scale(scale1);

  h_dmass_dif_smear1->Scale(scale1);
  h_dmass_dif_smear2->Scale(scale1);


  h_dxi1_dif_smear1->Scale(scale1);
  h_dxi1_dif_smear2->Scale(scale1);

  h_dypp_dif_smear1->Scale(scale1);
  h_dypp_dif_smear2->Scale(scale1);


  
  //========================================================================



  hEtaEle->Write();
  hPhiEle->Write();
  hPtMu->Write();
  hEtaMu->Write();
  hPhiMu->Write();
  hmassEle->Write();
  hmassMu->Write();

  hVtz->Write();
  hVtxDiffZ->Write();
   
  hExtratracks1mm->Write();
  hExtratracks2mm->Write();
  hExtratracks5mm->Write();
  hExtratracks1cm->Write();

  h_ee->Write();
  h_uu->Write();
  h_Z1ee->Write();
  h_Z2ee->Write();
  h_Z1uu->Write();
  h_Z2uu->Write();
  h_Z1->Write();
  h_Z2->Write();
  Zmass_scatter->Write();
   
  h_ZZ_M_4u->Write();
  h_ZZ_M_4e->Write();
  h_ZZ_M_eu->Write();
  h_ZZ_M->Write();
  h_ZZ_M_signal->Write();
  h_ZZ_pT_4u->Write();
  h_ZZ_pT_4e->Write();
  h_ZZ_pT_eu->Write();
  h_ZZ_pT->Write();
  h_ZZ_pT_signal->Write();
  h_ZZ_Eta_4u->Write();
  h_ZZ_Eta_4e->Write();
  h_ZZ_Eta_eu->Write();
  h_ZZ_Eta->Write();
  h_ZZ_Phi_4u->Write();
  h_ZZ_Phi_4e->Write();
  h_ZZ_Phi_eu->Write();
  h_ZZ_Phi->Write();
  h_ZZ_Y_4u->Write();
  h_ZZ_Y_4e->Write();
  h_ZZ_Y_eu->Write();
  h_ZZ_Y->Write();
  h_ZZ_pTvsM->Write();
  h_ZZ_PhivsEta->Write();
  h_dY4lp->Write();
  h_dY4lp_signal->Write();
   
  h_nproton->Write();
  h_nproton1->Write();
  h_nproton2->Write();
  h_nproton1_pu->Write();
  h_nproton2_pu->Write();
  h_proton_px->Write();
  h_proton_py->Write();
  h_proton_pz->Write();
  h_proton_pt->Write();
  h_proton_eta->Write();
  h_proton1_xi->Write();
  h_proton2_xi->Write();
  h_ecm_sum->Write();
  h_ecm_sig->Write();
  h_ecm_puleft->Write();
  h_ecm_puright->Write();
  h_ecm_pudouble->Write();
  h_proton_energy->Write();
  h_ratio4emass->Write();
  h_ratio4emass_m600->Write();
  h_ratio4emass_sel->Write();
  h_ratio4emass_rap->Write();
  h_ratio4mumass->Write();
  h_ratio4mumass_m600->Write(); 
  h_ratio4mumass_sel->Write();
  h_ratio4mumass_rap->Write();
  h_ratio2e2mumass->Write();
  h_ratio2e2mumass_m600->Write();
  h_ratio2e2mumass_sel->Write();
  h_ratio2e2mumass_rap->Write();
  h_ratiomzzsum->Write();
  h_ratiomzzsum_4mu->Write();
  h_ratiomzzsum_4e->Write();
  h_ratiomzzsum_2e2mu->Write();

  h_ratiomzzsum_4mu_m600->Write();
  h_ratiomzzsum_4e_m600->Write();
  h_ratiomzzsum_2e2mu_m600->Write();

  h_ratiomzzsum_4mu_sel->Write();
  h_ratiomzzsum_4e_sel->Write();
  h_ratiomzzsum_2e2mu_sel->Write();

  h_ratiomzzsum_4mu_rap->Write();
  h_ratiomzzsum_4e_rap->Write();
  h_ratiomzzsum_2e2mu_rap->Write();



  h_ratio1->Write();
  h_ratio2->Write();
  h_ratio3->Write();
  h_ratio_signal->Write();
  h_pileup->Write();

  h_uniform->Write();
  h_Np_left->Write();
  h_Np_right->Write();
  h_xi1pileup->Write();
  h_xi2pileup->Write();
  h_xidoublepileup->Write();


  h_e_leading_pt->Write();
  h_e_second_pt->Write();
  h_e_leading_off_pt->Write();
  h_e_second_off_pt->Write();


  h_mu_leading_pt->Write();
  h_mu_second_pt->Write();
  h_mu_leading_off_pt->Write();
  h_mu_second_off_pt->Write();


  
  h_e_leading_pt_m600->Write();
  h_e_second_pt_m600->Write();
  h_mu_leading_pt_m600->Write();
  h_mu_second_pt_m600->Write();

  h_NZZ4lep->Write();
  h_NZZ4elep->Write();
  h_NZZ4mulep->Write();
  h_NZZ2e2mulep->Write();


  h_NZZ4mu->Write();
  h_NZZ4e->Write();
  h_NZZ2e2mu->Write();
  

  h_massx_smear1->Write();
  h_massx_smear2->Write();

  h_dmass_dif_smear1->Write();
  h_dmass_dif_smear2->Write();

  h_dxi1_dif_smear1->Write();
  h_dxi1_dif_smear2->Write();

  h_dypp_dif_smear1->Write();
  h_dypp_dif_smear2->Write();




  f.Close();

  //----------------- Information saved in txt --------------------
  time_t date;
  struct tm* timeinfo;
  time(&date);
  timeinfo = localtime(&date);
   
  FILE* ZZ_analysis; 
  ZZ_analysis = fopen ("out_ZZ_analysis.txt","a"); 
  fprintf(ZZ_analysis,"%s\n\n","================================================================================================================================");
  fprintf(ZZ_analysis,"%s","ZZ -> 4l analysis\n");
  fprintf(ZZ_analysis,"%s\n","--------------------------------------------------------------------------------------------------------------------------------");
  fprintf(ZZ_analysis,"%s",asctime(timeinfo));
  fprintf(ZZ_analysis,"%s\n","--------------------------------------------------------------------------------------------------------------------------------");
  fprintf(ZZ_analysis,"%s","No smearing\n");
  fprintf(ZZ_analysis,"%s\n","------------------------------------------------------------------------------------------------------------------");
  fprintf(ZZ_analysis,"%s\t\t %d\n","N events:           ",n_events);
  fprintf(ZZ_analysis,"%s\t\t %d\n","ZZ4u:               ",ZZ4u);
  fprintf(ZZ_analysis,"%s\t\t %d\n","ZZ4e:               ",ZZ4e);
  fprintf(ZZ_analysis,"%s\t\t %d\n","ZZ2u2e:             ",ZZ2u2e);
  fprintf(ZZ_analysis,"%s\t\t %d\n","NZZ:                ",NZZ);
  fprintf(ZZ_analysis,"%s\t\t %d\n","ZZ4u_sel_mass:      ",ZZ4u_sel_mass);
  fprintf(ZZ_analysis,"%s\t\t %d\n","ZZ4e_sel_mass:      ",ZZ4e_sel_mass); 
  fprintf(ZZ_analysis,"%s\t\t %d\n","ZZ2u2e_sel_mass:    ",ZZ2u2e_sel_mass); 
  fprintf(ZZ_analysis,"%s\t\t %d\n","NZZ_sel_mass:       ",NZZ_sel_mass);  
  fprintf(ZZ_analysis,"%s\n\n","================================================================================================================================");
  fprintf(ZZ_analysis,"%s\t\t %d\n","After cut on pt(mu1,e1) >20 GeV leptons: ",lep_selection1);
  fprintf(ZZ_analysis,"%s\t\t %d\n","After cut on pt(mu2,e2) >20 GeV leptons:",lep_selection2);
  fprintf(ZZ_analysis,"%s\t\t %d\n","After cut on pt(mu3,e3) >20 GeV leptons: ",lep_selection3);
  fprintf(ZZ_analysis,"%s\t\t %d\n","After cut on pt(mu4,e4) >20 GeV leptons:",lep_selection4);
  fprintf(ZZ_analysis,"%s\t\t %d\n","After cut on mx > 600 GeV:          ",massx_selection);
  fprintf(ZZ_analysis,"%s\t\t %d\n","After cut on  0.9 < ratio <1.1:   ",ratio_selection);
  fprintf(ZZ_analysis,"%s\t\t %d\n","After cut on  0.04 < drap <0.04:    ",drap_selection);
  //  fprintf(ZZ_analysis,"%s\t\t %d\n","proton:",proton_final);  
  fprintf(ZZ_analysis,"%s\n\n","================================================================================================================================");
  fprintf(ZZ_analysis,"%s\n","");
  fclose(ZZ_analysis);
  //--------------------------------------------------------------------------

  cout << "ROOT file created: " << path+name+extension << endl;       
  cout << "____________________________________________________________________________" << endl;
  cout << "============================================================================\n" << endl;
  				     
}


















