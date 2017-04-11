#pragma once   //_____________________________________________ ConsultasTablas.h  
#include "resource.h"

class ConsultasTablas : public Win::Dialog
{
public:
	ConsultasTablas()
	{
	}
	~ConsultasTablas()
	{
	}
	void ConsultasTablas::llenarMarcas(Win::DropDownList ddMarcas, int large, bool activo);
	void ConsultasTablas::llenarModelos(Win::DropDownList ddModelos, int large, bool activo);
	void ConsultasTablas::llenarArticulos(Win::ListView lvArticulos, int large, bool activo);
	void ConsultasTablas::llenarLocales(Win::ListView lvDepartamento, int large, wstring colocacion);
	void ConsultasTablas::llenarGeneral(Win::ListView lvDepartamentos, int large, bool activo);
	void ConsultasTablas::llenarCategorias(Win::DropDownList ddModelos, int large, bool activo);
	void ConsultasTablas::llenarDptos(Win::DropDownList departamentos, int large, bool activo);


	int ConsultasTablas::sacarIDModelo(wstring modelo);
	int ConsultasTablas::sacarIDCategorias(wstring categorias);
	int ConsultasTablas::sacarIDDptos(wstring dpto);
	int ConsultasTablas::sacarIDMarca(wstring marca);


	void ConsultasTablas::insertMarca(wstring marca, int id_modelo);
	void ConsultasTablas::insertModelo(wstring modelo);
	void ConsultasTablas::insertDpto(wstring dpto);
	void ConsultasTablas::insertProducto(wstring producto);
	void ConsultasTablas::insertRefacciones(wstring refacciones, int categorias_id);
	void ConsultasTablas::insertCategorias(wstring categorias, int dptos_id);
	void ConsultasTablas::insertarticulos(wstring codigo, int modelo, int marca, double precio, wstring color, bool activo, int categoria);
	void ConsultasTablas::insertarcantidad(int cantidad, int departamentos, int articulo);
	void ConsultasTablas::insertarCaracteristicas( wstring imei, int articulo);
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
protected:
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
	}
	//_________________________________________________
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
