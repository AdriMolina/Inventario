#include "stdafx.h"  //_____________________________________________ Agregar.cpp
#include "Agregar.h"
#include "ConsultasTablas.h"

void Agregar::Window_Open(Win::Event& e)
{
	ConsultasTablas consulta;
	wstring modelo;
	btMarca.Visible = false;
	btModelo.Visible = false;
	tbxInsertMarca.Visible = false;
	tbxInsertModelo.Visible = false;
	consulta.llenarModelos(ddModelos, 200, true);
	ddModelos.SetSelectedIndex(0);
	consulta.llenarMarcas(ddMarcas, 200, true);
	ddMarcas.SetSelectedIndex(0);


	//________________________________________________________ ddModelos

	//________________________________________________________ ddMarcas

}





void Agregar::btAgregarModelo_Click(Win::Event& e)
{

	tbxInsertModelo.Visible = true;
	btModelo.Visible = true;
}

void Agregar::btAgregarMarca_Click(Win::Event& e)
{
	tbxInsertMarca.Visible = true;
	tbxInsertModelo.Visible = true;
	btMarca.Visible = true;
}

void Agregar::btMarca_Click(Win::Event& e)
{
	ConsultasTablas consulta;
	wstring marca;
	int modelo_id = consulta.sacarIDModelo(ddModelos.Text);
	marca = tbxInsertMarca.Text;
	consulta.insertMarca(marca,modelo_id);
	tbxInsertMarca.Visible = false;
	btMarca.Visible = false;
	consulta.llenarMarcas(ddMarcas, 200, true);
	btModelo.Visible = true;

}

void Agregar::btModelo_Click(Win::Event& e)
{
	ConsultasTablas consulta;
	wstring modelo = tbxInsertModelo.Text;
	consulta.insertModelo(modelo);

	tbxInsertModelo.Visible = false;
	btModelo.Visible = false;
	consulta.llenarModelos(ddModelos, 200, true);
}

