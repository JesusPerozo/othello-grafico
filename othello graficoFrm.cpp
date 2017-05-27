///-----------------------------------------------------------------
///
/// @file      othello graficoFrm.cpp
/// @author    PerozoToyo
/// Created:   25/05/2017 18:45:26
/// @section   DESCRIPTION
///            othello_graficoFrm class implementation
///
///------------------------------------------------------------------

#include "othello graficoFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// othello_graficoFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(othello_graficoFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(othello_graficoFrm::OnClose)
	EVT_ACTIVATE(othello_graficoFrm::othello_graficoFrmActivate)
	EVT_BUTTON(ID_WXBUTTON64,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON63,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON62,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON61,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON60,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON59,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON58,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON57,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON56,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON55,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON54,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON53,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON52,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON51,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON50,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON49,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON48,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON47,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON46,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON45,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON44,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON43,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON42,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON41,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON40,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON39,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON38,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON37,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON36,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON35,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON34,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON33,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON32,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON31,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON30,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON29,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON28,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON27,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON26,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON25,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON24,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON23,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON22,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON21,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON20,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON19,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON18,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON17,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON16,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON15,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON14,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON13,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON12,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON11,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON10,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON9,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON8,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON7,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON6,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON5,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON4,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON3,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON2,othello_graficoFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON1,othello_graficoFrm::WxButton1Click)
	EVT_UPDATE_UI(ID_WXBUTTON1,othello_graficoFrm::WxButton1UpdateUI)
END_EVENT_TABLE()
////Event Table End

othello_graficoFrm::othello_graficoFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

othello_graficoFrm::~othello_graficoFrm()
{
}

