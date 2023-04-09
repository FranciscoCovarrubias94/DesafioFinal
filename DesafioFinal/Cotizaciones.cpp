#include "Cotizaciones.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

Cotizaciones::Cotizaciones(int i1, string s1, string s2, string s3, int i2, double precio) {
	Identificacion = i1;
	FechaYHora = s1;
	Codigo = s2;
	Prenda = s3;
	unitario = precio;
	Cantidad = i2;
	total = i2 * precio;
}

void Cotizaciones::mostrarInfo() {
	cout << "Identificacion de la compra: " << setfill('0') << setw(3) << Identificacion << endl;
	cout << "Fecha y Hora de la cotizacion: " << FechaYHora;
	cout << "Codigo del Vendedor: " << Codigo << endl;
	cout << "Prenda cotizada: " << Prenda << endl;
	cout << "Precio unitario: " << unitario << endl;
	cout << "Cantidad de unidades contizadas: " << Cantidad << endl;
	cout << "Precio final: " << total << endl;
}