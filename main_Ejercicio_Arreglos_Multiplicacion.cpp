#include <iostream>

// Mateo Maas Esquivel
// 4to Bachillerato en Computaci�n
// Secci�n Gamma
// 14 / 08 / 2023

using namespace std;
int A[5];
int multiplicacion;
int main() {
	cout<<"Ingresa los 5 n�meros del arreglo."<<endl;
	for(int i=0; i<5; i++){
	cin>>A[i];	
	}
	cout<<"El vector con los n�meros duplicados es:"<<endl;
	for(int a=0; a<5; a++){
	multiplicacion=A[a]*2;
	cout<<multiplicacion<<endl;
	}
}
