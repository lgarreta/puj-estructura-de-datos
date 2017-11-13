#include <iostream>
#include <fstream>
#include <stdlib.h>

// Verificacion de erorres y final de archivo
// Lectura-Escritura simple archivos.txt

using namespace std;

main(void) {
    ifstream inputfile;
    ofstream outputfile;
    char chs;
    inputfile.open ("archivoparaleer.txt");
    outputfile.open("archivoparaescribir.txt");
    if (inputfile.fail () == true or outputfile.fail()==true) { // Verificacion
        cout << "Error abriendo archivos " << endl;
        exit (1);
    }

    while (!inputfile.eof()) {  // Mientras no llegue al final
        nputfile.get(chs);
        if (!inputfile.eof()) { // Mientras no esté en el final
            cout<<chs;
            outputfile<<chs;
        }
    }
    inputfile.close();
    outputfile.close();
}
