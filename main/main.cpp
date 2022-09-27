
#include <cstdlib>  //en main.cpp solo va el main no la implementacion de funciones
#include <iostream>
#include "Prototipos.h"
#include "math.h"

using namespace std;

int main()
{
	int a, b, c;
	double *raiz1 = 0, *raiz2 = 0;
	int x1, x2, y1, y2, z1, z2;
	float distance;

	cout << "Introduzca un valor para a: ";
	cin >> a;
	cout << "Introduzca un valor para b: ";
	cin >> b;
	cout << "Introduzca un valor para c: ";
	cin >> c;
	resolvente(a, b, c, raiz1, raiz2);

	cout << "La primera raiz es:" << raiz1 << " y la segunda raiz es:" << raiz2 << ".  " << endl;

	cout << "Ingrese el valor de X1:";
	cin >> x1;
	cout << "Ingrese el valor de Y1:";
	cin >> y1;
	cout << "Ingrese el valor de Z1:";
	cin >> z1;
	cout << "Ingrese el valor de X2:";
	cin >> x2;
	cout << "Ingrese el valor de Y2:";
	cin >> y2;
	cout << "Ingrese el valor de Z2:";
	cin >> z2;

	distance = distancia(x1, y1, z1, x2, y2, z2);
	cout << "La distancia entre los dos puntos es:" << distance;
	return (0);
	//copio los codigos del borrador
}