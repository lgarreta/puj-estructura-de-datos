#include<iostream>

using namespace std;
struct nodo {
    int data;
    nodo *next;
};

class lista {
protected:
    nodo *head, *tail;

		nodo* crearnodo(int valor){
			nodo *n = new nodo;
			n-> data = valor;
			n-> next = NULL;
		}

public:
  lista();
	void adicionar(int valor);
	void insertar(int pos, int valor);
	void mostrarse();
	void eliminar(int pos);
	int getElemento (int x);
	void setElemento (int valor, int x);
	int longitud ();
	bool estaVacia ();
	int buscarElemento (int valor);
	bool existeElemento (int valor);
};
