// Ejemplo de uso de la librerias iostream y math
#include <iostream>  // cin, cout
#include <math.h>    // pow

using namespace std; // strings

int main () {
	int valorBase;
	int valorExponente;

	// Lee desde el teclado
	cout << "Ingrese valor para la base: "  ;
	cin >>  valorBase;

	cout << "Ingrese valor para el exponente: " ;
	cin >>  valorExponente;

	int valorPotencia = pow (valorBase, valorExponente);
	cout << "La potencia es: " << valorPotencia << endl;
	
	return 0;
}
