#pragma once   //_____________________________________________ departamentos.h  
#include "resource.h"

class departamentos : public Win::Dialog
{
public:
	departamentos()
	{
	}
	~departamentos()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxDpto;
	Win::Label lb1;
	Win::Button btAddDpto;
	Win::Label lb2;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::CentimetersToDlgUnitX(10.08063);
		dlgTemplate.cy = Sys::Convert::CentimetersToDlgUnitY(2.93688);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		tbxDpto.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 4.39208, 2.11667, 4.28625, 0.60854, hWnd, 1000);
		lb1.CreateX(NULL, L"Nombre", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 1.29646, 2.09021, 2.38125, 0.60854, hWnd, 1001);
		btAddDpto.CreateX(NULL, L"OK", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 9.10167, 2.06375, 0.79375, 0.68792, hWnd, 1002);
		lb2.CreateX(NULL, L"Departamentos", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 3.86292, 0.74083, 2.96333, 0.60854, hWnd, 1003);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		tbxDpto.Font = fontArial009A;
		lb1.Font = fontArial009A;
		btAddDpto.Font = fontArial009A;
		lb2.Font = fontArial009A;
		lb1.SetDock(DOCK_BORDER, DOCK_BORDER, DOCK_BORDER, DOCK_NONE);
	}
	//_________________________________________________
	void btAddDpto_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btAddDpto.IsEvent(e, BN_CLICKED)) { btAddDpto_Click(e); return true; }
		return false;
	}
};
