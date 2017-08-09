// Ejemplo de uso de la librerias iostream y string (c++)
#include <iostream>  // cin, cout, cinline

using namespace std; // string (c++)

int main () {
	string usuario;
	string clave;
	string claveInterna="hola1233";

	cout << "Ingrese usuario y clave: ";
	cin >> usuario >> clave;

	// Longitud y Comparación (==, !=)
	if (clave.length () < 5 && clave != claveInterna) {
		cout << "Clave Incorrecta";
		return -1;
	}

	// Concatenacion
	string userKey = usuario + clave;
	cout << "Usuario " << userKey << " logeado" << endl;

	return 0;
}
