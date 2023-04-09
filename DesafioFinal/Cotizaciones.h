#pragma once
#include <string>
#include <vector>

using namespace std;

class Cotizaciones {
private:
	int Identificacion;
	string s1;
	string FechaYHora;
	string Codigo;
	string Prenda;
	double unitario;
	int Cantidad;
	double total = 0;
public:
	Cotizaciones(int, string, string, string, int, double);
	void mostrarInfo();
};