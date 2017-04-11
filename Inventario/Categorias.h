#pragma once   //_____________________________________________ Categorias.h  
#include "resource.h"

class Categorias : public Win::Dialog
{
public:
	Categorias()
	{
	}
	~Categorias()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxCategoria;
	Win::DropDownList ddDepartamentos;
	Win::Label lb2;
	Win::Button bt1;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::CentimetersToDlgUnitX(9.55146);
		dlgTemplate.cy = Sys::Convert::CentimetersToDlgUnitY(3.94229);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		lb1.CreateX(NULL, L"Nombre", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 1.69333, 0.92604, 2.85750, 0.60854, hWnd, 1000);
		tbxCategoria.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 5.10646, 0.89958, 4.18042, 0.60854, hWnd, 1001);
		ddDepartamentos.CreateX(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_WINNORMALCASE, 5.13292, 1.85208, 4.23333, 0.60854, hWnd, 1002);
		lb2.CreateX(NULL, L"Departamento", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 1.66688, 1.87854, 2.93688, 0.60854, hWnd, 1003);
		bt1.CreateX(NULL, L"OK", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 4.04812, 3.06917, 2.09021, 0.68792, hWnd, 1004);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		tbxCategoria.Font = fontArial009A;
		ddDepartamentos.Font = fontArial009A;
		lb2.Font = fontArial009A;
		bt1.Font = fontArial009A;
	}
	//_________________________________________________
	void bt1_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (bt1.IsEvent(e, BN_CLICKED)) { bt1_Click(e); return true; }
		return false;
	}
};
