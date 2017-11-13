#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
using namespace std;

// Lee del archivo binario "estudiantes.bin" el segundo y tercer registro

typedef struct Estudiante {
		char codigo [10];
		char nombre [50];
};

int main () {
	Estudiante e2, e3;
	ifstream in;
	in.open ("estudiantes.bin", ios::in|ios::binary);
	
	in.seekg (2*60,ios::beg);
	in.read ((char *)&e2, sizeof (e2));
	cout << e2.codigo <<", "<<e2.nombre << endl;

	in.seekg (1*60,ios::beg);
	in.read ((char *)&e3, sizeof (e2));
	cout << e3.codigo <<", "<<e3.nombre << endl;


	in.close ();
}
