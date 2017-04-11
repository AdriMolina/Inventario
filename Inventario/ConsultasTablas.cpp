#include "stdafx.h"  //_____________________________________________ ConsultasTablas.cpp
#include "ConsultasTablas.h"

void ConsultasTablas::llenarMarcas(Win::DropDownList ddMarcas, int large, bool activo) {
	wstring consulta;
	Sql::SqlConnection conn;
	int rows = 0;
	ddMarcas.DeleteAllItems();
	try
	{
		conn.OpenSession(hWnd, CONNECTION_STRING);
		Sys::Format(consulta, L"select nombre from marca where activo = %d", activo);

		conn.ExecuteSelect(consulta, large, ddMarcas);



	}
	catch (Sql::SqlException e)
	{
		this->MessageBox(e.GetDescription(), L"Error", MB_OK | MB_ICONERROR);
	}

	conn.CloseSession();





}
void ConsultasTablas::llenarModelos(Win::DropDownList ddModelos, int large, bool activo) {
	wstring consulta;
	Sql::SqlConnection conn;
	int rows = 0;
	ddModelos.DeleteAllItems();
	try
	{
		conn.OpenSession(hWnd, CONNECTION_STRING);
		Sys::Format(consulta, L"select id_modelo,nombre from modelo where activo = %d", activo);

		conn.ExecuteSelect(consulta, large, ddModelos);



	}
	catch (Sql::SqlException e)
	{
		this->MessageBox(e.GetDescription(), L"Error", MB_OK | MB_ICONERROR);
	}

	conn.CloseSession();
}
void ConsultasTablas::llenarArticulos(Win::ListView lv1, int large, bool activo) {

	wstring consulta;
	Sql::SqlConnection conn;
	int rows = 0;
	lv1.DeleteAllItems();
	lv1.Cols.Add(0, LVCFMT_CENTER, 100, L"Codigo");
	lv1.Cols.Add(1, LVCFMT_CENTER, 100, L"Categoria");
	lv1.Cols.Add(2, LVCFMT_CENTER, 100, L"Modelo");
	lv1.Cols.Add(3, LVCFMT_CENTER, 100, L"Marca");
	lv1.Cols.Add(4, LVCFMT_CENTER, 100, L"Precio");
	lv1.Cols.Add(5, LVCFMT_CENTER, 100, L"Color");
	lv1.Cols.Add(6, LVCFMT_CENTER, 100, L"Fecha");

	try
	{
		conn.OpenSession(hWnd, CONNECTION_STRING);
		Sys::Format(consulta, L"select a.Codigo, ca.nombre,mo.nombre, ma.nombre, a.precio, a.color,a.Fecha\
			from articulos a, modelo mo, marca ma, categorias ca\
			where a.id_marca = ma.id_marca\
			and a.id_modelo = mo.id_modelo\
			and a.id_categoria = ca.id_categoria");

		conn.ExecuteSelect(consulta, large, lv1);



	}
	catch (Sql::SqlException e)
	{
		this->MessageBox(e.GetDescription(), L"Error", MB_OK | MB_ICONERROR);
	}

	conn.CloseSession();






}

