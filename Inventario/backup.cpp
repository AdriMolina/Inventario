#include "stdafx.h"  //_____________________________________________ Articulos.cpp
#include "Articulos.h"
#include "ConsultasTablas.h"

void Articulos::Window_Open(Win::Event& e)
{
	tbxIMEI.Visible = false;
	lbIMEI.Visible = false;
	ConsultasTablas consulta;
	consulta.llenarCategorias(ddCategoria, 100, true);
	ddCategoria.SetSelectedIndex(0);
	consulta.llenarDptos(ddDepartamento, 100, true);
	ddDepartamento.SetSelectedIndex(0);
	consulta.llenarMarcas(ddMarca, 100, true);
	ddMarca.SetSelectedIndex(0);
	consulta.llenarModelos(ddModelo, 100, true);
	ddModelo.SetSelectedIndex(0);
}



void Articulos::btNuevo_Click(Win::Event& e)
{
}

void Articulos::btAgregar_Click(Win::Event& e)
{
	ConsultasTablas consulta;
	int categorias_id = consulta.sacarIDCategorias(ddCategoria.Text);
	int marca_id = consulta.sacarIDMarca(ddMarca.Text);
	int modelo_id = consulta.sacarIDModelo(ddModelo.Text);
	int dpto_id = consulta.sacarIDDptos(ddDepartamento.Text);
	Sys::Time fecha;
	fecha = dtboxFecha.GetSelectedDateTime();
	consulta.insertarticulos(tbxCodigo.Text, modelo_id, marca_id, tbxPrecio.GetIntValue(), tbxColor.Text, true, categorias_id);
	/*consulta.insertarCaracteristicas(tbxIMEI.Text, )*/
}

