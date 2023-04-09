#pragma once
#include <string>
#include "Vendedor.h"
#include "Tienda.h"

using namespace std;

class Vista;

class Presentador {
private:
	Vista* p_vista = nullptr;
	Tienda* p_tienda = nullptr;
	Vendedor* p_vendedor = nullptr;
public:
	Presentador(Vista*);
	~Presentador();
	string getNombreTienda();
	string getDireccionTienda();
	string getNombreVendedor();
	string getApellidoVendedor();
	string getCodigoVendedor();
	void mostrarHistorial();
	void Cotizar();
	void Cotizar2(string, bool&);
	void Cotizar3(string, bool&);
	void Cotizar3(string, string, bool&);
	void Cotizar4(string, string, int, bool&);
	void Cotizar4(string, string, string, int, bool&);
};