///-----------------------------------------------------------------
///
/// @file      othello graficoFrm.h
/// @author    PerozoToyo
/// Created:   25/05/2017 18:45:26
/// @section   DESCRIPTION
///            othello_graficoFrm class declaration
///
///------------------------------------------------------------------

#ifndef __OTHELLO_GRAFICOFRM_H__
#define __OTHELLO_GRAFICOFRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/button.h>
#include <wx/sizer.h>
////Header Include End

////Dialog Style Start
#undef othello_graficoFrm_STYLE
#define othello_graficoFrm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class othello_graficoFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		void WxButton30UpdateUI(wxUpdateUIEvent& event);
		othello_graficoFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("othello grafico"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = othello_graficoFrm_STYLE);
		virtual ~othello_graficoFrm();
		void WxPanel1UpdateUI(wxUpdateUIEvent& event);
		void othello_graficoFrmActivate(wxActivateEvent& event);
		void WxButton1Click(wxCommandEvent& event);
		void WxButton1UpdateUI(wxUpdateUIEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxButton *WxButton64;
		wxButton *WxButton63;
		wxButton *WxButton62;
		wxButton *WxButton61;
		wxButton *WxButton60;
		wxButton *WxButton59;
		wxButton *WxButton58;
		wxButton *WxButton57;
		wxButton *WxButton56;
		wxButton *WxButton55;
		wxButton *WxButton54;
		wxButton *WxButton53;
		wxButton *WxButton52;
		wxButton *WxButton51;
		wxButton *WxButton50;
		wxButton *WxButton49;
		wxButton *WxButton48;
		wxButton *WxButton47;
		wxButton *WxButton46;
		wxButton *WxButton45;
		wxButton *WxButton44;
		wxButton *WxButton43;
		wxButton *WxButton42;
		wxButton *WxButton41;
		wxButton *WxButton40;
		wxButton *WxButton39;
		wxButton *WxButton38;
		wxButton *WxButton37;
		wxButton *WxButton36;
		wxButton *WxButton35;
		wxButton *WxButton34;
		wxButton *WxButton33;
		wxButton *WxButton32;
		wxButton *WxButton31;
		wxButton *WxButton30;
		wxButton *WxButton29;
		wxButton *WxButton28;
		wxButton *WxButton27;
		wxButton *WxButton26;
		wxButton *WxButton25;
		wxButton *WxButton24;
		wxButton *WxButton23;
		wxButton *WxButton22;
		wxButton *WxButton21;
		wxButton *WxButton20;
		wxButton *WxButton19;
		wxButton *WxButton18;
		wxButton *WxButton17;
		wxButton *WxButton16;
		wxButton *WxButton15;
		wxButton *WxButton14;
		wxButton *WxButton13;
		wxButton *WxButton12;
		wxButton *WxButton11;
		wxButton *WxButton10;
		wxButton *WxButton9;
		wxButton *WxButton8;
		wxButton *WxButton7;
		wxButton *WxButton6;
		wxButton *WxButton5;
		wxButton *WxButton4;
		wxButton *WxButton3;
		wxButton *WxButton2;
		wxButton *WxButton1;
		wxGridSizer *WxGridSizer1;
		////GUI Control Declaration End
		
		int turno,puntos1,puntos2,posicionX,posicionY,tempX,tempY,bandera,contador;
		char matriz[8][8];
		wxButton* matriz2[8][8];
		
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXBUTTON64 = 1341,
			ID_WXBUTTON63 = 1340,
			ID_WXBUTTON62 = 1339,
			ID_WXBUTTON61 = 1338,
			ID_WXBUTTON60 = 1337,
			ID_WXBUTTON59 = 1336,
			ID_WXBUTTON58 = 1335,
			ID_WXBUTTON57 = 1334,
			ID_WXBUTTON56 = 1333,
			ID_WXBUTTON55 = 1332,
			ID_WXBUTTON54 = 1331,
			ID_WXBUTTON53 = 1330,
			ID_WXBUTTON52 = 1329,
			ID_WXBUTTON51 = 1328,
			ID_WXBUTTON50 = 1327,
			ID_WXBUTTON49 = 1326,
			ID_WXBUTTON48 = 1325,
			ID_WXBUTTON47 = 1324,
			ID_WXBUTTON46 = 1323,
			ID_WXBUTTON45 = 1322,
			ID_WXBUTTON44 = 1321,
			ID_WXBUTTON43 = 1320,
			ID_WXBUTTON42 = 1319,
			ID_WXBUTTON41 = 1318,
			ID_WXBUTTON40 = 1317,
			ID_WXBUTTON39 = 1316,
			ID_WXBUTTON38 = 1315,
			ID_WXBUTTON37 = 1314,
			ID_WXBUTTON36 = 1313,
			ID_WXBUTTON35 = 1312,
			ID_WXBUTTON34 = 1311,
			ID_WXBUTTON33 = 1310,
			ID_WXBUTTON32 = 1309,
			ID_WXBUTTON31 = 1308,
			ID_WXBUTTON30 = 1307,
			ID_WXBUTTON29 = 1306,
			ID_WXBUTTON28 = 1305,
			ID_WXBUTTON27 = 1304,
			ID_WXBUTTON26 = 1303,
			ID_WXBUTTON25 = 1302,
			ID_WXBUTTON24 = 1301,
			ID_WXBUTTON23 = 1300,
			ID_WXBUTTON22 = 1299,
			ID_WXBUTTON21 = 1298,
			ID_WXBUTTON20 = 1297,
			ID_WXBUTTON19 = 1296,
			ID_WXBUTTON18 = 1295,
			ID_WXBUTTON17 = 1294,
			ID_WXBUTTON16 = 1293,
			ID_WXBUTTON15 = 1292,
			ID_WXBUTTON14 = 1291,
			ID_WXBUTTON13 = 1290,
			ID_WXBUTTON12 = 1289,
			ID_WXBUTTON11 = 1288,
			ID_WXBUTTON10 = 1287,
			ID_WXBUTTON9 = 1286,
			ID_WXBUTTON8 = 1285,
			ID_WXBUTTON7 = 1284,
			ID_WXBUTTON6 = 1283,
			ID_WXBUTTON5 = 1282,
			ID_WXBUTTON4 = 1281,
			ID_WXBUTTON3 = 1280,
			ID_WXBUTTON2 = 1279,
			ID_WXBUTTON1 = 1278,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
