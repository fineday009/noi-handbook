#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c; cin >> a >> b >> c;
    double delta = b*b - 4*a*c;
    if (delta < 0) puts("No answer!");
    else {
        double x1 = (-1 * b + sqrt(delta)) / (2 * a);
        double x2 = (-1 * b - sqrt(delta)) / (2 * a);
        if (delta == 0) printf("x1=x2=%.5f\n", x1);
        else {
            if (x1 > x2) { double t; t = x1; x1 = x2; x2 = t;}
            printf("x1=%.5f;x2=%.5f\n", x1, x2);
        }
    }
    
    return 0;
}