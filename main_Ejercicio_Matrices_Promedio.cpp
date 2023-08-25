#include <iostream>
#include <conio.h>

// Mateo Maas Esquivel
// 4to Bachillerato en Computación
// Sección Gamma
// 22 / 08 / 2023

using namespace std;
int columnas=5;
int filas=7;

int A[5][7];
int suma;
int promedio[7];

int main() {
	
	cout<<"Ingresa las notas obtenidas por los alumnos."<<endl;
	cout<<"Alumno 1: "<<endl;
	for(int i=0; i<columnas; i++){
	for(int a=0; a<filas; a++){	
	cin>>A[i][a];
	}
	if(i+1){
	cout<<"Alumno : "<<i+2<<endl;
	}
	}
	
	cout<<"Las notas introducidas de los alumnos son:"<<endl;
	for(int b=0; b<columnas; b++){
	for(int c=0; c<filas; c++){	
	cout<<A[b][c]<<"  ";
	}
	cout<<"\n";	
	}

	for(int d=0; d<columnas; d++){
	for(int e=0; e<filas; e++){	
	suma = suma + A[d][e];		
	}
	promedio[d]= suma/7;
	suma=0;	
	}

	for(int l=0; l<columnas; l++){
	
	cout<<"El promedio total del alumno "<<l+1<<" es de: "<<promedio[l]<<endl;

	if(promedio[l]==100){
	cout<<"¡EXCELENTE!"<<endl;	
	}
	if(99>=promedio[l] and promedio[l]>=90){	
	cout<<"¡MUY BIEN!"<<endl;	
	}
	if(89>=promedio[l] and promedio[l]>=80){	
	cout<<"BIEN"<<endl;	
	}
	if(79>=promedio[l] and promedio[l]>=70){	
	cout<<"HAY QUE MEJORAR"<<endl;	
	}
	if(promedio[l]<=69){		
	cout<<"REPROBADO"<<endl;	
	}	
	}
	}
