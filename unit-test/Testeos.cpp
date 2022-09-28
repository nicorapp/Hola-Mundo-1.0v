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