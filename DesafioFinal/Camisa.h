#pragma once
#include "Prenda.h"

class Camisa : public Prenda {
private:
	int Manga; //1 = corta, 2 = larga
	int cuello; //1= mao, 2 = comun
public:
	Camisa(int Manga, int Cuello, const Prenda& var1) : Prenda(var1.Calidad, var1.Precio, var1.Stock) { this->Manga = Manga; this->cuello = Cuello; }
};