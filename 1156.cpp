#include <iostream>
#include <cmath>
using namespace std;

double arctanx(double x, double lim) 
{
    double sum = 0, num = x, den = 1;
    int sign = 1;
    while (num / den >= lim) {
        sum += sign * num / den;
        num = num * x * x;
        den += 2;
        sign = -sign;
    }
    return sum;
}

int main()
{
    printf("%.10f\n", 6 * arctanx(1 / sqrt(3), 1e-6));
    return 0;
}