#include <iostream>
using namespace std;

int main(){
	int numero1, numero2, par = 0, impar = 0;
	cout << "ingrese el primer numero: ";
	cin >> numero1;
	cout << "ingrese el segundo numero: ";
	cin >> numero2;
	for (int i = numero1; i <= numero2; i ++){
		if (i%2 == 0){
			cout << "par: " << i << endl;
			par = par + 1;
		} else {
			cout << "impar: " << i << endl;
			impar = impar + 1;
		}
	}
	cout << "los pares son: " << par << endl;
	cout << "los impares son: " << impar << endl;
}
