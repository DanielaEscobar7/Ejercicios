#include <iostream>
using namespace std;

int main(){
	int division, numero1, numero2;
	cout << "ingrese el primer numero: ";
	cin >> numero1;
	cout << "ingrese el segundo numero: ";
	cin >> numero2;
	if (numero1 == 0){
		cout << "error el primer numero es cero ";
	} else if (numero2 == 0){
		cout << "error el segundo numero es cero ";
	} else {
		division = numero1 / numero2;
		cout << "la division es: " << division;
	}
		
}
