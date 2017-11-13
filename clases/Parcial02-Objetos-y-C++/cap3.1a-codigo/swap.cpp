#include <iostream>  
using namespace std; 

// Intercambia los valores de a y b
void swap1 (int a, int b);
void swap2 (int &a, int &b);

int main () {
	int x = 10, y = 20;
	swap1 (x,y);
	cout << "Valor x: " << x << " Valor y: " << y << endl;

	swap2 (x,y);
	cout << "Valor x: " << x << " Valor y: " << y << endl;

	return 0;
}

void swap1 (int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
}
void swap2 (int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}
