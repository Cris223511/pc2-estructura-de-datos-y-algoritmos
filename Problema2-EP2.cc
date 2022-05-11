#include <stdio.h>
#include <iostream>
#include <stdlib.h> 
#include <string.h>
using namespace std;

typedef struct tipo_direccion {
    char calle [50];
	int numero;
    char barrio [20];
    char ciudad [30];
    char distrito [30];
    long int codigo_postal;
}tdireccion;

typedef struct ficha_personal {
    char nombre [50];
    long int telefono;
    struct tipo_direccion direccion;
}tPersonal;

typedef struct _lista {   
    tPersonal *fichas;       
    int tamanho;            
}tLista;

tLista ad_reg(tLista) {
	cout<<"ad_reg";

	tab[i] = (tLista*)malloc(sizeof(tLista));
		
	cout<<"Ingrese el nombre: ";
	scanf("%s", &tLista[i]->nombre);
	
	cout<<"Ingrese el telefono: ";
	scanf("%d", &tLista[i]->telefono);
	
	cout<<"Ingrese la calle: ";
	scanf("%s", &tLista[i]->calle);
	
	cout<<"Ingrese la numero: ";
	scanf("%d", &tLista[i]->numero);
	
	cout<<"Ingrese la barrio: ";
	scanf("%s", &tLista[i]->barrio);
	
	cout<<"Ingrese la ciudad: ";
	scanf("%s", &tLista[i]->ciudad);
	
	cout<<"Ingrese la distrito: ";
	scanf("%s", &tLista[i]->distrito);
	
	cout<<"Ingrese la codigo postal: ";
	scanf("%d", &tLista[i]->postal);
	
	cout<<"\n";
};

void find(tLista) {
	cout<<"find";
};

void altera(tLista) {
	cout<<"altera";
};

tLista le_archivo(FILE *) {
	cout<<"le_archivo";
	void file = new FILE;
	FILE.push();
};

void salva(FILE *, tLista) {
	FILE.push(tLista);
};

void le_reg(tPersonal *) {
	tPersonal.read();
	if(tPersonal.readLine() == "\n") {
		tPersonal.readLine().delete();
	};
};

void le_str(char *s, int n, FILE *arq) {
	tPersonal.read();
	for(int i=0; i<n; i++) {
		if(tPersonal.readLine(i) == "\n") {
			tPersonal.readLine().delete();
		};	
	};	
};

void imprime(tPersonal) {
	cout<<tPersonal;
};

int main() {
	int opcion;
	char c[30];
	tLista lista;
	
	do {
		printf("\n\n 1 - Inserta un nuevo registro");
		printf("\n 2 - Busca registro existente");
		printf("\n 3 - Modifica registro");
		printf("\n 0 - Salir del programa");
		printf("\n\n Ingrese una opcion: ");
		scanf("%d%c", &opcion, &c);      
	  	switch(opcion) {
	    	case 1:
	        	ad_reg(lista);
	    		break;
	    	case 2:
          		find(lista);
    			break;
    		case 3:
          		altera(lista);
    			break;
  	  	}
  	}
	while (opcion != 0);

	return 0;
};