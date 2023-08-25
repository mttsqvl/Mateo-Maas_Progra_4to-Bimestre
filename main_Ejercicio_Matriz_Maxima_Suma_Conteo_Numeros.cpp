#include <iostream>
#include <conio.h>

// Mateo Maas Esquivel
// 4to Bachillerato en Computación
// Sección Gamma
// 21 / 08 / 2023

using namespace std;

int A[5][5];
int cero=0;
int positivos=0;
int negativos=0;
int maxsuma=0;
int filamax=0;

int main() {
	cout<<"Ingresa los números que quieres que contenga la matriz."<<endl;
	for(int i=0; i<5; i++){
	for(int a=0; a<5; a++){
	cout<<"Posición: "<<i+1<<", "<<a+1<<endl;
	cin>>A[i][a];
	if(A[i][a]>0){
	positivos++;	
	}
	if(A[i][a]<0){
	negativos++;	
	}
	if(A[i][a]==0){
	cero++;	
	}	
	}	
	}
	
	cout<<"La matriz ingresada es: "<<endl;
	for(int d=0; d<5; d++){
	for(int e=0; e<5; e++){
	cout<<A[d][e]<<" ";	
	}
	cout<<"\n";	
	}
	
	for(int d=0; d<5; d++){
	int sumafila=0;	
	for(int e=0; e<5; e++){
	sumafila = sumafila + A[d][1];	
	}
	if(sumafila > maxsuma){
	maxsuma = sumafila;
	filamax = d;	
	}	
	}
	
	cout<<"La fila con mayor suma es la fila "<<filamax+1<<" con una suma de "<<maxsuma<<endl;
	cout<<"El total de ceros en la matriz es de: "<<cero<<endl;
	cout<<"El total de números positivos en la matriz es de: "<<positivos<<endl;
	cout<<"El total de números negativos en la matriz es de: "<<negativos<<endl;
	getch();
}
