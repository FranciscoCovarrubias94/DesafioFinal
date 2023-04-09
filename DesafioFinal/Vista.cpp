#include "Vista.h"
#include "Presentador.h"
#include <iostream>
#include <string>

using namespace std;

Vista::Vista() {
	p_presentador = new Presentador(this);
	mostrarMenuPrincipal();
}

Vista::~Vista() {
	delete p_presentador;
}

void Vista::mostrarMenuPrincipal() {
	string opcion;
	bool condicionDeSalida = false;
	string nombreTienda = p_presentador->getNombreTienda();
	string direccionTienda = p_presentador->getDireccionTienda();
	string nombreVendedor = p_presentador->getNombreVendedor();
	string apellidoVendedor = p_presentador->getApellidoVendedor();
	string codigoVendedor = p_presentador->getCodigoVendedor();

	do {
		system("cls");
		cout << "COTIZADOR EXPRES - MENU PRINCIAPL" << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << nombreTienda << " | " << direccionTienda << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << nombreVendedor << " " << apellidoVendedor << " | " << codigoVendedor << endl;
		cout << "-------------------------------------------------------" << endl << endl;
		cout << "SELECCIONE UNA OPCION DEL MENU:" << endl << endl;
		cout << "1) Historial de Cotizaciones" << endl;
		cout << "2) Realizar Cotizacion" << endl;
		cout << "3) Salir" << endl;
		cin >> opcion;
		decidirSiguienteMenu(opcion, condicionDeSalida);
		cout << "Presione la tecla ENTER para continuar..." << endl;
		cin.get();
	} while (!condicionDeSalida);
}

void Vista::decidirSiguienteMenu(string opcion, bool& exit) {
	if (opcion == "1") {
		system("cls");
		cout << "COTIZADOR EXPRES - HISTORIAL DE COTIZACIONES" << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "Presiona ENTER para volver al menu principal" << endl;
		cout << "-------------------------------------------------------" << endl << endl;
		p_presentador->mostrarHistorial();
		cin.get();
	}
	else if (opcion == "2") {
		p_presentador->Cotizar();
		cin.get();
	}
	else if (opcion == "3") {
		exit = true;
		cin.get();
	}
	else {
		cout << "No se marco una opcion valida, ingrese nuevamente" << endl;
		cin.get();
	}
}