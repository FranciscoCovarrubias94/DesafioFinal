#pragma once

class Prenda {
public:
	int Calidad; //1 = estandar, 2 = Premium
	double Precio;
	int Stock;
	Prenda(int, double, int);
	int getStock();
	friend class Vendedor;
};


