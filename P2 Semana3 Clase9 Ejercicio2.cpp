#include <iostream>
#include <cmath>
using namespace std;

float pitagoras(float, float); // Prototipo de funcion

int main(){
	float cat1,cat2,hipo=0;
	cout << "ingrese cateto 1: ";
	cin >> cat1;
	cout << "ingrese cateto 2: ";
	cin >> cat2;
	hipo=pitagoras (cat1, cat2);
	cout << "la hipotenusa del triangulo es: ";
	cout << hipo;
	return 0;
}

float pitagoras (float x, float y){
	float result = 0;
	//sqrt = raiz de un numero. pow = potencia de 
	//un numero elevado a otro. Ambas funciones
	//se encuentran en la biblioteca cmath.
	result = sqrt (pow(x,2)+pow(y,2));
	return result;
}














