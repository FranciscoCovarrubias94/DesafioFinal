#include "Presentador.h"
#include "Vista.h"
#include "Vendedor.h"
#include "Tienda.h";
#include "Vendedor.h"
#include "Camisa.h"
#include "Pantalon.h"
#include <iostream>

using namespace std;

string pasarNombreCamisa(int manga, int cuello, int calidad) {
	string nombre = "Camisa";
	if (manga == 1) {
		nombre = nombre + " - Manga corta";
	}
	else {
		nombre = nombre + " - Manga Larga";
	}

	if (cuello == 1) {
		nombre = nombre + " - Cuello Mao";
	}
	else {
		nombre = nombre + " - Cuello Normal";
	}

	if (calidad == 1) {
		nombre = nombre + " - Estandar";
	}
	else {
		nombre = nombre + " - Premium";
	}

	return nombre;
}

string pasarNombrePantalon(int chupin, int calidad) {
	string nombre = "Pantalon";
	if (chupin == 1) {
		nombre = nombre + " - chupin";
	}
	else {
		nombre = nombre + " - no chupin";
	}

	if (calidad == 1) {
		nombre = nombre + " - Estandar";
	}
	else {
		nombre = nombre + " - Premium";
	}

	return nombre;
}

Presentador::Presentador(Vista* vista) :
	p_vista(vista),
	p_tienda(new Tienda("Wallmart", "Teniente Bello 2873")),
	p_vendedor(new Vendedor("Rafael", "Espinoza", "ER054")) {
	Camisa camisaMangaCortaCuelloMao1(1, 1, Prenda(1, 0, 100));
	Camisa camisaMangaCortaCuelloMao2(1, 1, Prenda(2, 0, 100));
	Camisa camisaMangaCortaCuelloNormal1(1, 2, Prenda(1, 0, 150));
	Camisa camisaMangaCortaCuelloNormal2(1, 2, Prenda(2, 0, 150));
	Camisa camisaMangaLargaCuelloMao1(2, 1, Prenda(1, 0, 75));
	Camisa camisaMangaLargaCuelloMao2(2, 1, Prenda(2, 0, 75));
	Camisa camisaMangaLargaCuelloNormal1(2, 2, Prenda(1, 0, 175));
	Camisa camisaMangaLargaCuelloNormal2(2, 2, Prenda(2, 0, 175));

	Pantalon pantalonChupin1(1, Prenda(1, 0, 750));
	Pantalon pantalonChupin2(1, Prenda(2, 0, 750));
	Pantalon pantalonNormal1(2, Prenda(1, 0, 250));
	Pantalon pantalonNormal2(2, Prenda(2, 0, 250));

	int pos = 0;
	p_tienda->agregarPrenda(camisaMangaCortaCuelloMao1, pos, 1, 1, 1);
	pos++;
	p_tienda->agregarPrenda(camisaMangaCortaCuelloMao2, pos, 1, 1, 2);
	pos++;
	p_tienda->agregarPrenda(camisaMangaCortaCuelloNormal1, pos, 1, 2, 1);
	pos++;
	p_tienda->agregarPrenda(camisaMangaCortaCuelloNormal2, pos, 1, 2, 2);
	pos++;
	p_tienda->agregarPrenda(camisaMangaLargaCuelloMao1, pos, 2, 1, 1);
	pos++;
	p_tienda->agregarPrenda(camisaMangaLargaCuelloMao2, pos, 2, 1, 2);
	pos++;
	p_tienda->agregarPrenda(camisaMangaLargaCuelloNormal1, pos, 2, 2, 1);
	pos++;
	p_tienda->agregarPrenda(camisaMangaLargaCuelloNormal2, pos, 2, 2, 2);
	pos++;

	p_tienda->agregarPrenda(pantalonChupin1, pos, 1, 1, 0);
	pos++;
	p_tienda->agregarPrenda(pantalonChupin2, pos, 1, 2, 0);
	pos++;
	p_tienda->agregarPrenda(pantalonNormal1, pos, 2, 1, 0);
	pos++;
	p_tienda->agregarPrenda(pantalonNormal2, pos, 2, 2, 0);
}

Presentador::~Presentador() {
	delete p_tienda;
	delete p_vendedor;
}

string Presentador::getNombreTienda() {
	return p_tienda->getNombre();
}

string Presentador::getDireccionTienda() {
	return p_tienda->getDireccion();
}

string Presentador::getNombreVendedor() {
	return p_vendedor->getNombre();
}

string Presentador::getApellidoVendedor() {
	return p_vendedor->getApellido();
}

string Presentador::getCodigoVendedor() {
	return p_vendedor->getCodigo();
}

void Presentador::Cotizar() {
	string opcion;
	bool Salida = false;

	do {
		system("cls");
		cout << "COTIZADOR EXPRES - COTIZAR" << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "Presiona 3 para volver al menu principal" << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "PASO 1: Selecciona la prenda a cotizar:" << endl;
		cout << "1) Camisa" << endl;
		cout << "2) Pantalon" << endl;
		cout << "-------------------------------------------------------" << endl;
		cin >> opcion;
		Cotizar2(opcion, Salida);
	} while (!Salida);
}

