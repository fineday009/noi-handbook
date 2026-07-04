#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y, z; cin >> x >> y >> z;
    int a = abs(x - y), b = abs(x - z), c = abs(y - z);
    int p = x + y, q = x + z, r = y + z;
    if ((a < z && b < y && c < x) && (p > z && q > y && r > x)) puts("yes");
    else puts("no");
    
    return 0;
}