#pragma once

class Prenda {
public:
	int Calidad; //1 = estandar, 2 = Premium
	int Precio;
	int Stock;
	Prenda(int, int, int);
	int getStock();
	friend class Vendedor;
};


