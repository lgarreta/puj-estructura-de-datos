#include <fstream>
#include <string.h>
using namespace std;

// Crea tres registros y escribe a un archivo binario

typedef struct Estudiante {
		char codigo [10];
		char nombre [50];
};

int main () {
	Estudiante e1, e2, e3;
	strcpy (e1.codigo, "abcd"); strcpy (e1.nombre, "Julio Moncada");

	strcpy (e2.codigo, "1030"); strcpy (e2.nombre, "Tulio Ramirez");

	strcpy (e3.codigo, "1040"); strcpy (e3.nombre, "Maria Belenna");

	ofstream salida;
	salida.open ("estudiantes.bin", ios::binary);
	
	salida.write ((char *)&e1, sizeof (e1));
	salida.write ((char *)&e2, sizeof (e2));
	salida.write ((char *)&e3, sizeof (e3));

	salida.close ();
}
