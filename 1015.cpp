#include <iostream>
using namespace std;

int main()
{
    double r1, r2;
    cin >> r1 >> r2;
    
    printf("%.2f\n", r1 * r2 / (r1 + r2));
    
    return 0;
}