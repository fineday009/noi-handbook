#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double xa, ya, xb, yb;
    cin >> xa >> ya >> xb >> yb;
    
    printf("%.3f\n", sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb)));
    
    return 0;    
}