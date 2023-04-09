#pragma once
#include <string>
#include "Presentador.h"

using namespace std;

class Presentador;

class Vista {
private:
	Presentador* p_presentador = nullptr;
public:
	Vista();
	~Vista();
	void mostrarMenuPrincipal();
	void decidirSiguienteMenu(string, bool&);
};

