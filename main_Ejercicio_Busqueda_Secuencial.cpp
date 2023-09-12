#include <iostream>
#include <conio.h>

//Mateo Maas Esquivel
// 4to Bachillerato en Computación
// Sección Gamma
// 04 / 09 / 2023

using namespace std;

int main() {
	
	int x;
	string dato;
	char band = 'F';
	
	cout<<"Ingresa cuantos nombres quieres que tenga la lista."<<endl;
	cin>>x;
	string A[x];
	
	cout<<"Ingresa los nombres de dicha lista."<<endl;
	for(int i=0; i<x; i++){
	cin>>A[i];	
	}
	
	cout<<"Ingresa que nombre quieres buscar en la lista."<<endl;
	cin>>dato;
	
	int j;
	while((band == 'F')&&(j<x)){
		
		if(A[j] == dato){
			
		band = 'V';	
		
		}		
	j++;	
	}
	
	if(band == 'F'){
	cout<<"Ese nombre no está en la lista."<<endl;	
	}
	else{
	cout<<"El nombre "<<dato<<" se encuentra en la posición: "<<j<<endl;	
	}
}
