#include <iostream>
using namespace std;

template <typename T>
T maximo(T x, T y)
{
    return (x < y) ? y : x;
}

int main () {
	
	float a = maximo (5.5,6.4);
	cout << a << endl;
	return 0;
}