void ConsultasTablas::llenarLocales(Win::ListView lvDepartamento, int large, wstring colocacion) {


	wstring consulta;
	Sql::SqlConnection conn;
	int rows = 0;
	lvDepartamento.SetRedraw(false);
	lvDepartamento.Cols.DeleteAll();
	lvDepartamento.Items.DeleteAll();
	lvDepartamento.SetRedraw(true);
	lvDepartamento.Cols.Add(0, LVCFMT_CENTER, 100, L"Código");
	lvDepartamento.Cols.Add(1, LVCFMT_CENTER, 100, L"Categoria");
	lvDepartamento.Cols.Add(2, LVCFMT_CENTER, 100, L"Modelo");
	lvDepartamento.Cols.Add(3, LVCFMT_CENTER, 100, L"Marca");
	lvDepartamento.Cols.Add(4, LVCFMT_CENTER, 100, L"Precio");
	lvDepartamento.Cols.Add(5, LVCFMT_CENTER, 100, L"Color");
	lvDepartamento.Cols.Add(6, LVCFMT_CENTER, 100, L"Fecha");
	lvDepartamento.Cols.Add(7, LVCFMT_CENTER, 100, L"Departamento");


	try
	{
		conn.OpenSession(hWnd, CONNECTION_STRING);
		Sys::Format(consulta, L"select  a.Codigo, ca.nombre,mo.nombre, ma.nombre, a.precio, a.color,a.Fecha,de.Nombre\
			from articulos a, modelo mo, marca ma, categorias ca, Departamentos de, colocacion co\
		where a.id_marca = ma.id_marca\
		and a.id_modelo = mo.id_modelo\
			and a.id_categoria = ca.id_categoria\
			and ca.id_departamento = de.id_departamento\
			and co.id = de.id_colocacion\
			and co.tipo = '%s'", colocacion.c_str());

		conn.ExecuteSelect(consulta, large, lvDepartamento);



	}
	catch (Sql::SqlException e)
	{
		this->MessageBox(e.GetDescription(), L"Error", MB_OK | MB_ICONERROR);
	}

	conn.CloseSession();






}
void ConsultasTablas::llenarGeneral(Win::ListView lvDepartamentos, int large, bool activo) {

	wstring consulta;
	Sql::SqlConnection conn;
	int rows = 0;
	lvDepartamentos.SetRedraw(false);
	lvDepartamentos.Cols.DeleteAll();
	lvDepartamentos.Items.DeleteAll();
	lvDepartamentos.SetRedraw(true);
	lvDepartamentos.Cols.Add(0, LVCFMT_CENTER, 100, L"Código");
	lvDepartamentos.Cols.Add(1, LVCFMT_CENTER, 100, L"Categoria");
	lvDepartamentos.Cols.Add(2, LVCFMT_CENTER, 100, L"Modelo");
	lvDepartamentos.Cols.Add(3, LVCFMT_CENTER, 100, L"Marca");
	lvDepartamentos.Cols.Add(4, LVCFMT_CENTER, 100, L"Precio");
	lvDepartamentos.Cols.Add(5, LVCFMT_CENTER, 100, L"Color");
	lvDepartamentos.Cols.Add(6, LVCFMT_CENTER, 100, L"Fecha");
	lvDepartamentos.Cols.Add(7, LVCFMT_CENTER, 100, L"Departamento");


	try
	{
		conn.OpenSession(hWnd, CONNECTION_STRING);
		Sys::Format(consulta, L"select a.Codigo, ca.nombre,mo.nombre, ma.nombre, a.precio, a.color,a.Fecha,de.Nombre\
			from articulos a, modelo mo, marca ma, categorias ca, Departamentos de, colocacion co\
			where a.id_marca = ma.id_marca\
			and a.id_modelo = mo.id_modelo\
			and a.id_categoria = ca.id_categoria\
			and ca.id_departamento = de.id_departamento\
			and co.id = de.id_colocacion\
			and a.activo", activo);

		conn.ExecuteSelect(consulta, large, lvDepartamentos);



	}
	catch (Sql::SqlException e)
	{
		this->MessageBox(e.GetDescription(), L"Error", MB_OK | MB_ICONERROR);
	}

	conn.CloseSession();
}
//insertar a la base de datos
void ConsultasTablas::insertMarca(wstring marca, int id_modelo) {
	wstring consulta;
	Sql::SqlConnection conn;
	int rows = 0;
	try
	{
		conn.OpenSession(hWnd, CONNECTION_STRING);
		Sys::Format(consulta, L"INSERT INTO marca (nombre,activo,id_modelo) \
				VALUES('%s',true,%d);", marca.c_str(), id_modelo);
		rows = conn.ExecuteNonQuery(consulta);
		if (rows != 1)
		{
			this->MessageBox(Sys::Convert::ToString(rows), L"Error: number of inserted rows", MB_OK | MB_ICONERROR);
		}
	}
	catch (Sql::SqlException e)
	{
		this->MessageBox(e.GetDescription(), L"Error", MB_OK | MB_ICONERROR);
	}

	conn.CloseSession();


}

void ConsultasTablas::insertDpto(wstring dpto) {
	wstring consulta;
	Sql::SqlConnection conn;
	int rows = 0;
	try
	{
		conn.OpenSession(hWnd, CONNECTION_STRING);
		Sys::Format(consulta, L"INSERT INTO colocacion(tipo,activo) \
				VALUES('%s',true);", dpto.c_str());
		rows = conn.ExecuteNonQuery(consulta);
		if (rows = 1)
		{
			this->MessageBox(Sys::Convert::ToString(rows), L"Registro exitoso", MB_OK | MB_SERVICE_NOTIFICATION);
		}
	}
	catch (Sql::SqlException e)
	{
		this->MessageBox(e.GetDescription(), L"Error", MB_OK | MB_ICONERROR);
	}

	conn.CloseSession();



}
void ConsultasTablas::insertCategorias(wstring dpto, int dpto_id) {
	wstring consulta;
	Sql::SqlConnection conn;
	int rows = 0;
	try
	{
		conn.OpenSession(hWnd, CONNECTION_STRING);
		Sys::Format(consulta, L"INSERT INTO categorias(nombre,activo,id_departamento) \
				VALUES('%s',true,%d);", dpto.c_str(), dpto_id);
		rows = conn.ExecuteNonQuery(consulta);
		if (rows = 1)
		{
			this->MessageBox(Sys::Convert::ToString(rows), L"Registro exitoso", MB_OK | MB_SERVICE_NOTIFICATION);
		}
	}
	catch (Sql::SqlException e)
	{
		this->MessageBox(e.GetDescription(), L"Error", MB_OK | MB_ICONERROR);
	}

	conn.CloseSession();



}

