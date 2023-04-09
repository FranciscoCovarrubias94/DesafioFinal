#pragma once
#include <string>
#include <vector>
#include "Cotizaciones.h"
#include "Prenda.h"

using namespace std;

class Vendedor {
private:
	string Nombre;
	string Apellido;
	string Codigo;
	vector<Cotizaciones> historial;
public:
	Vendedor(string, string, string);
	void hacerCotizacion(Prenda&, int, string);
	void mostrarHistorial();
	void mostrarInfo();
	void mostrarUltimaCotizacion();
	string getNombre();
	string getApellido();
	string getCodigo();
};

