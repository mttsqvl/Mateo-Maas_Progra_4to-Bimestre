#include <iostream>

// Mateo Maas Esquivel
// 4to Bachillerato en Computación
// Sección Gamma
// 15 / 08 / 2023

using namespace std;
int filas=3;
int columnas=3;
int A[3][3];
int main() {
	
	cout<<"Ingresa los números que quieres que tenga la matriz"<<endl;
	for(int i=0; i<filas; i++){
	for(int a=0; a<columnas; a++){
	cout<<"Posición: "<<i+1<<", "<<a+1<<endl;
	cin>>A[i][a];	
	}	
	}
	cout<<"La matriz introducida es: "<<endl;
	for(int b=0; b<filas; b++){
	for(int c=0; c<columnas; c++){
	cout<<A[b][c]<<"  ";	
	}
	cout<<"\n";	
	}
	
	cout<<"Los números en diagonal son:"<<endl;
	for(int d=0; d<3; d++){
	cout<<A[d][d]<<endl;	
	}	
	}
