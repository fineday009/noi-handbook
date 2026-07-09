#include <iostream>
using namespace std;

int main()
{
    for (int i = 100; i <= 999; i++) {
        int x = i % 10, y = i / 10 % 10, z = i / 100;
        if (x*x*x + y*y*y + z*z*z == i) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}