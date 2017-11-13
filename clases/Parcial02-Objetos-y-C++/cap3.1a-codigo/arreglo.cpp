#include <iostream>  
using namespace std; 

// Intercambia los valores de a y b
void negarArreglo (int arreglo [], int n);

int main () {
	int arregloEjemplo[] = {1,2,3,4,5};
	int n = 5;

	negarArreglo (arregloEjemplo, n);
	for (int i=0; i < n; i++) 
		cout << arregloEjemplo [i] << ", ";

	cout << endl;

	return 0;
}


void negarArreglo (int *arreglo, int n) {
	for (int i=0; i < n; i++) 
		arreglo [i] *= -1;
}