void ConsultasTablas::insertModelo(wstring modelo) {

	wstring consulta;
	Sql::SqlConnection conn;
	int rows = 0;
	try
	{
		conn.OpenSession(hWnd, CONNECTION_STRING);
		Sys::Format(consulta, L"INSERT INTO modelo (nombre,activo) \
				VALUES('%s',true);", modelo.c_str());
		rows = conn.ExecuteNonQuery(consulta);
		if (rows != 1)
		{
			this->MessageBox(Sys::Convert::ToString(rows), L"Registro exitoso ", MB_OK | MB_ICONEXCLAMATION);
		}
	}
	catch (Sql::SqlException e)
	{
		this->MessageBox(e.GetDescription(), L"Error", MB_OK | MB_ICONERROR);
	}

	conn.CloseSession();




}
void ConsultasTablas::insertProducto(wstring producto) {

	wstring consulta;
	Sql::SqlConnection conn;
	int rows = 0;
	try
	{
		conn.OpenSession(hWnd, CONNECTION_STRING);
		Sys::Format(consulta, L"INSERT INTO producto (id_categoria, id_departamento,activo) \
				VALUES(%d, %d, true);", producto.c_str());
		rows = conn.ExecuteNonQuery(consulta);
		if (rows != 1)
		{
			this->MessageBox(Sys::Convert::ToString(rows), L"Registro exitoso ", MB_OK | MB_ICONEXCLAMATION);
		}
	}
	catch (Sql::SqlException e)
	{
		this->MessageBox(e.GetDescription(), L"Error", MB_OK | MB_ICONERROR);
	}

	conn.CloseSession();

}

void ConsultasTablas::insertRefacciones(wstring refacciones, int categorias_id) {

	wstring consulta;
	Sql::SqlConnection conn;
	int rows = 0;
	try
	{
		conn.OpenSession(hWnd, CONNECTION_STRING);
		Sys::Format(consulta, L"INSERT INTO refacciones (tipo, activo, id_categoria) \
				VALUES('%s',true, %d);", refacciones.c_str(), categorias_id);
		rows = conn.ExecuteNonQuery(consulta);
		if (rows != 1)
		{
			this->MessageBox(Sys::Convert::ToString(rows), L"Registro exitoso ", MB_OK | MB_ICONEXCLAMATION);
		}
	}
	catch (Sql::SqlException e)
	{
		this->MessageBox(e.GetDescription(), L"Error", MB_OK | MB_ICONERROR);
	}

	conn.CloseSession();




}
void ConsultasTablas::insertarCaracteristicas(wstring imei, int articulo) {
	wstring consulta;
	Sql::SqlConnection conn;
	int rows = 0;
	try
	{
		conn.OpenSession(hWnd, CONNECTION_STRING);
		Sys::Format(consulta, L"INSERT INTO caracteristicas (IMEI, id_articulo) \
				VALUES('%s', %d);", imei.c_str(),articulo);
		rows = conn.ExecuteNonQuery(consulta);
		if (rows != 1)
		{
			this->MessageBox(Sys::Convert::ToString(rows), L"Registro exitoso ", MB_OK | MB_ICONEXCLAMATION);
		}
	}
	catch (Sql::SqlException e)
	{
		this->MessageBox(e.GetDescription(), L"Error", MB_OK | MB_ICONERROR);
	}

	conn.CloseSession();
}
void ConsultasTablas::insertarcantidad(int cantidad, int departamento, int articulos) {
	wstring consulta;
	Sql::SqlConnection conn;
	int rows = 0;
	try
	{
		conn.OpenSession(hWnd, CONNECTION_STRING);
		Sys::Format(consulta, L"INSERT INTO cantidad (cantidad, id_deprtamento, id_articulo) \
				VALUES('%d',%d, %d);", cantidad, departamento, articulos);
		rows = conn.ExecuteNonQuery(consulta);
		if (rows != 1)
		{
			this->MessageBox(Sys::Convert::ToString(rows), L"Registro exitoso ", MB_OK | MB_ICONEXCLAMATION);
		}
	}
	catch (Sql::SqlException e)
	{
		this->MessageBox(e.GetDescription(), L"Error", MB_OK | MB_ICONERROR);
	}

	conn.CloseSession();
}
void ConsultasTablas::insertarticulos(wstring codigo, int modelo, int marca, double precio, wstring color, bool activo, int categoria) {
	wstring consulta;
	Sql::SqlConnection conn;
	int rows = 0;
	try
	{
		conn.OpenSession(hWnd, CONNECTION_STRING);
		Sys::Format(consulta, L"INSERT INTO articulos (codigo, id_modelo, id_marca, precio, color, activo, id_categoria, fecha) \
				VALUES('%s', %d, %d, %lf, '%s', true, %d, now());", codigo.c_str(), modelo, marca, precio, color.c_str(), categoria);
		rows = conn.ExecuteNonQuery(consulta);
		if (rows != 1)
		{
			this->MessageBox(Sys::Convert::ToString(rows), L"Registro exitoso ", MB_OK | MB_ICONEXCLAMATION);
		}
	}
	catch (Sql::SqlException e)
	{
		this->MessageBox(e.GetDescription(), L"Error", MB_OK | MB_ICONERROR);
	}

	conn.CloseSession();
}

