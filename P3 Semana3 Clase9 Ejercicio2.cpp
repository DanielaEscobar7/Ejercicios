#include "iostream"

using namespace std;
int main ()
{
	int opcion =0;
	do
	{
		cout << "ingresa 1 para mostrar mensaje\n";
		cout << "ingresa 2 para hacer algo mas\n";
		cout << "ingresa 0 para salir\n";
		
		cout << "ingresa una opcion a ejecutar\n";
		cin>> opcion;
	}
	// mostramos el menu hasta que la opcion sea cero
	while (opcion !=0);
	system ("PAUSE");
	return 0;
}
