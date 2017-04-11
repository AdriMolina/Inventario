#pragma once   //_____________________________________________ refacciones.h  
#include "resource.h"

class refacciones : public Win::Dialog
{
public:
	refacciones()
	{
	}
	~refacciones()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxRefacciones;
	Win::Button btRefaccion;
	Win::DropDownList ddCategoria;
	Win::Label lb2;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::CentimetersToDlgUnitX(10.10708);
		dlgTemplate.cy = Sys::Convert::CentimetersToDlgUnitY(4.20688);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		lb1.CreateX(NULL, L"Nombre", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.50271, 2.43417, 3.01625, 0.60854, hWnd, 1000);
		tbxRefacciones.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 4.07458, 2.38125, 4.12750, 0.60854, hWnd, 1001);
		btRefaccion.CreateX(NULL, L"OK", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 8.70479, 2.35479, 1.21708, 0.68792, hWnd, 1002);
		ddCategoria.CreateX(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_WINNORMALCASE, 4.18042, 3.36021, 4.02167, 0.60854, hWnd, 1003);
		lb2.CreateX(NULL, L"Categoria", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.52917, 3.41313, 3.04271, 0.60854, hWnd, 1004);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		tbxRefacciones.Font = fontArial009A;
		btRefaccion.Font = fontArial009A;
		ddCategoria.Font = fontArial009A;
		lb2.Font = fontArial009A;
	}
	//_________________________________________________
	void btRefaccion_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btRefaccion.IsEvent(e, BN_CLICKED)) { btRefaccion_Click(e); return true; }
		return false;
	}
};
