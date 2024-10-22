#include "pch.h"
#include "ZavdClass.h"
#include "Math.h"

using namespace std;

// Обчислення функції b[x, y, z]
void ZavdClass::Fn_b(double x, double y, double z)
{
    double b1 = pow(cos(atan((pow(x, 2) + y) / (z + 1))), 2); // перший доданок
    double b2 = (x * exp(pow(x, 3) + y)) / z; // другий доданок
    b = b1 + b2; // результат
}

// Обчислення функції a[x, y, z, b]
void ZavdClass::Fn_a(double x, double y, double z)
{
    double a1 = 1 + pow(sin(fabs(x + y)), 0.4); // перший доданок
    double a2 = 2 + pow(b, 2) + pow(sin(y - z), 2); // другий доданок
    double a3 = tan(3 * x / z); // третій доданок
    a = (a1 / a2) + a3; // результат

   
}
double ZavdClass::Fn_aver(double a, double b)
{
    return (a + b) / 2;
}
