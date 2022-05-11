#include <iostream>
#include <stdlib.h> 
using namespace std;

struct Producto {
    char nombre[30]; 
    int codigo;      
    double precio;  
};

typedef struct Producto producto;
producto *tab[100];

void inicio(int n, producto ** tab) {
	for(int i=0; i<n; i++)
		tab[i] = NULL;
}

void registrar(int n, producto ** tab, int i) {
	if(i < 0 || i >= n)	{
		cout<<"Fuera del limite\n";
		exit(1); 
	}	

	if(tab[i] == NULL)
		tab[i] = (producto*)malloc(sizeof(producto));
	
	cout<<"Ingrese el nombre del producto: ";
	scanf("%s", &tab[i]->nombre);
	
	cout<<"Ingrese el codigo del producto: ";
	scanf("%d", &tab[i]->codigo);
	
	cout<<"Ingrese el precio del producto: ";
	scanf("%f", &tab[i]->precio);
	
	cout<<"\n";
}




void imprimir(int n, producto ** tab, int i) {
	if(i < 0 || i >= n) {
		cout<<"Fuera del limite\n";
		exit(1); 
	}

	if(tab[i] != NULL) {
		printf("\nNombre: %s\n", tab[i]->nombre);
		printf("Precio: %f\n", tab[i]->precio);
		printf("Código: %d\n", tab[i]->codigo);

	}
}


void imprimeTodo(int n, producto ** tab) {
	for(int i=0; i<n; i++) {
		imprimir(n, tab, i);
	}
}

int main() {
	producto *tab[10];
	inicio(10, tab);
	for(int i=0; i<10; i++) {
		registrar(10, tab, i);
	}
	imprimeTodo(10, tab);
	return 0;
}