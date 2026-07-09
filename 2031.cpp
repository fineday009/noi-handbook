#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for (int i = 1100; i <= 9999; i++) {
        int x = i % 10, y = i / 10 % 10;
        int p = i / 100 % 10, q = i / 1000;
        int t = sqrt(i);
        if (x == y && p == q && t * t == i) {
            printf("%d\n", i);
        } 
    }
    
    return 0;
}