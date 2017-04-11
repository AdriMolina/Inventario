#pragma once  //______________________________________ Inventario.h  
#include "Resource.h"
#include "ConsultasTablas.h"
class Inventario : public Win::Dialog
{
public:
	Inventario()
	{
	}
	~Inventario()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button btAgregar;
	Win::Button btEliminar;
	Win::Button btBuscar;
	Win::Button btActualizar;
	Win::Tab tab1;
	Win::ListView lv2;
	Win::Button btMarca;
	Win::Button btDptos;
	Win::Button btProductos;
	Win::Button btCategoria;
	Win::Button btRefaccion;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::CentimetersToDlgUnitX(28.68083);
		dlgTemplate.cy = Sys::Convert::CentimetersToDlgUnitY(16.43062);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Inventario";
		btAgregar.CreateX(NULL, L"Agregar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 22.88646, 9.71021, 5.58271, 0.68792, hWnd, 1000);
		btEliminar.CreateX(NULL, L"Eliminar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 22.86000, 10.90083, 5.60917, 0.68792, hWnd, 1001);
		btBuscar.CreateX(NULL, L"Buscar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 22.88646, 12.25021, 5.58271, 0.68792, hWnd, 1002);
		btActualizar.CreateX(NULL, L"Actualizar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 22.86000, 13.59958, 5.63563, 0.68792, hWnd, 1003);
		tab1.CreateX(NULL, NULL, WS_CHILD | WS_VISIBLE | TCS_SINGLELINE | TCS_TABS | TCS_RAGGEDRIGHT, 0.50271, 5.84729, 21.88104, 10.39813, hWnd, 1004);
		lv2.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | LVS_REPORT, 0.74083, 6.79979, 21.45771, 9.28688, hWnd, 1005);
		btMarca.CreateX(NULL, L"Marca  y Modelo", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 0.52917, 1.87854, 2.64583, 0.68792, hWnd, 1006);
		btDptos.CreateX(NULL, L"Departamentos", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 6.03250, 1.79917, 2.51354, 0.68792, hWnd, 1007);
		btProductos.CreateX(NULL, L"Productos", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 9.10167, 1.79917, 2.14312, 0.68792, hWnd, 1008);
		btCategoria.CreateX(NULL, L"Categorias", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 11.85333, 1.77271, 2.16958, 0.68792, hWnd, 1009);
		btRefaccion.CreateX(NULL, L"Refaccion", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 14.81667, 1.77271, 1.90500, 0.68792, hWnd, 1010);
		lv2.SetExtStyle(LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES, LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		btAgregar.Font = fontArial009A;
		btEliminar.Font = fontArial009A;
		btBuscar.Font = fontArial009A;
		btActualizar.Font = fontArial009A;
		tab1.Font = fontArial009A;
		lv2.Font = fontArial009A;
		btMarca.Font = fontArial009A;
		btDptos.Font = fontArial009A;
		btProductos.Font = fontArial009A;
		btCategoria.Font = fontArial009A;
		btRefaccion.Font = fontArial009A;
	}
	//_________________________________________________
	void btAgregar_Click(Win::Event& e);
	void btEliminar_Click(Win::Event& e);
	void btBuscar_Click(Win::Event& e);
	void btActualizar_Click(Win::Event& e);
	void tab1_SelChange(Win::Event& e);
	void btMarca_Click(Win::Event& e);
	void btDptos_Click(Win::Event& e);
	void btProductos_Click(Win::Event& e);
	void btCategoria_Click(Win::Event& e);
	void btRefaccion_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btAgregar.IsEvent(e, BN_CLICKED)) { btAgregar_Click(e); return true; }
		if (btEliminar.IsEvent(e, BN_CLICKED)) { btEliminar_Click(e); return true; }
		if (btBuscar.IsEvent(e, BN_CLICKED)) { btBuscar_Click(e); return true; }
		if (btActualizar.IsEvent(e, BN_CLICKED)) { btActualizar_Click(e); return true; }
		if (tab1.IsEvent(e, TCN_SELCHANGE)) { tab1_SelChange(e); return true; }
		if (btMarca.IsEvent(e, BN_CLICKED)) { btMarca_Click(e); return true; }
		if (btDptos.IsEvent(e, BN_CLICKED)) { btDptos_Click(e); return true; }
		if (btProductos.IsEvent(e, BN_CLICKED)) { btProductos_Click(e); return true; }
		if (btCategoria.IsEvent(e, BN_CLICKED)) { btCategoria_Click(e); return true; }
		if (btRefaccion.IsEvent(e, BN_CLICKED)) { btRefaccion_Click(e); return true; }
		return false;
	}
};
