#include "Prototipos.h"
#include "math.h"
#include <iostream>
using namespace std;

float distancia(int x1, int y1, int z1, int x2, int y2, int z2) {
	float dist;

	dist = sqrt(pow(x1 + x2, 2) + pow(y1 + y2, 2) + pow(z1 + z2, 2));

	return dist;
}