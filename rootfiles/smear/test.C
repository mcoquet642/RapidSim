void test(){
   
   TFile f("smearMFT.root","RECREATE");
   Double_t Graph_fx1001[13] = {
   5000,
   10000,
   20000,
   30000,
   40000,
   50000,
   60000,
   70000,
   80000,
   100000,
   120000,
   150000,
   235000};
   Double_t Graph_fy1001[13] = {
   0.005,
   0.0048,
   0.0052,
   0.0058,
   0.006,
   0.0066,
   0.007,
   0.0075,
   0.008,
   0.0086,
   0.009,
   0.0096,
   0.0112};
   for (int i=0; i<13; i++){
	   Graph_fy1001[i]*=5;
   }
   Double_t Graph_fex1001[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1001[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(13,Graph_fx1001,Graph_fy1001,Graph_fex1001,Graph_fey1001);
   gre->SetName("Graph");
   
   TH1F *gr = new TH1F("gr","Graph",100,0,258000);
//   gre->Draw("");
   f.WriteTObject(gre);
//   gr->Write();
   f.Close();
}
