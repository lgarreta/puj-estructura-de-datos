#include <iostream>
using namespace std;

#include "tablahash.h"
int main () {
	TablaHash tblh(11);

	tblh.adicionar (10);
	tblh.adicionar (15);
	tblh.adicionar (25);

	tblh.mostrarse ();

	cout << tblh.existe (11);


	return 0;
}