void Presentador::Cotizar2(string s1, bool& exit) {
	string opcion;
	if (s1 == "1") {
		do {
			system("cls");
			cout << "COTIZADOR EXPRES - COTIZAR" << endl;
			cout << "-------------------------------------------------------" << endl;
			cout << "Presiona 3 para volver al menu principal" << endl;
			cout << "-------------------------------------------------------" << endl;
			cout << "PASO 2.1: La camisa a cotizar ?Es manga corta?:" << endl;
			cout << "1) Si" << endl;
			cout << "2) No" << endl;
			cout << "-------------------------------------------------------" << endl;
			cin >> opcion;
			if (opcion == "1" || opcion == "2") {
				string opcion2;
				do {
					system("cls");
					cout << "COTIZADOR EXPRES - COTIZAR" << endl;
					cout << "-------------------------------------------------------" << endl;
					cout << "Presiona 3 para volver al menu principal" << endl;
					cout << "-------------------------------------------------------" << endl;
					cout << "PASO 2.2: La camisa a cotizar ?Es cuello mao?" << endl;
					cout << "1) Si" << endl;
					cout << "2) No" << endl;
					cout << "-------------------------------------------------------" << endl;
					cin >> opcion2;
					if (opcion2 == "1" || opcion2 == "2") {
						Cotizar3(opcion, opcion2, exit);
					}
					else if (opcion2 == "3") {
						exit = true;
					}
					else {
						cout << "No se marco una opcion valida, ingrese nuevamente" << endl;
						cin.get();
						cin.get();
					}
				} while (!exit);
			}
			else if (opcion == "3") {
				exit = true;
			}
			else {
				cout << "No se marco una opcion valida, ingrese nuevamente" << endl;
				cin.get();
				cin.get();
			}
		} while (!exit);
	}
	else if (s1 == "2") {
		do {
			system("cls");
			cout << "COTIZADOR EXPRES - COTIZAR" << endl;
			cout << "-------------------------------------------------------" << endl;
			cout << "Presiona 3 para volver al menu principal" << endl;
			cout << "-------------------------------------------------------" << endl;
			cout << "PASO 2: El Pantalon a cotizar ?Es Chupin?" << endl;
			cout << "1) Si" << endl;
			cout << "2) No" << endl;
			cout << "-------------------------------------------------------" << endl;
			cin >> opcion;
			if (opcion == "1" || opcion == "2") {
				Cotizar3(opcion, exit);
			}
			else if (opcion == "3") {
				exit = true;
			}
			else {
				cout << "No se marco una opcion valida, ingrese nuevamente" << endl;
				cin.get();
				cin.get();
			}
		} while (!exit);
	}
	else if (s1 == "3") {
		exit = true;
	}
	else {
		cout << "No se marco una opcion valida, ingrese nuevamente" << endl;
		cin.get();
		cin.get();
	}
}

void Presentador::Cotizar3(string s1, bool& exit) {
	string opcion;

	do {
		system("cls");
		cout << "COTIZADOR EXPRES - COTIZAR" << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "Presiona 3 para volver al menu principal" << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "PASO 3: Seleccione la Calidad de la prenda" << endl;
		cout << "1) Estandar" << endl;
		cout << "2) Premium" << endl;
		cout << "-------------------------------------------------------" << endl;
		cin >> opcion;
		if (opcion == "1" || opcion == "2") {
			string aux1;
			int precio = 0;
			system("cls");
			cout << "COTIZADOR EXPRES - COTIZAR" << endl;
			cout << "-------------------------------------------------------" << endl;
			cout << "Presiona 3 para volver al menu principal" << endl;
			cout << "-------------------------------------------------------" << endl;
			cout << "PASO 4: Ingrese el precio unitario de la prenda a cotizar" << endl;
			while (precio == 0) {
				cin >> aux1;
				if (aux1 != "3") {
					try {
						precio = stoi(aux1);
						Cotizar4(s1, opcion, precio, exit);
					}
					catch (...) {
						cout << "Se esperaba un numero, ingrese nuevamente" << endl;
					}
				}
				else {
					exit = true;
					precio = -1;
				}
			}
		}
		else if (opcion == "3") {
			exit = true;
		}
		else {
			cout << "No se marco una opcion valida, ingrese nuevamente" << endl;
			cin.get();
			cin.get();
		}
	} while (!exit);
}

