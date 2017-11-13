#include <iostream>
#include <fstream>
#include <stdlib.h>

// Lectura-Escritura simple archivos.txt
// Lectura caracterxcaracter

using namespace std;

main(void) {
    ifstream inputfile;
    ofstream outputfile;
    char chs;
    inputfile.open ("archivoparaleer.txt");
    outputfile.open("archivoparaescribir.txt");

    while (!inputfile.eof()) {
        inputfile.get(chs);
        if (!inputfile.eof()) {
            cout<<chs;
            outputfile<<chs;
        }
    }
    inputfile.close();
    outputfile.close();
}
