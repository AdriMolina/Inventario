#include "stdafx.h"  //________________________________________ Inventario.cpp
#include "Inventario.h"
#include "Agregar.h"
#include "departamentos.h"
#include "refacciones.h"
#include "Categorias.h"
#include "Articulos.h"

ConsultasTablas consulta;




int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Inventario app;
	return app.BeginDialog(IDI_Inventario, hInstance);
}



void Inventario::Window_Open(Win::Event& e)
{

	consulta.llenarGeneral(lv2, 200, true);
	string opcion;
	tab1.Items.Add(0, L"General");
	tab1.Items.Add(1, L"Oficina");
	tab1.Items.Add(2, L"Rutas");
	tab1.Items.Add(3, L"Locales");

}
void Inventario::btAgregar_Click(Win::Event& e)
{



}

void Inventario::btEliminar_Click(Win::Event& e)
{

}

void Inventario::btBuscar_Click(Win::Event& e)
{
}

void Inventario::btActualizar_Click(Win::Event& e)
{
}



void Inventario::tab1_SelChange(Win::Event& e)
{


	switch (tab1.GetSelectedIndex())
	{

	case 0:
		consulta.llenarGeneral(lv2, 200, true);
		break;
	case 1:
		consulta.llenarLocales(lv2, 200, L"Oficina");
		break;
	case 2:
		consulta.llenarLocales(lv2, 200, L"Ruta");
		break;
	case 3:
		consulta.llenarLocales(lv2, 200, L"Local");
		break;
	default:
		break;
	}
}

void Inventario::btMarca_Click(Win::Event& e)
{
	Agregar nuevo;
	nuevo.BeginDialog(hWnd);
}

void Inventario::btDptos_Click(Win::Event& e)
{
	departamentos nuevo;
	nuevo.BeginDialog(hWnd);
}

void Inventario::btProductos_Click(Win::Event& e)
{
	Articulos nuevo;
	nuevo.BeginDialog(hWnd);
}

void Inventario::btCategoria_Click(Win::Event& e)
{
	Categorias nuevo;
	nuevo.BeginDialog(hWnd);
}

void Inventario::btRefaccion_Click(Win::Event& e)
{
	refacciones nuevo;
	nuevo.BeginDialog(hWnd);
}


