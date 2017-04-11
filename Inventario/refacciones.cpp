#include "stdafx.h"  //_____________________________________________ refacciones.cpp
#include "refacciones.h"
#include "ConsultasTablas.h"
void refacciones::Window_Open(Win::Event& e)
{
	ConsultasTablas cate;
	cate.llenarCategorias(ddCategoria, 100, true);
	ddCategoria.SetSelectedIndex(0);
}



void refacciones::btRefaccion_Click(Win::Event& e)
{
	ConsultasTablas refaccion;
	wstring re = tbxRefacciones.GetText();
	tbxRefacciones.Text = L" ";
	int categoria_id = refaccion.sacarIDCategorias(ddCategoria.Text);
	refaccion.insertRefacciones(re, categoria_id);


}
