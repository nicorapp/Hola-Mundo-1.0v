#include "example.h"
#include <iostream>
#include <string>
#include "math.h"
using namespace std;

namespace foobar
{
    int Example::getValue() const
    {
        double a, b, c, r1, r2;
        cout << "Introduzca un valor para a: ";
        cin >> a;
        cout << "Introduzca un valor para b: ";
        cin >> b;
        cout << "Introduzca un valor para c: ";
        cin >> c;
        r1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
        r2= (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
        if (((b * b) - (4 * a * c)) <= 0)
        {
            cout << "ERROR!";
        }
        cout << "Las raices son: " << r1 << " y " << r2;
        return 0;
    }
}