//llenado de list box
void ConsultasTablas::llenarCategorias(Win::DropDownList ddCategorias, int large, bool activo) {
	wstring consulta;
	Sql::SqlConnection conn;
	int rows = 0;
	ddCategorias.DeleteAllItems();
	try
	{
		conn.OpenSession(hWnd, CONNECTION_STRING);
		Sys::Format(consulta, L"select nombre from categorias where activo = %d", activo);

		conn.ExecuteSelect(consulta, large, ddCategorias);



	}
	catch (Sql::SqlException e)
	{
		this->MessageBox(e.GetDescription(), L"Error", MB_OK | MB_ICONERROR);
	}

	conn.CloseSession();
}
void ConsultasTablas::llenarDptos(Win::DropDownList departamentos, int large, bool activo) {
	wstring consulta;
	Sql::SqlConnection conn;
	int rows = 0;
	departamentos.DeleteAllItems();
	try
	{
		conn.OpenSession(hWnd, CONNECTION_STRING);
		Sys::Format(consulta, L"select nombre from departamentos where activo = %d", activo);

		conn.ExecuteSelect(consulta, large, departamentos);



	}
	catch (Sql::SqlException e)
	{
		this->MessageBox(e.GetDescription(), L"Error", MB_OK | MB_ICONERROR);
	}

	conn.CloseSession();

}

//Sacar los ID

int ConsultasTablas::sacarIDModelo(wstring modelo)
{
	wstring consulta;
	Sql::SqlConnection conn;
	int modelo_id = 0;

	try
	{
		conn.OpenSession(hWnd, CONNECTION_STRING);
		Sys::Format(consulta, L"SELECT id_modelo\
			FROM modelo\
			WHERE nombre = '%s';", modelo.c_str());
		modelo_id = conn.GetInt(consulta);
	}
	catch (Sql::SqlException e)
	{
		this->MessageBox(e.GetDescription(), L"Error", MB_OK | MB_ICONERROR);
	}

	conn.CloseSession();
	return modelo_id;
}

int ConsultasTablas::sacarIDCategorias(wstring categorias)
{
	wstring consulta;
	Sql::SqlConnection conn;
	int categoria_id = 0;

	try
	{
		conn.OpenSession(hWnd, CONNECTION_STRING);
		Sys::Format(consulta, L"SELECT id_categoria\
			FROM categorias\
			WHERE nombre = '%s';", categorias.c_str());
		categoria_id = conn.GetInt(consulta);
	}
	catch (Sql::SqlException e)
	{
		this->MessageBox(e.GetDescription(), L"Error", MB_OK | MB_ICONERROR);
	}

	conn.CloseSession();
	return categoria_id;
}

int ConsultasTablas::sacarIDDptos(wstring dpto) {
	wstring consulta;
	Sql::SqlConnection conn;
	int categoria_id = 0;

	try
	{
		conn.OpenSession(hWnd, CONNECTION_STRING);
		Sys::Format(consulta, L"SELECT id_departamento\
			FROM departamentos\
			WHERE nombre = '%s';", dpto.c_str());
		categoria_id = conn.GetInt(consulta);
	}
	catch (Sql::SqlException e)
	{
		this->MessageBox(e.GetDescription(), L"Error", MB_OK | MB_ICONERROR);
	}

	conn.CloseSession();
	return categoria_id;


}

int ConsultasTablas::sacarIDMarca(wstring marca) {

	wstring consulta;
	Sql::SqlConnection conn;
	int marca_id = 0;

	try
	{
		conn.OpenSession(hWnd, CONNECTION_STRING);
		Sys::Format(consulta, L"SELECT id_marca\
			FROM marca\
			WHERE nombre = '%s';", marca.c_str());
		marca_id = conn.GetInt(consulta);
	}
	catch (Sql::SqlException e)
	{
		this->MessageBox(e.GetDescription(), L"Error", MB_OK | MB_ICONERROR);
	}

	conn.CloseSession();
	return marca_id;

}
