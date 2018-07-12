#ifndef TreeMaker_h 
#define TreeMaker_h

#include <fun4all/SubsysReco.h>
#include "TTree.h"
#include "TFile.h"
#include <string>

class PHCompositeNode;

class TreeMaker: public SubsysReco
{

 public:

  TreeMaker(const std::string &name="TreeMaker.root", int embed_id = 0);

  int Init(PHCompositeNode*);
  int process_event(PHCompositeNode*);
  int End(PHCompositeNode*);

 private:

  TFile *_f;

  TTree *_tree;

  std::string _foutname;

  float vx;
  float vy;
  float vz;

  int _embed_id;
  double _b_et_iso;
  double _b_cluster_eta;

};
#endif