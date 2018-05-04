#include <iostream>
#include <string>
#include <math.h>
#include <ctype.h>
using namespace std;

void circulos(){

int opcion = 0;
	
cout<< "Ingrese el metodo por el que desea ver la colision de los circulos"<<endl;
cout<< "1. Ingresar coordenadas manualmente"<<endl;
cout<< "2. Ingresar las coordenadas aleatorias"<<endl;

cin>>opcion;

if(opcion ==1){

int coordenada1 = 0;
int coordenada2 = 0;
int coordenada3 = 0;
int coordenada4 = 0;

cout<<"Ingrese la coordenada 1 del primer circulo"<<endl;
cin>>coordenada1;
cout<<"Ingrese la coordenada 2 del primer circulo"<<endl;
cin>>coordenada2;
cout<<"Ingrese la coordenada 1 del segundo circulo"<<endl;
cin>>coordenada3;
cout<<"Ingrese la coordenada 2 del segundo circulo"<<endl;
cin>>coordenada4;

int restaprimerosdigitos = coordenada1-coordenada2;
int restasegundosdigitos = coordenada3-coordenada4;

int 







}

if(opcion ==2){
	

}


}


void triangulos(){
int contadorLetras = 0;

char lado1triangulo1 = '0';
char lado2triangulo1 = '0';
char lado3triangulo1 = '0';
char angulo1triangulo1 = '0';
char angulo2triangulo1 = '0';
char angulo3triangulo1 = '0';

char lado1triangulo2 = '0';
char lado2triangulo2 = '0';
char lado3triangulo2 = '0';
char angulo1triangulo2 = '0';
char angulo2triangulo2 = '0';
char angulo3triangulo2 = '0';

cout<<"Ingrese el primer lado del primer triangulo"<<endl;
cin>>lado1triangulo1;
if(isdigit(lado1triangulo1)){

}		
cout<<"Ingrese el segundo lado del primer triangulo"<<endl;
cin>>lado2triangulo1;
cout<<"Ingrese el tercer lado del primer triangulo"<<endl;
cin>>lado3triangulo1;
cout<<"Ingrese el primer angulo del primer triangulo"<<endl;
cin>>angulo1triangulo1;
cout<<"Ingrese el segundo angulo del primer triangulo"<<endl;
cin>>angulo2triangulo1;
cout<<"Ingrese el tercer angulo del primer triangulo"<<endl;
cin>>angulo3triangulo1;
cout<< "Ingrese el primer lado del segundo triangulo"<<endl;
cin>>lado1triangulo2;
cout<<"Ingrese el segundo lado del segundo triangulo"<<endl;
cin>>lado2triangulo2;
cout<<"Ingrese el tercer lado del segundo triangulo"<<endl;
cin>>lado3triangulo2;
cout<<"Ingrese el primer angulo del segundo triangulo"<<endl;
cin>>angulo1triangulo2;
cout<<"Ingrese el segundo angulo del segundo triangulo"<<endl;
cin>>angulo2triangulo2;
cout<<"Ingrese el tercer angulo del segundo triangulo"<<endl;
cin>>angulo3triangulo2;

}



int main(){
int opcion = 0;
cout<<"Porfavor ingrese la opcion deseada: "<<endl;

cin>>opcion;

if (opcion==1){

triangulos();


}


if (opcion==2){

	circulos();


}

if (opcion==3){


}
  
}
