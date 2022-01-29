void read_obj()
{
  TString roostr = "";

  /////////////////////////////////////
  TImage *img = TImage::Open("paper.png"); //put your own picture here
  img->SetConstRatio(1);
  
  TCanvas *c1 = new TCanvas("c1");
  img->Draw("N");
  
  /////////////////////////////////////////
  
  //Create a transparent pad filling the full canvas
  TPad *p = new TPad("p","p",0,0,1,1);
  p->SetFillStyle(4000);
  p->SetFrameFillStyle(4000);
  p->Draw();
  p->cd();

  p->SetLogx();
  p->SetLogy();

  p->SetLeftMargin(0.235);
  p->SetRightMargin(0.1125+0.006);
  p->SetTopMargin(0.12-0.004);
  p->SetBottomMargin(0.22);

  /////////////////////////////////////////
  
  TH2D *h2d_basic = new TH2D("h2d_basic", "", 10, 1e-2, 1, 10, 1e-1, 100);
  h2d_basic->Draw("");
  h2d_basic->SetStats(0);
  h2d_basic->GetXaxis()->SetAxisColor(kRed);
  h2d_basic->GetYaxis()->SetAxisColor(kRed);;
  
  TGraph *gh_basic = new TGraph();
  gh_basic->SetPoint(0, 0.1, 10);  
  gh_basic->SetMarkerColor(kRed);
  gh_basic->SetMarkerStyle(20);
  gh_basic->SetMarkerSize(1.8);
  gh_basic->Draw("same p");

}
