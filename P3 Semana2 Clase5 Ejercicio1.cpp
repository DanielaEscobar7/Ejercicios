#include <iostream>
using namespace std;
int main()
{
	cout << "escriba una nota:: ";
	char nota;
	cin >> nota;
	
	switch(nota){
	case 'A': case 'a':
	cout << "excelente, aprobado con honores";
	break;
	case 'B': case 'b':
	cout<< "aprobado de forma sobresaliente";
	break;
	case 'C': case 'c':
	cout<< "aprobado con buen desempenio" << endl<< "o";
	break;
	case 'D': case 'd':
	cout<< "aprobado de manera regular";
	break;
	case 'E': case 'e':
	cout<< "aprobado pero sugiere mejorar";
	break;
	case 'F': case 'f':
	cout<< "reprobado con rendimiento pobre";
	break;	
	default:
	cout<< "** ERROR, nota ingresada es incorrecta **";	
	}// fin switch nota
}





































