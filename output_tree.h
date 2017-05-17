//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Apr 18 16:42:47 2016 by ROOT version 6.04/02
// from TTree output_tree/Tree
// found on file: aazz_a0zp10noff_13tev.root
//////////////////////////////////////////////////////////

#ifndef output_tree_h
#define output_tree_h

#include <TStyle.h>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TRandom.h>

// Header file for the classes stored in the TTree if any.

class output_tree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           isZZee;
   Int_t           isZZuu;
   Int_t           isZZeu;
   Int_t           isZZue;
   Double_t        Z_on_px;
   Double_t        Z_on_py;
   Double_t        Z_on_pz;
   Double_t        Z_on_energy;
   Double_t        Z_off_px;
   Double_t        Z_off_py;
   Double_t        Z_off_pz;
   Double_t        Z_off_energy;
   Int_t           n_decay_on;
   Double_t        Z_on_decay_px[2];   //[n_decay_on]
   Double_t        Z_on_decay_py[2];   //[n_decay_on]
   Double_t        Z_on_decay_pz[2];   //[n_decay_on]
   Double_t        Z_on_decay_energy[2];   //[n_decay_on]
   Int_t           n_decay_off;
   Double_t        Z_off_decay_px[2];   //[n_decay_off]
   Double_t        Z_off_decay_py[2];   //[n_decay_off]
   Double_t        Z_off_decay_pz[2];   //[n_decay_off]
   Double_t        Z_off_decay_energy[2];   //[n_decay_off]

   // List of branches
   TBranch        *b_isZZee;   //!
   TBranch        *b_isZZuu;   //!
   TBranch        *b_isZZeu;   //!
   TBranch        *b_isZZue;   //!
   TBranch        *b_Z_on_px;   //!
   TBranch        *b_Z_on_py;   //!
   TBranch        *b_Z_on_pz;   //!
   TBranch        *b_Z_on_energy;   //!
   TBranch        *b_Z_off_px;   //!
   TBranch        *b_Z_off_py;   //!
   TBranch        *b_Z_off_pz;   //!
   TBranch        *b_Z_off_energy;   //!
   TBranch        *b_n_decay_on;   //!
   TBranch        *b_Z_on_decay_px;   //!
   TBranch        *b_Z_on_decay_py;   //!
   TBranch        *b_Z_on_decay_pz;   //!
   TBranch        *b_Z_on_decay_energy;   //!
   TBranch        *b_n_decay_off;   //!
   TBranch        *b_Z_off_decay_px;   //!
   TBranch        *b_Z_off_decay_py;   //!
   TBranch        *b_Z_off_decay_pz;   //!
   TBranch        *b_Z_off_decay_energy;   //!

   output_tree(TTree *tree=0);
   virtual ~output_tree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   static Double_t  func_xi(Double_t* x , Double_t* par);
   double           generate_xi(TRandom&,double,double);
   double           generate_xi_MC(TRandom&,double,double,double);
   void             test_generate_xi_MC(TRandom&,double,double,double);
};

#endif

#ifdef output_tree_cxx
output_tree::output_tree(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject(".root");
      if (!f || !f->IsOpen()) {
	//f = new TFile("ppzz_lumi100_13tev.root");
	 f = new TFile("ppzz_lumi100_pu2x_13tev.root");

      }
      f->GetObject("Output_tree",tree);

   }
   Init(tree);

   gStyle->SetOptStat(111111111);
}

output_tree::~output_tree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t output_tree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t output_tree::LoadTree(Long64_t entry)
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

void output_tree::Init(TTree *tree)
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

   fChain->SetBranchAddress("isZZee", &isZZee, &b_isZZee);
   fChain->SetBranchAddress("isZZuu", &isZZuu, &b_isZZuu);
   fChain->SetBranchAddress("isZZeu", &isZZeu, &b_isZZeu);
   fChain->SetBranchAddress("isZZue", &isZZue, &b_isZZue);
   fChain->SetBranchAddress("Z_on_px", &Z_on_px, &b_Z_on_px);
   fChain->SetBranchAddress("Z_on_py", &Z_on_py, &b_Z_on_py);
   fChain->SetBranchAddress("Z_on_pz", &Z_on_pz, &b_Z_on_pz);
   fChain->SetBranchAddress("Z_on_energy", &Z_on_energy, &b_Z_on_energy);
   fChain->SetBranchAddress("Z_off_px", &Z_off_px, &b_Z_off_px);
   fChain->SetBranchAddress("Z_off_py", &Z_off_py, &b_Z_off_py);
   fChain->SetBranchAddress("Z_off_pz", &Z_off_pz, &b_Z_off_pz);
   fChain->SetBranchAddress("Z_off_energy", &Z_off_energy, &b_Z_off_energy);
   fChain->SetBranchAddress("n_decay_on", &n_decay_on, &b_n_decay_on);
   fChain->SetBranchAddress("Z_on_decay_px", Z_on_decay_px, &b_Z_on_decay_px);
   fChain->SetBranchAddress("Z_on_decay_py", Z_on_decay_py, &b_Z_on_decay_py);
   fChain->SetBranchAddress("Z_on_decay_pz", Z_on_decay_pz, &b_Z_on_decay_pz);
   fChain->SetBranchAddress("Z_on_decay_energy", Z_on_decay_energy, &b_Z_on_decay_energy);
   fChain->SetBranchAddress("n_decay_off", &n_decay_off, &b_n_decay_off);
   fChain->SetBranchAddress("Z_off_decay_px", Z_off_decay_px, &b_Z_off_decay_px);
   fChain->SetBranchAddress("Z_off_decay_py", Z_off_decay_py, &b_Z_off_decay_py);
   fChain->SetBranchAddress("Z_off_decay_pz", Z_off_decay_pz, &b_Z_off_decay_pz);
   fChain->SetBranchAddress("Z_off_decay_energy", Z_off_decay_energy, &b_Z_off_decay_energy);
   Notify();
}

Bool_t output_tree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void output_tree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t output_tree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef output_tree_cxx
