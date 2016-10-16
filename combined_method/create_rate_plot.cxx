#include "TFile.h"
#include "TCanvas.h"
#include "TH1.h"
void create_rate_plot(std::string input){
    TFile* input_file = new TFile(input);

    // get histograms
    TH1F* eta = (TH1F*) input_file->GetObject("h_eta");
    TH1F* eta_sagitta = (TH1F*) input_file->GetObject("h_eta_sagitta");
    TH1F* eta_beta = (TH1F*) input_file->GetObject("h_eta_beta");
    TH1F* eta_combined = (TH1F*) input_file->GetObject("h_eta_combined");
    TH1F* eta_standalone = (TH1F*) input_file->GetObject("h_eta_standalone");
    TH1F* eta_offline = (TH1F*) input_file->GetObject("h_eta_offline");

    // plot histograms
    TCanvas* c1 = new TCanvas();
    eta->Draw();
    eta_combined->Draw("SAME");
    eta_standalone->Draw("SAME");
    eta_offline->Draw("SAME");
    c1->SaveAs("rate_plot_extended.pdf");
    c1->SaveAs("rate_plot_extended.C");

    TCanvas* c2 = new TCanvas();
    eta->Draw();
    eta_combined->Draw("SAME");
    eta_offline->Draw("SAME");
    c2->SaveAs("rate_plot.pdf");


    c2->SaveAs("rate_plot.C");
}