void othello_graficoFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxGridSizer1 = new wxGridSizer(0, 8, 0, 0);
	this->SetSizer(WxGridSizer1);
	this->SetAutoLayout(true);

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _(""), wxPoint(5, 5), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton1"));
	WxButton1->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton1, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton2 = new wxButton(this, ID_WXBUTTON2, _(""), wxPoint(66, 5), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton2"));
	WxButton2->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton2, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton3 = new wxButton(this, ID_WXBUTTON3, _(""), wxPoint(127, 5), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton3"));
	WxButton3->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton3, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton4 = new wxButton(this, ID_WXBUTTON4, _(""), wxPoint(188, 5), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton4"));
	WxButton4->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton4, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton5 = new wxButton(this, ID_WXBUTTON5, _(""), wxPoint(249, 5), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton5"));
	WxButton5->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton5, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton6 = new wxButton(this, ID_WXBUTTON6, _(""), wxPoint(310, 5), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton6"));
	WxButton6->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton6, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton7 = new wxButton(this, ID_WXBUTTON7, _(""), wxPoint(371, 5), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton7"));
	WxButton7->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton7, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton8 = new wxButton(this, ID_WXBUTTON8, _(""), wxPoint(432, 5), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton8"));
	WxButton8->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton8, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton9 = new wxButton(this, ID_WXBUTTON9, _(""), wxPoint(5, 53), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton9"));
	WxButton9->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton9, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton10 = new wxButton(this, ID_WXBUTTON10, _(""), wxPoint(66, 53), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton10"));
	WxButton10->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton10, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton11 = new wxButton(this, ID_WXBUTTON11, _(""), wxPoint(127, 53), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton11"));
	WxButton11->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton11, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton12 = new wxButton(this, ID_WXBUTTON12, _(""), wxPoint(188, 53), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton12"));
	WxButton12->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton12, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton13 = new wxButton(this, ID_WXBUTTON13, _(""), wxPoint(249, 53), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton13"));
	WxButton13->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton13, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton14 = new wxButton(this, ID_WXBUTTON14, _(""), wxPoint(310, 53), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton14"));
	WxButton14->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton14, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton15 = new wxButton(this, ID_WXBUTTON15, _(""), wxPoint(371, 53), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton15"));
	WxButton15->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton15, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton16 = new wxButton(this, ID_WXBUTTON16, _(""), wxPoint(432, 53), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton16"));
	WxButton16->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton16, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton17 = new wxButton(this, ID_WXBUTTON17, _(""), wxPoint(5, 101), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton17"));
	WxButton17->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton17, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton18 = new wxButton(this, ID_WXBUTTON18, _(""), wxPoint(66, 101), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton18"));
	WxButton18->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton18, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton19 = new wxButton(this, ID_WXBUTTON19, _(""), wxPoint(127, 101), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton19"));
	WxButton19->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton19, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton20 = new wxButton(this, ID_WXBUTTON20, _(""), wxPoint(188, 101), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton20"));
	WxButton20->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton20, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton21 = new wxButton(this, ID_WXBUTTON21, _(""), wxPoint(249, 101), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton21"));
	WxButton21->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton21, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton22 = new wxButton(this, ID_WXBUTTON22, _(""), wxPoint(310, 101), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton22"));
	WxButton22->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton22, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton23 = new wxButton(this, ID_WXBUTTON23, _(""), wxPoint(371, 101), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton23"));
	WxButton23->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton23, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton24 = new wxButton(this, ID_WXBUTTON24, _(""), wxPoint(432, 101), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton24"));
	WxButton24->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton24, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton25 = new wxButton(this, ID_WXBUTTON25, _(""), wxPoint(5, 149), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton25"));
	WxButton25->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton25, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton26 = new wxButton(this, ID_WXBUTTON26, _(""), wxPoint(66, 149), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton26"));
	WxButton26->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton26, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton27 = new wxButton(this, ID_WXBUTTON27, _(""), wxPoint(127, 149), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton27"));
	WxButton27->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton27, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton28 = new wxButton(this, ID_WXBUTTON28, _(""), wxPoint(188, 149), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton28"));
	WxButton28->Enable(false);
	WxButton28->SetBackgroundColour(wxColour(_("BLACK")));
	WxGridSizer1->Add(WxButton28, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton29 = new wxButton(this, ID_WXBUTTON29, _(""), wxPoint(249, 149), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton29"));
	WxButton29->Enable(false);
	WxButton29->SetBackgroundColour(wxColour(_("WHITE")));
	WxGridSizer1->Add(WxButton29, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton30 = new wxButton(this, ID_WXBUTTON30, _(""), wxPoint(310, 149), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton30"));
	WxButton30->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton30, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton31 = new wxButton(this, ID_WXBUTTON31, _(""), wxPoint(371, 149), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton31"));
	WxButton31->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton31, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton32 = new wxButton(this, ID_WXBUTTON32, _(""), wxPoint(432, 149), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton32"));
	WxButton32->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton32, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton33 = new wxButton(this, ID_WXBUTTON33, _(""), wxPoint(5, 197), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton33"));
	WxButton33->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton33, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton34 = new wxButton(this, ID_WXBUTTON34, _(""), wxPoint(66, 197), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton34"));
	WxButton34->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton34, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton35 = new wxButton(this, ID_WXBUTTON35, _(""), wxPoint(127, 197), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton35"));
	WxButton35->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton35, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton36 = new wxButton(this, ID_WXBUTTON36, _(""), wxPoint(188, 197), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton36"));
	WxButton36->Enable(false);
	WxButton36->SetBackgroundColour(wxColour(_("WHITE")));
	WxGridSizer1->Add(WxButton36, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton37 = new wxButton(this, ID_WXBUTTON37, _(""), wxPoint(249, 197), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton37"));
	WxButton37->Enable(false);
	WxButton37->SetBackgroundColour(wxColour(_("BLACK")));
	WxGridSizer1->Add(WxButton37, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton38 = new wxButton(this, ID_WXBUTTON38, _(""), wxPoint(310, 197), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton38"));
	WxButton38->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton38, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton39 = new wxButton(this, ID_WXBUTTON39, _(""), wxPoint(371, 197), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton39"));
	WxButton39->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton39, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton40 = new wxButton(this, ID_WXBUTTON40, _(""), wxPoint(432, 197), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton40"));
	WxButton40->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton40, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton41 = new wxButton(this, ID_WXBUTTON41, _(""), wxPoint(5, 245), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton41"));
	WxButton41->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton41, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton42 = new wxButton(this, ID_WXBUTTON42, _(""), wxPoint(66, 245), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton42"));
	WxButton42->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton42, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton43 = new wxButton(this, ID_WXBUTTON43, _(""), wxPoint(127, 245), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton43"));
	WxButton43->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton43, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton44 = new wxButton(this, ID_WXBUTTON44, _(""), wxPoint(188, 245), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton44"));
	WxButton44->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton44, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton45 = new wxButton(this, ID_WXBUTTON45, _(""), wxPoint(249, 245), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton45"));
	WxButton45->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton45, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton46 = new wxButton(this, ID_WXBUTTON46, _(""), wxPoint(310, 245), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton46"));
	WxButton46->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton46, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton47 = new wxButton(this, ID_WXBUTTON47, _(""), wxPoint(371, 245), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton47"));
	WxButton47->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton47, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton48 = new wxButton(this, ID_WXBUTTON48, _(""), wxPoint(432, 245), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton48"));
	WxButton48->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton48, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton49 = new wxButton(this, ID_WXBUTTON49, _(""), wxPoint(5, 293), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton49"));
	WxButton49->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton49, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton50 = new wxButton(this, ID_WXBUTTON50, _(""), wxPoint(66, 293), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton50"));
	WxButton50->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton50, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton51 = new wxButton(this, ID_WXBUTTON51, _(""), wxPoint(127, 293), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton51"));
	WxButton51->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton51, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton52 = new wxButton(this, ID_WXBUTTON52, _(""), wxPoint(188, 293), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton52"));
	WxButton52->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton52, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton53 = new wxButton(this, ID_WXBUTTON53, _(""), wxPoint(249, 293), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton53"));
	WxButton53->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton53, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton54 = new wxButton(this, ID_WXBUTTON54, _(""), wxPoint(310, 293), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton54"));
	WxButton54->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton54, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton55 = new wxButton(this, ID_WXBUTTON55, _(""), wxPoint(371, 293), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton55"));
	WxButton55->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton55, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton56 = new wxButton(this, ID_WXBUTTON56, _(""), wxPoint(432, 293), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton56"));
	WxButton56->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton56, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton57 = new wxButton(this, ID_WXBUTTON57, _(""), wxPoint(5, 341), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton57"));
	WxButton57->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton57, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton58 = new wxButton(this, ID_WXBUTTON58, _(""), wxPoint(66, 341), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton58"));
	WxButton58->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton58, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton59 = new wxButton(this, ID_WXBUTTON59, _(""), wxPoint(127, 341), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton59"));
	WxButton59->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton59, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton60 = new wxButton(this, ID_WXBUTTON60, _(""), wxPoint(188, 341), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton60"));
	WxButton60->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton60, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton61 = new wxButton(this, ID_WXBUTTON61, _(""), wxPoint(249, 341), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton61"));
	WxButton61->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton61, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton62 = new wxButton(this, ID_WXBUTTON62, _(""), wxPoint(310, 341), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton62"));
	WxButton62->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton62, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton63 = new wxButton(this, ID_WXBUTTON63, _(""), wxPoint(371, 341), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton63"));
	WxButton63->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton63, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton64 = new wxButton(this, ID_WXBUTTON64, _(""), wxPoint(432, 341), wxSize(51, 38), 0, wxDefaultValidator, _("WxButton64"));
	WxButton64->SetBackgroundColour(wxColour(_("LIGHT GREY")));
	WxGridSizer1->Add(WxButton64, 0, wxALIGN_CENTER | wxALL, 5);

	SetTitle(_("othello grafico"));
	SetIcon(wxNullIcon);
	
	Layout();
	GetSizer()->Fit(this);
	GetSizer()->SetSizeHints(this);
	Center();
	
	////GUI Items Creation End
	
	turno=0;
	contador=0;
	bandera=0;

    
matriz2[0][0]=WxButton1;
matriz2[0][1]=WxButton2;
matriz2[0][2]=WxButton3;
matriz2[0][3]=WxButton4;
matriz2[0][4]=WxButton5;
matriz2[0][5]=WxButton6;
matriz2[0][6]=WxButton7;
matriz2[0][7]=WxButton8;
matriz2[1][0]=WxButton9;
matriz2[1][1]=WxButton10;
matriz2[1][2]=WxButton11;
matriz2[1][3]=WxButton12;
matriz2[1][4]=WxButton13;
matriz2[1][5]=WxButton14;
matriz2[1][6]=WxButton15;
matriz2[1][7]=WxButton16;
matriz2[2][0]=WxButton17;
matriz2[2][1]=WxButton18;
matriz2[2][2]=WxButton19;
matriz2[2][3]=WxButton20;
matriz2[2][4]=WxButton21;
matriz2[2][5]=WxButton22;
matriz2[2][6]=WxButton23;
matriz2[2][7]=WxButton24;
matriz2[3][0]=WxButton25;
matriz2[3][1]=WxButton26;
matriz2[3][2]=WxButton27;
matriz2[3][3]=WxButton28;
matriz2[3][4]=WxButton29;
matriz2[3][5]=WxButton30;
matriz2[3][6]=WxButton31;
matriz2[3][7]=WxButton32;
matriz2[4][0]=WxButton33;
matriz2[4][1]=WxButton34;
matriz2[4][2]=WxButton35;
matriz2[4][3]=WxButton36;
matriz2[4][4]=WxButton37;
matriz2[4][5]=WxButton38;
matriz2[4][6]=WxButton39;
matriz2[4][7]=WxButton40;
matriz2[5][0]=WxButton41;
matriz2[5][1]=WxButton42;
matriz2[5][2]=WxButton43;
matriz2[5][3]=WxButton44;
matriz2[5][4]=WxButton45;
matriz2[5][5]=WxButton46;
matriz2[5][6]=WxButton47;
matriz2[5][7]=WxButton48;
matriz2[6][0]=WxButton49;
matriz2[6][1]=WxButton50;
matriz2[6][2]=WxButton51;
matriz2[6][3]=WxButton52;
matriz2[6][4]=WxButton53;
matriz2[6][5]=WxButton54;
matriz2[6][6]=WxButton55;
matriz2[6][7]=WxButton56;
matriz2[7][0]=WxButton57;
matriz2[7][1]=WxButton58;
matriz2[7][2]=WxButton59;
matriz2[7][3]=WxButton60;
matriz2[7][4]=WxButton61;
matriz2[7][5]=WxButton62;
matriz2[7][6]=WxButton63;
matriz2[7][7]=WxButton64;
}
void othello_graficoFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxPanel1UpdateUI
 */
void othello_graficoFrm::WxPanel1UpdateUI(wxUpdateUIEvent& event)
{
	// insert your code here
}

/*
 * othello_graficoFrmActivate
 */
void othello_graficoFrm::othello_graficoFrmActivate(wxActivateEvent& event)
{
	// insert your code here
}

/*
 * WxButton30UpdateUI
 */
void othello_graficoFrm::WxButton30UpdateUI(wxUpdateUIEvent& event)
{
	// insert your code here
	
	
	
}

/*
 * WxButton1Click
 */
void othello_graficoFrm::WxButton1Click(wxCommandEvent& event)
{
	// insert your code here
	contador=0;
	bandera=0;
    wxButton*boton= (wxButton*)event.GetEventObject();	
    if(turno==0){  //TURNO DE LAS FICHAS NEGRAS
        boton->SetBackgroundColour("BLACK");    
        for(int x=0;x<8;x++){
            for(int y=0;y<8;y++){
                if(boton==matriz2[x][y]){
                    matriz2[x][y]->SetBackgroundColour("BLACK");
                    posicionX=x;
                    posicionY=y;
                }
            }
        }    
        
        tempX=posicionX;
        tempY=posicionY;
        do{ // verticales hacia ARRIBA
            if(tempX>0){
            tempX=tempX-1;
            }
            if(tempX==0){
                bandera=1;

            }
            
            //tempY=tempY-1;
            if(matriz2[tempX][tempY]->GetBackgroundColour()=="WHITE" && bandera==0){
                contador=contador+1;
            }else if(matriz2[tempX][tempY]->GetBackgroundColour()=="BLACK" && bandera==0){
                bandera=1;
            }if(matriz2[tempX][tempY]->GetBackgroundColour()=="LIGHT GREY" && bandera==0){
                contador=0;
                bandera=1;
            }
        }while(bandera==0);
        
        for(int x=0;x<=contador;x++){
            matriz2[posicionX-x][posicionY]->SetBackgroundColour("BLACK");
        }
        bandera=0;
        contador=0;
        tempX=posicionX;
        do{ // verticales hacia abajo
              if(tempX<7){
            tempX=tempX+1;
            }
            if(tempX==7){
                bandera=1;
            }
            
            
            //tempY=tempY-1;
            if(matriz2[tempX][tempY]->GetBackgroundColour()=="WHITE" && bandera==0 ){
                contador++;
            }else if(matriz2[tempX][tempY]->GetBackgroundColour()=="BLACK" && bandera==0){
                bandera=1;
            }if(matriz2[tempX][tempY]->GetBackgroundColour()=="LIGHT GREY" && bandera==0){
                contador=0;
                bandera=1;
            }
        }while(bandera==0);
        
        for(int x=0;x<=contador;x++){
            matriz2[posicionX+x][posicionY]->SetBackgroundColour("BLACK");
        }
        
        //para las conversiones horizontales
        bandera=0;
        contador=0;
        tempX=posicionX;
        tempY=posicionY;
        do{ // verticales hacia la izquierda
              if(tempY>0){
            tempY=tempY-1;
            }
            if(tempY==0){
                bandera=1;
            }
            
            
            //tempY=tempY-1;
            if(matriz2[tempX][tempY]->GetBackgroundColour()=="WHITE" && bandera==0 ){
                contador++;
            }else if(matriz2[tempX][tempY]->GetBackgroundColour()=="BLACK" && bandera==0){
                bandera=1;
            }if(matriz2[tempX][tempY]->GetBackgroundColour()=="LIGHT GREY" && bandera==0){
                contador=0;
                bandera=1;
            }
        }while(bandera==0);
        
        for(int x=0;x<=contador;x++){
            matriz2[posicionX][posicionY-x]->SetBackgroundColour("BLACK");
        }
        bandera=0;
        contador=0;
        tempY=posicionY;
        do{ // hacia la derecha
              if(tempY<7){
            tempY=tempY+1;
            }
            if(tempY==7){
                bandera=1;
            }
            
            
            //tempY=tempY-1;
            if(matriz2[tempX][tempY]->GetBackgroundColour()=="WHITE" && bandera==0 ){
                contador++;
            }else if(matriz2[tempX][tempY]->GetBackgroundColour()=="BLACK" && bandera==0){
                bandera=1;
            }if(matriz2[tempX][tempY]->GetBackgroundColour()=="LIGHT GREY" && bandera==0){
                contador=0;
                bandera=1;
            }
        }while(bandera==0);
        
        for(int x=0;x<=contador;x++){
            matriz2[posicionX][posicionY+x]->SetBackgroundColour("BLACK");
        }
        
        

    turno=1; 
    }else if(turno==1){
    
        boton->SetBackgroundColour("WHITE");
        
        for(int x=0;x<8;x++){
            for(int y=0;y<8;y++){
                if(boton==matriz2[x][y]){
                    matriz2[x][y]->SetBackgroundColour("WHITE");
                    posicionX=x;
                    posicionY=y;
                }
            }
        }  
        tempX=posicionX;
        tempY=posicionY;
        do{ // verticales hacia ARRIBA
            if(tempX>0){
            tempX=tempX-1;
            }
            if(tempX==0){
                bandera=1;
            }
            
            //tempY=tempY-1;
            if(matriz2[tempX][tempY]->GetBackgroundColour()=="BLACK" && bandera==0){
                contador=contador+1;
            }else if(matriz2[tempX][tempY]->GetBackgroundColour()=="WHITE" && bandera==0){
                bandera=1;
            }if(matriz2[tempX][tempY]->GetBackgroundColour()=="LIGHT GREY" && bandera==0){
                contador=0;
                bandera=1;
            }
        }while(bandera==0);
        
        for(int x=0;x<=contador;x++){
            matriz2[posicionX-x][posicionY]->SetBackgroundColour("WHITE");
        }
        bandera=0;
        contador=0;
        tempX=posicionX;
        do{ // verticales hacia abajo
              if(tempX<7){
            tempX=tempX+1;
            }
            if(tempX==7){
                bandera=1;
            }
            
            
            //tempY=tempY-1;
            if(matriz2[tempX][tempY]->GetBackgroundColour()=="BLACK" && bandera==0 ){
                contador++;
            }else if(matriz2[tempX][tempY]->GetBackgroundColour()=="WHITE" && bandera==0){
                bandera=1;
            }if(matriz2[tempX][tempY]->GetBackgroundColour()=="LIGHT GREY" && bandera==0){
                contador=0;
                bandera=1;
            }
        }while(bandera==0);
        
        for(int x=0;x<=contador;x++){
            matriz2[posicionX+x][posicionY]->SetBackgroundColour("WHITE");
        }
        
        //para las conversiones horizontales
        bandera=0;
        contador=0;
        tempX=posicionX;
        tempY=posicionY;
        do{ // verticales hacia la izquierda
              if(tempY>0){
            tempY=tempY-1;
            }
            if(tempY==0){
                bandera=1;
            }
            
            
            //tempY=tempY-1;
            if(matriz2[tempX][tempY]->GetBackgroundColour()=="BLACK" && bandera==0 ){
                contador++;
            }else if(matriz2[tempX][tempY]->GetBackgroundColour()=="WHITE" && bandera==0){
                bandera=1;
            }if(matriz2[tempX][tempY]->GetBackgroundColour()=="LIGHT GREY" && bandera==0){
                contador=0;
                bandera=1;
            }
        }while(bandera==0);
        
        for(int x=0;x<=contador;x++){
            matriz2[posicionX][posicionY-x]->SetBackgroundColour("WHITE");
        }
        bandera=0;
        contador=0;
        tempY=posicionY;
        do{ // hacia la derecha
              if(tempY<7){
            tempY=tempY+1;
            }
            if(tempY==7){
                bandera=1;
            }
            
            
            //tempY=tempY-1;
            if(matriz2[tempX][tempY]->GetBackgroundColour()=="BLACK" && bandera==0 ){
                contador++;
            }else if(matriz2[tempX][tempY]->GetBackgroundColour()=="WHITE" && bandera==0){
                bandera=1;
            }if(matriz2[tempX][tempY]->GetBackgroundColour()=="LIGHT GREY" && bandera==0){
                contador=0;
                bandera=1;
            }
        }while(bandera==0);
        
        for(int x=0;x<=contador;x++){
            matriz2[posicionX][posicionY+x]->SetBackgroundColour("WHITE");
        }       
        turno=0;
        
        
        
    }
    boton->Enable(false);
    WxButton1=matriz2[0][0]; // PARA QUE LOS BOTONES SE ACTUALIZEN CON RESPECTO A LA MATRIZ DE BOTONES
    WxButton2=matriz2[0][1];
    WxButton3=matriz2[0][2];
    WxButton4=matriz2[0][3];
    WxButton5=matriz2[0][4];
    WxButton6=matriz2[0][5];
    WxButton7=matriz2[0][6];
    WxButton8=matriz2[0][7];
    WxButton9=matriz2[1][0];
    WxButton10=matriz2[1][1];
    WxButton11=matriz2[1][2];
    WxButton12=matriz2[1][3];
    WxButton13=matriz2[1][4];
    WxButton14=matriz2[1][5];
    WxButton15=matriz2[1][6];
    WxButton16=matriz2[1][7];
    WxButton17=matriz2[2][0];
    WxButton18=matriz2[2][1];
    WxButton19=matriz2[2][2];
    WxButton20=matriz2[2][3];
    WxButton21=matriz2[2][4];
    WxButton22=matriz2[2][5];
    WxButton23=matriz2[2][6];
    WxButton24=matriz2[2][7];
    WxButton25=matriz2[3][0];
    WxButton26=matriz2[3][1];
    WxButton27=matriz2[3][2];
    WxButton28=matriz2[3][3];
    WxButton29=matriz2[3][4];
    WxButton30=matriz2[3][5];
    WxButton31=matriz2[3][6];
    WxButton32=matriz2[3][7];
    WxButton33=matriz2[4][0];
    WxButton34=matriz2[4][1];
    WxButton35=matriz2[4][2];
    WxButton36=matriz2[4][3];
    WxButton37=matriz2[4][4];
    WxButton38=matriz2[4][5];
    WxButton39=matriz2[4][6];
    WxButton40=matriz2[4][7];
    WxButton41=matriz2[5][0];
    WxButton42=matriz2[5][1];
    WxButton43=matriz2[5][2];
    WxButton44=matriz2[5][3];
    WxButton45=matriz2[5][4];
    WxButton46=matriz2[5][5];
    WxButton47=matriz2[5][6];
    WxButton48=matriz2[5][7];
    WxButton49=matriz2[6][0];
    WxButton50=matriz2[6][1];
    WxButton51=matriz2[6][2];
    WxButton52=matriz2[6][3];
    WxButton53=matriz2[6][4];
    WxButton54=matriz2[6][5];
    WxButton55=matriz2[6][6];
    WxButton56=matriz2[6][7];
    WxButton57=matriz2[7][0];
    WxButton58=matriz2[7][1];
    WxButton59=matriz2[7][2];
    WxButton60=matriz2[7][3];
    WxButton61=matriz2[7][4];
    WxButton62=matriz2[7][5];
    WxButton63=matriz2[7][6];
    WxButton64=matriz2[7][7]; 
}   
	
/*
 * WxButton1UpdateUI
 */
void othello_graficoFrm::WxButton1UpdateUI(wxUpdateUIEvent& event){
	// insert your code here	
}

