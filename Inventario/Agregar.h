#pragma once   //_____________________________________________ Agregar.h  
#include "resource.h"

class Agregar : public Win::Dialog
{
public:
	Agregar()
	{
	}
	~Agregar()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lbModelo;
	Win::DropDownList ddModelos;
	Win::Button btAgregarModelo;
	Win::Label lbMarca;
	Win::DropDownList ddMarcas;
	Win::Button btAgregarMarca;
	Win::Textbox tbxInsertMarca;
	Win::Textbox tbxInsertModelo;
	Win::Button btMarca;
	Win::Button btModelo;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::CentimetersToDlgUnitX(12.93812);
		dlgTemplate.cy = Sys::Convert::CentimetersToDlgUnitY(7.06438);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		lbModelo.CreateX(NULL, L"Modelo", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 9.18104, 2.03729, 1.40229, 0.60854, hWnd, 1000);
		ddModelos.CreateX(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_WINNORMALCASE, 7.38188, 3.01625, 5.37104, 0.60854, hWnd, 1001);
		btAgregarModelo.CreateX(NULL, L"Agregar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 7.35542, 4.55083, 5.37104, 0.68792, hWnd, 1002);
		lbMarca.CreateX(NULL, L"Marca", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 1.90500, 2.03729, 1.48167, 0.60854, hWnd, 1003);
		ddMarcas.CreateX(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_WINNORMALCASE, 0.52917, 2.96333, 4.97417, 0.60854, hWnd, 1004);
		btAgregarMarca.CreateX(NULL, L"Agregar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 0.52917, 4.57729, 4.89479, 0.68792, hWnd, 1005);
		tbxInsertMarca.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 0.52917, 6.27062, 3.65125, 0.60854, hWnd, 1006);
		tbxInsertModelo.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 7.35542, 6.24417, 4.07458, 0.60854, hWnd, 1007);
		btMarca.CreateX(NULL, L"Ok", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 4.44500, 6.19125, 0.95250, 0.68792, hWnd, 1008);
		btModelo.CreateX(NULL, L"OK", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 11.82688, 6.19125, 0.92604, 0.68792, hWnd, 1009);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lbModelo.Font = fontArial009A;
		ddModelos.Font = fontArial009A;
		btAgregarModelo.Font = fontArial009A;
		lbMarca.Font = fontArial009A;
		ddMarcas.Font = fontArial009A;
		btAgregarMarca.Font = fontArial009A;
		tbxInsertMarca.Font = fontArial009A;
		tbxInsertModelo.Font = fontArial009A;
		btMarca.Font = fontArial009A;
		btModelo.Font = fontArial009A;
	}
	//_________________________________________________
	void btAgregarModelo_Click(Win::Event& e);
	void btAgregarMarca_Click(Win::Event& e);
	void btMarca_Click(Win::Event& e);
	void btModelo_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btAgregarModelo.IsEvent(e, BN_CLICKED)) { btAgregarModelo_Click(e); return true; }
		if (btAgregarMarca.IsEvent(e, BN_CLICKED)) { btAgregarMarca_Click(e); return true; }
		if (btMarca.IsEvent(e, BN_CLICKED)) { btMarca_Click(e); return true; }
		if (btModelo.IsEvent(e, BN_CLICKED)) { btModelo_Click(e); return true; }
		return false;
	}
};
