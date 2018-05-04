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

int coordenada1x = 0;
int coordenada1y = 0;
int coordenada2x = 0;
int coordenada2y = 0;
int coordenada3x = 0;
int coordenada3y = 0;
int coordenada4x = 0;
int coordenada4y = 0;

int opcioncentro = 0;
int opcionborde = 0;

int centro1x=0;
int centro1y=0;
int centro2x=0;
int centro2y=0;
int borde1x=0;
int borde1y=0;
int borde2x=0;
int borde2y=0;


cout<<"Ingrese la coordenada 1 en x"<<endl;
cin>>coordenada1x;
cout<<"Ingrese la coordenada 1 en y"<<endl;
cin>>coordenada1y;
cout<<"Ingrese la coordenada 2 en x"<<endl;
cin>>coordenada2x;
cout<<"Ingrese la coordenada 2 en y"<<endl;
cin>>coordenada2y;
cout<<"Ingrese la coordenada 3 en x"<<endl;
cin>>coordenada3x;
cout<<"Ingrese la coordenada 3 en y"<<endl;
cin>>coordenada3y;
cout<<"Ingrese la coordenada 4 en x"<<endl;
cin>>coordenada4x;
cout<<"Ingrese la coordenada 4 en y"<<endl;
cin>>coordenada4y;

cout<<"Que coordenadas ingresadas desea que sean el centro primero circulo? (1,2,3,4)"<<endl;
cin>>opcioncentro;

if(opcioncentro==1){
centro1x= coordenada1x;
centro1y= coordenada1y;
opcioncentro=0;
}
if(opcioncentro==2){
centro1x= coordenada2x;
centro1x= coordenada2y;
opcioncentro=0;
}
if(opcioncentro==3){
centro1x=coordenada3x;
centro1y=coordenada3y;
opcioncentro=0;
}
if(opcioncentro==4){
centro1x=coordenada4x;
centro1y=coordenada4y;
opcioncentro=0;
}

cout<<"Que coordenadas ingresadas desea que sean el centro del segundo circulo? (1,2,3,4)"<<endl;
cin>>opcioncentro;

if(opcioncentro==1){
centro2x = coordenada1x;
centro2y = coordenada1y;
opcioncentro = 0;
}
if(opcioncentro==2){
centro2x = coordenada2x;
centro2y = coordenada2y;
}
if(opcioncentro==3){
centro2x = coordenada3x;
centro2y = coordenada3y;

}
if(opcioncentro==4){
centro2x = coordenada4x;
centro2y = coordenada4y;
}
cout<<"Ingrese el numero de coordenada que desea que sea el borde del centro#1 (1,2,3,4)"<<endl;
cin>>opcionborde;

if(opcionborde ==1){
borde1x = coordenada1x;
borde1y = coordenada1y;
}
if(opcionborde ==2){
borde1x = coordenada2x;
borde2y = coordenada2y;
}
if(opcionborde ==3){


}
if(opcionborde ==4){


}







int restaprimerosdigitos;
int restasegundosdigitos;

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
