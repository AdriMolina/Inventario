#include "stdafx.h"  //_____________________________________________ Categorias.cpp
#include "Categorias.h"
#include "ConsultasTablas.h"

void Categorias::Window_Open(Win::Event& e)
{
	ConsultasTablas consulta;
	consulta.llenarDptos(ddDepartamentos, 100, true);
	ddDepartamentos.SetSelectedIndex(0);

}



void Categorias::bt1_Click(Win::Event& e)
{
	wstring categoria = tbxCategoria.GetText();

	ConsultasTablas consulta;
	int dpto_id = consulta.sacarIDDptos(ddDepartamentos.Text);
	consulta.insertCategorias(categoria,dpto_id);
}

