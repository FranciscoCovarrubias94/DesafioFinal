#include "Prenda.h"
#include <string>
#include <iostream>

using namespace std;

Prenda::Prenda(int i1, double i2, int i3) {
	Calidad = i1;
	Precio = i2;
	Stock = i3;
}

int Prenda::getStock() {
	return Stock;
}