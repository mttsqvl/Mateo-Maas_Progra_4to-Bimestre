#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;
int x;
int a;
char buscarnombre[20];
float aux;
string dato;
char band = 'F';
int main() {
	
	cout<<"Ingresa el número de empleados de la empresa."<<endl;
	cin>>x;
	
	struct datos{
	
	char nombre[20];
	int id;
	float salario;
	
}persona[x];

	cout<<"Ingresa los datos de los empleados."<<endl;
	for(int i=0; i<x; i++){
		
	cin.ignore();	
	cout<<"Ingresa el nombre del empleado "<<i+1<<endl;	
	cin.getline(persona[i].nombre,20,'\n');	
	
	cout<<"Ingresa la identificación del empleado "<<i+1<<endl;
	cin>>persona[i].id;
	
	cout<<"Ingresa el salario del empleado "<<i+1<<endl;
	cin>>persona[i].salario;
	}
	
	
	while(a!=4){
	cout<<"¿Qué acción le gustaría hacer ahora?"<<endl;
	cout<<"1. Encontrar el empleado con el salario más alto."<<endl;
	cout<<"2. Encontrar el empleado con el salario más bajo."<<endl;
	cout<<"3. Buscar un empleado por nombre."<<endl;
	cout<<"4. SALIR"<<endl;
	cin>>a;
		
	switch(a){
	case 1: 
	for(int i=0; i<1; i++){
		
	if(persona[i].salario > persona[i+1].salario){
	aux = persona[i].salario;
	persona[i].salario = persona[i+1].salario;	
	persona[i].salario = aux;
	cout<<"El empleado con el salario más alto es el empleado "<<i+1<<", de nombre "<<persona[i].nombre<<endl;
	}	
	}
	; break;
	case 2:
	for(int i=0; i<1; i++){
		
	if(persona[i].salario > persona[i+1].salario){
	aux = persona[i].salario;
	persona[i].salario = persona[i+1].salario;	
	persona[i+1].salario = aux;
	}
	cout<<"El empleado con el salario más bajo es el empleado "<<i+2<<", de nombre "<<persona[i+1].nombre<<endl;	
	}	
	; break;
	case 3:	
	cout<<"Ingresa el nombre del empleado."<<endl;
	cin>>dato;
	
	int j;
	while((band == 'F')&&(j<x)){
		
		if(persona[j].nombre == dato){
			
		band = 'V';	
		
		}		
	j++;	
	}
	
	if(band == 'F'){
	cout<<"Ese nombre no está en la lista."<<endl;
	}
	else{
	cout<<"Los datos personales son:"<<endl;
	for(int j=0; j<1; j++){
	cout<<"Nombre: "<<persona[j].nombre<<endl;
	cout<<"Identificación: "<<persona[j].id<<endl;
	cout<<"Salario: "<<persona[j].salario<<endl;
			
	}
	}
	; break;		
	
	case 4:
	cout<<"Usted ha salido del programa."<<endl;
	; break;	
	
	default: cout<<"Esta opción no es válida."<<endl; break;	
}
}
}
