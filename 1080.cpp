#include <iostream>
using namespace std;

int main()
{
    int a, b, c; cin >> a >> b >> c;
    
    for (int i = 2; i <= 1000000; i++) {
        int p = a % i, q = b % i, r = c % i;
        if (p == q && q == r) {
            printf("%d\n", i);
            break;
        }
    }
    
    return 0;
}