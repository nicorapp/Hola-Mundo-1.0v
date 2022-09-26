
#include <cstdlib>  //en main.cpp solo va el main no la implementacion de funciones
#include <iostream>
#include "example.h"
#include "math.h"

using namespace std;

int main()
{
	int a, b, c;
	double raiz1 = 0, raiz2 = 0;

	cout << "Introduzca un valor para a: ";
	cin >> a;
	cout << "Introduzca un valor para b: ";
	cin >> b;
	cout << "Introduzca un valor para c: ";
	cin >> c;
	resolvente(a, b, c, raiz1, raiz2);

	cout << "La primera raiz es:" << raiz1 << " y la segunda raiz es:" << raiz2 << ".  " << endl;

	return (0);
	//copio los codigos del borrador
}