#pragma once
#include <string>
#include "Prenda.h"
#include "Vendedor.h"
#include <vector>

using namespace std;

class Tienda {
private:
	string Nombre;
	string Direccion;
	int identificadorPrendas[12][3];
	vector<Prenda> Prendas;
	vector<Vendedor> v1;
public:
	Tienda(string, string);
	void agregarPrenda(Prenda, int, int, int, int);
	void agregarVendedor(Vendedor);
	int stockPrenda(string, string, string);
	double calcularPrecio(int, int, int);
	double calcularPrecio(int, int, int, int);
	string getNombre();
	string getDireccion();
};
