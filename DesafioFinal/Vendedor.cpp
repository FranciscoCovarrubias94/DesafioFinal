#include "Vendedor.h"
#include "Prenda.h"
#include <chrono>
#include <iostream>

using namespace std;

Vendedor::Vendedor(string s1, string s2, string s3) {
	Nombre = s1;
	Apellido = s2;
	Codigo = s3;
}

string Vendedor::getNombre() {
	return Nombre;
}

string Vendedor::getApellido() {
	return Apellido;
}

string Vendedor::getCodigo() {
	return Codigo;
}

void Vendedor::hacerCotizacion(Prenda& prenda, int cantidad, string nombrePrenda) {
	//Codigo para determinar fecha y hora al momento de hacer la cotizacion
	auto fechayhora = chrono::system_clock::now();
	auto end_time = chrono::system_clock::to_time_t(fechayhora);
	char tmBuff[40];
	ctime_s(tmBuff, sizeof(tmBuff), &end_time);

	int size = historial.size() + 1;
	int precioUnitario = prenda.Precio;

	auto cotizacion = new Cotizaciones(size, tmBuff, Codigo, nombrePrenda, cantidad, precioUnitario);
	historial.push_back(*cotizacion);
}

void Vendedor::mostrarHistorial() {
	int size = historial.size();
	if (size == 0) {
		cout << "No hay cotizaciones para mostrar" << endl;
	}
	else {
		for (int i = 0; i < size; i++) {
			cout << "-----------------------------------------------" << endl;
			historial[i].mostrarInfo();
			cout << endl;
		}
	}
}

void Vendedor::mostrarUltimaCotizacion() {
	int size = historial.size();
	historial[size - 1].mostrarInfo();
	cout << endl;
}