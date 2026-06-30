#include <iostream>
using namespace std;

int main()
{
    double r;
    cin >> r;
    const double PI = 3.1415926;
    printf("%.4f %.4f %.4f\n", 2*r, 2*PI*r, PI*r*r);
    
    return 0;
}