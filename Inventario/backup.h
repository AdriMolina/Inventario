#pragma once   //_____________________________________________ Articulos.h  
#include "resource.h"

class Articulos : public Win::Dialog
{
public:
	Articulos()
	{
	}
	~Articulos()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button gboxTodo;
	Win::Label lbCodigo;
	Win::Textbox tbxCodigo;
	Win::Label lbMarca;
	Win::DropDownList ddMarca;
	Win::Label lbModelo;
	Win::Label lbPrecio;
	Win::Label lbColor;
	Win::Label lbCategoria;
	Win::Label lbFecha;
	Win::DropDownList ddModelo;
	Win::DateTimeBox dtboxFecha;
	Win::Textbox tbxPrecio;
	Win::Textbox tbxColor;
	Win::Label lbDepartamento;
	Win::DropDownList ddCategoria;
	Win::DropDownList ddDepartamento;
	Win::Label lbCantidad;
	Win::Textbox tbxCantidad;
	Win::Label lbIMEI;
	Win::Textbox tbxIMEI;
	Win::Button gbox2;
	Win::Button btNuevo;
	Win::Button btAgregar;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(17.75354);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(14.65792);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		gboxTodo.CreateX(WS_EX_TRANSPARENT, NULL, WS_CHILD | WS_VISIBLE | BS_GROUPBOX, 2.38125, 3.51896, 11.37708, 10.95375, hWnd, 1000);
		lbCodigo.CreateX(NULL, L"Código", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 2.80458, 4.18042, 2.72521, 0.60854, hWnd, 1001);
		tbxCodigo.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.75167, 5.10646, 2.93688, 0.60854, hWnd, 1002);
		lbMarca.CreateX(NULL, L"Marca", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 2.67229, 7.64646, 2.85750, 0.60854, hWnd, 1003);
		ddMarca.CreateX(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_WINNORMALCASE, 2.59292, 8.51958, 3.01625, 0.60854, hWnd, 1004);
		lbModelo.CreateX(NULL, L"Modelo", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 6.21771, 7.62000, 2.48708, 0.60854, hWnd, 1005);
		lbPrecio.CreateX(NULL, L"Precio", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 9.26042, 7.54062, 3.06917, 0.60854, hWnd, 1006);
		lbColor.CreateX(NULL, L"Color", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 2.61938, 10.71563, 3.51896, 0.60854, hWnd, 1007);
		lbCategoria.CreateX(NULL, L"Categoria", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 6.03250, 4.04812, 2.56646, 0.60854, hWnd, 1008);
		lbFecha.CreateX(NULL, L"Fecha", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 6.56167, 10.60979, 2.61938, 0.60854, hWnd, 1009);
		ddModelo.CreateX(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_WINNORMALCASE, 6.16479, 8.49313, 2.67229, 0.60854, hWnd, 1010);
		dtboxFecha.CreateX(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | DTS_RIGHTALIGN, 6.66750, 11.56229, 2.51354, 0.60854, hWnd, 1011);
		tbxPrecio.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 9.28688, 8.46667, 3.09563, 0.60854, hWnd, 1012);
		tbxColor.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.67229, 11.61521, 3.62479, 0.60854, hWnd, 1013);
		lbDepartamento.CreateX(NULL, L"Departamento", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 9.31333, 4.12750, 2.54000, 0.60854, hWnd, 1014);
		ddCategoria.CreateX(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_WINNORMALCASE, 6.05896, 5.08000, 2.61938, 0.60854, hWnd, 1015);
		ddDepartamento.CreateX(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_WINNORMALCASE, 9.33979, 5.02708, 2.72521, 0.60854, hWnd, 1016);
		lbCantidad.CreateX(NULL, L"Cantidad", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 9.49854, 10.53042, 3.12208, 0.60854, hWnd, 1017);
		tbxCantidad.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 9.55146, 11.56229, 3.20146, 0.60854, hWnd, 1018);
		lbIMEI.CreateX(NULL, L"IMEI", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 2.69875, 13.09687, 3.70417, 0.60854, hWnd, 1019);
		tbxIMEI.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 6.77333, 12.99104, 6.08542, 0.60854, hWnd, 1020);
		gbox2.CreateX(WS_EX_TRANSPARENT, NULL, WS_CHILD | WS_VISIBLE | BS_GROUPBOX, 14.15521, 3.51896, 3.41313, 10.95375, hWnd, 1021);
		btNuevo.CreateX(NULL, L"Nuevo", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 14.41979, 7.54062, 2.93688, 0.68792, hWnd, 1022);
		btAgregar.CreateX(NULL, L"Agregar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 14.39333, 9.12813, 3.01625, 0.68792, hWnd, 1023);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		gboxTodo.Font = fontArial009A;
		lbCodigo.Font = fontArial009A;
		tbxCodigo.Font = fontArial009A;
		lbMarca.Font = fontArial009A;
		ddMarca.Font = fontArial009A;
		lbModelo.Font = fontArial009A;
		lbPrecio.Font = fontArial009A;
		lbColor.Font = fontArial009A;
		lbCategoria.Font = fontArial009A;
		lbFecha.Font = fontArial009A;
		ddModelo.Font = fontArial009A;
		dtboxFecha.Font = fontArial009A;
		tbxPrecio.Font = fontArial009A;
		tbxColor.Font = fontArial009A;
		lbDepartamento.Font = fontArial009A;
		ddCategoria.Font = fontArial009A;
		ddDepartamento.Font = fontArial009A;
		lbCantidad.Font = fontArial009A;
		tbxCantidad.Font = fontArial009A;
		lbIMEI.Font = fontArial009A;
		tbxIMEI.Font = fontArial009A;
		gbox2.Font = fontArial009A;
		btNuevo.Font = fontArial009A;
		btAgregar.Font = fontArial009A;
	}
	//_________________________________________________
	void btNuevo_Click(Win::Event& e);
	void btAgregar_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btNuevo.IsEvent(e, BN_CLICKED)) {btNuevo_Click(e); return true;}
		if (btAgregar.IsEvent(e, BN_CLICKED)) {btAgregar_Click(e); return true;}
		return false;
	}
};
