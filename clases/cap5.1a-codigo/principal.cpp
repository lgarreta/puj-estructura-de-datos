#include <iostream>
using namespace std;
#include "algoritmos.h"

void probarPotencia ();
int main () {
	int opcion = -1;
	while (opcion != 0) {
		cout << endl << "Seleccione 0:Salir, 1:Potencia, 2:Busqueda. Cual opcion: ";
		cin >> opcion;
		switch (opcion) {
			case 0: return 0;
			case 1: probarPotencia (); break;
		}
	}
	return 0;
}

void probarPotencia () {
	int base, exponente, resultado;
	cout << "Ingrese base: ";
	cin >> base;
	cout << "Ingrese exponente: ";
	cin >> exponente;
	resultado = potencia (base, exponente);
	cout << "El resultado fue: " << resultado << endl;
}