void Presentador::Cotizar3(string s1, string s2, bool& exit) {
	string opcion;

	do {
		system("cls");
		cout << "COTIZADOR EXPRES - COTIZAR" << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "Presiona 3 para volver al menu principal" << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "PASO 3: Seleccione la Calidad de la prenda" << endl;
		cout << "1) Estandar" << endl;
		cout << "2) Premium" << endl;
		cout << "-------------------------------------------------------" << endl;
		cin >> opcion;
		if (opcion == "1" || opcion == "2") {
			string aux1;
			int precio = 0;
			system("cls");
			cout << "COTIZADOR EXPRES - COTIZAR" << endl;
			cout << "-------------------------------------------------------" << endl;
			cout << "Presiona 3 para volver al menu principal" << endl;
			cout << "-------------------------------------------------------" << endl;
			cout << "PASO 4: Ingrese el precio unitario de la prenda a cotizar" << endl;
			while (precio == 0) {
				cin >> aux1;
				if (aux1 != "3") {
					try {
						precio = stoi(aux1);
						Cotizar4(s1, s2, opcion, precio, exit);
						//cout << "Se logro guardar el precio" << endl;
						//cin.get(); cin.get();

					}
					catch (...) {
						cout << "Se esperaba un numero, ingrese nuevamente" << endl;
					}
				}
				else {
					exit = true;
					precio = -1;
				}
			}
		}
		else if (opcion == "3") {
			exit = true;
		}
		else {
			cout << "No se marco una opcion valida, ingrese nuevamente" << endl;
			cin.get();
			cin.get();
		}
	} while (!exit);
}

void Presentador::Cotizar4(string s1, string s2, int i1, bool& exit) {
	string opcion;
	int cantidad = -1;
	int stock = p_tienda->stockPrenda(s1, s2, "0");

	do {
		system("cls");
		cout << "COTIZADOR EXPRES - COTIZAR" << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "Presiona 0 para volver al menu principal" << endl;
		cout << "-------------------------------------------------------" << endl << endl;
		cout << "INFORMACION" << endl;
		cout << "EXISTE " << stock << " CANTIDAD DE UNIDADES DE LA PRENDA SELECCIONADA" << endl << endl;
		cout << "PASO 5: Ingrese la cantidad de unidades a cotizar" << endl;
		while (cantidad == -1) {
			cin >> opcion;
			if (opcion != "0") {
				try {
					cantidad = stoi(opcion);
					if (cantidad > stock) {
						cout << "No es posible hacer una cotizacion sobre una cantidad de stock no disponible" << endl;
						cout << "Ingrese nuevamente la cantidad de unidades a cotizar" << endl;
						cantidad = -1;
					}
					else {
						int chupin = stoi(s1);
						int calidad = stoi(s2);
						int precio = p_tienda->calcularPrecio(chupin, calidad, i1);
						Pantalon pantalon(chupin, Prenda(calidad, precio, 1));
						string nombrePantalon = pasarNombrePantalon(chupin, calidad);
						p_vendedor->hacerCotizacion(pantalon, cantidad, nombrePantalon);
						system("cls");
						cout << "COTIZADOR EXPRES - COTIZAR" << endl;
						cout << "-------------------------------------------------------" << endl;
						cout << "Presiona ENTER para volver al menu principal" << endl;
						cout << "-------------------------------------------------------" << endl << endl;
						p_vendedor->mostrarUltimaCotizacion();
						exit = true;
					}
				}
				catch (...) {
					cout << "Se esperaba un numero, ingrese nuevamente" << endl;
				}
			}
			else {
				exit = true;
				cantidad = -2;
			}
		}
	} while (!exit);
}

void Presentador::Cotizar4(string s1, string s2, string s3, int i1, bool& exit) {
	string opcion;
	int cantidad = -1;
	int stock = p_tienda->stockPrenda(s1, s2, s3);

	do {
		system("cls");
		cout << "COTIZADOR EXPRES - COTIZAR" << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "Presiona 0 para volver al menu principal" << endl;
		cout << "-------------------------------------------------------" << endl << endl;
		cout << "INFORMACION" << endl;
		cout << "EXISTE " << stock << " CANTIDAD DE UNIDADES DE LA PRENDA SELECCIONADA" << endl << endl;
		cout << "PASO 5: Ingrese la cantidad de unidades a cotizar" << endl;
		while (cantidad == -1) {
			cin >> opcion;
			if (opcion != "0") {
				try {
					cantidad = stoi(opcion);
					if (cantidad > stock) {
						cout << "No es posible hacer una cotizacion sobre una cantidad de stock no disponible" << endl;
						cout << "Ingrese nuevamente la cantidad de unidades a cotizar" << endl;
						cantidad = -1;
					}
					else {
						int manga = stoi(s1);
						int cuello = stoi(s2);
						int calidad = stoi(s3);
						int precio = p_tienda->calcularPrecio(manga, cuello, calidad, i1);
						Camisa camisa(manga, cuello, Prenda(calidad, precio, 1));
						string nombrePrenda = pasarNombreCamisa(manga, cuello, calidad);
						p_vendedor->hacerCotizacion(camisa, cantidad, nombrePrenda);
						system("cls");
						cout << "COTIZADOR EXPRES - COTIZAR" << endl;
						cout << "-------------------------------------------------------" << endl;
						cout << "Presiona ENTER para volver al menu principal" << endl;
						cout << "-------------------------------------------------------" << endl << endl;
						p_vendedor->mostrarUltimaCotizacion();
						exit = true;
					}
				}
				catch (...) {
					cout << "Se esperaba un numero, ingrese nuevamente" << endl;
				}
			}
			else {
				exit = true;
				cantidad = -2;
			}
		}
	} while (!exit);
}

void Presentador::mostrarHistorial() {
	p_vendedor->mostrarHistorial();
}

