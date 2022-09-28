#include "gmock/gmock.h"

#include "Prototipos.h"

using namespace testing;

TEST(funcion, buscar_ceros)
{
	double raiz_1 = 6,raiz_2= 3;

	resolvente(4, 0,raiz_1,raiz_2);

	ASSERT_DOUBLE_EQ(raiz_1,2);
	ASSERT_DOUBLE_EQ(raiz_2,-2);
}

TEST(funcion, buscar_distancia) {
	int x1 = 2, y1 = 3, z1 = 4, x2 = 5, y2 = 6, z2 = 7;
	float distance;
	distance = distancia(x1, y1, z1, x2, y2, z2);

	ASSERT_FLOAT_EQ(distance, 11.78);
}