
#include <cstdlib>  //en main.cpp solo va el main no la implementacion de funciones
#include <iostream>
#include "example.h"
#include "math.h"

using namespace std;

void resolvente(int a, int b, int c, double& raiz1, double& raiz2)
{
	double a, b, c, raiz1, raiz2, discriminante;

	discriminante = pow(b, 2) - 4 * a * c;

	if (discriminante >= 0)
	{
		raiz1 = (-b + sqrt(discriminante)) / (2 * a);
		raiz2 = (-b - sqrt(discriminante)) / (2 * a);
	}
	else
	{
		cout << "la ecuacion no tiene raices reales" << endl;
	}
	//copie los codigos del borrador
	//no hace falta retornar los valores porque ya se me guardaron al poner la posicion de memoria
}
