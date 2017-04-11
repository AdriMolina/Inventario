#include "stdafx.h"  //_____________________________________________ departamentos.cpp
#include "departamentos.h"
#include "ConsultasTablas.h"

void departamentos::Window_Open(Win::Event& e)
{

}



void departamentos::btAddDpto_Click(Win::Event& e)
{
	ConsultasTablas consulta;
	wstring dpto = tbxDpto.GetText();
	consulta.insertDpto(dpto);
	tbxDpto.Text = L" ";
}

