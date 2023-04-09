#pragma once
#include "Prenda.h"

class Pantalon : public Prenda {
private:
	int tipo; //1 = chupin, 2 = comun;
public:
	Pantalon(int tipo, const Prenda& var1) : Prenda(var1.Calidad, var1.Precio, var1.Stock) { this->tipo = tipo; }
};