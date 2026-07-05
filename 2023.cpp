#include <iostream>
using namespace std;

int main()
{
    
    int max = 0x80000000, min = 0x7fffffff;
    int t, sum = 0, c = 0;
    while (cin >> t) {
        if (t > max) max = t;
        if (t < min) min = t;
        sum += t;
        c++;
    }
    printf("%d %d %.3f\n", min, max, sum * 1.0 / c);
    
    return 0;
}