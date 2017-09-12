//Operaciones Infijas a Posfijas
#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct NODO{
	char nombre[10];
	struct NODO *sig;
}typedef Charg;

Charg *tope = NULL;
Charg *pila = NULL;
//Prototipos
int Ingresa_Operacion();
int Analiza_Operacion();
int Operacion_Posfija();

int main(){
	int m;
	cout<<"\tBienvenido!!";
	cout<<"\n   Elije una opcion:\n 1.- Ingresar Operacion\n 2.- Analizar Operacion\n 3.- Operacion Posfija\n";
	cin>>m;
	switch(m){
		case 1: Ingresa_Operacion();
		break;
		case 2: Analiza_Operacion();
		break;
		case 3: Operacion_Posfija();
	}
}

int Ingresa_Operacion(){
	cout<<" Fuera de servicio :^)\n";
	
	return 0;
}


int Analiza_Operacion(){
	cout<<" Fuera de servicio :^)\n";
	
	
	return 0;
}

int Operacion_Posfija(){
	cout<<" Fuera de servicio :^)\n";
	
	return 0;
}
