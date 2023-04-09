#include "Tienda.h"
#include <string>

using namespace std;

Tienda::Tienda(string s1, string s2) {
	Nombre = s1;
	Direccion = s2;
}

string Tienda::getNombre() {
	return Nombre;
}

string Tienda::getDireccion() {
	return Direccion;
}

int Tienda::stockPrenda(string s1, string s2, string s3) {
	int size = Prendas.size();
	int identi1 = stoi(s1);
	int identi2 = stoi(s2);
	int identi3 = stoi(s3);
	for (int i = 0; i < size; i++) {
		if (identificadorPrendas[i][0] == identi1 && identificadorPrendas[i][1] == identi2 && identificadorPrendas[i][2] == identi3) {
			return Prendas[i].getStock();
		}
	}
}

int Tienda::calcularPrecio(int chupin, int calidad, int precioInicial) {
	int preciofinal = precioInicial;
	if (chupin == 1) {
		preciofinal = preciofinal * 0.88;
	}
	if (calidad == 2) {
		preciofinal = preciofinal * 1.3;
	}
	return preciofinal;
}

int Tienda::calcularPrecio(int manga, int cuello, int calidad, int precioInicial) {
	int preciofinal = precioInicial;
	if (manga = 1) {
		preciofinal = preciofinal * 0.9;
	}
	if (cuello == 1) {
		preciofinal = preciofinal * 1.03;
	}
	if (calidad == 2) {
		preciofinal = preciofinal * 1.3;
	}
	return preciofinal;
}

void Tienda::agregarPrenda(Prenda prenda, int iterador, int i1, int i2, int i3) {
	Prendas.push_back(prenda);
	identificadorPrendas[iterador][0] = i1;
	identificadorPrendas[iterador][1] = i2;
	identificadorPrendas[iterador][2] = i3;
}

void Tienda::agregarVendedor(Vendedor vendedor) {
	v1.push_back(vendedor);
}