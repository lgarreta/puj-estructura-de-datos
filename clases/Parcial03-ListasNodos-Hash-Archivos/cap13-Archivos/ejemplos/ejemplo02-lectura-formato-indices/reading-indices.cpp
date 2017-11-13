#include <iostream>
#include <fstream>
#include <stdlib.h>

// Lectura de cada linea el entero y la cadena en dos variables

using namespace std;

main(void) {
    ifstream inputfile;
		int indice;
		string palabra;

    inputfile.open ("archivo-indices.txt");
		/* 0 car
		 * 1 green
		 * 2 blue
		 * 3 red
		 * 4 cat
		 */

    while (!inputfile.eof()) {
        inputfile >> indice >> palabra;

				cout << "Indice es: " << indice;
				cout << "  Palabra es: " << palabra;
				cout << endl;
    }
    inputfile.close();
}
