#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

char palabra[20];
int longitud;

int main() {
	
	cout<<"Ingresa una palabra."<<endl;
	cin.getline(palabra, 20, '\n');
	
	longitud=strlen(palabra);

	
	if(longitud>=10){
	cout<<"Los car�cteres totales que posee la cadena ingresada son "<<longitud<<", por lo que la palabra es:"<<endl;	
	cout<<palabra<<endl;	
	}
	else{
	cout<<"Los car�cteres totales que posee la cadena ingresada son: "<<longitud<<endl;		
	cout<<"La palabra no ha llegado al m�nimo de 10 car�cteres, por ende, no se mostrar�."<<endl;	
	}
	
}
