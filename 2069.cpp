#include <iostream>
using namespace std;

const int MAXN = 5;

int main()
{
    int a[MAXN];
    memset(a, 0, sizeof(a));
    for (int i = 0; i < MAXN; i++) cin >> a[i];
    for (int i = 0; i < MAXN; i++) {
        int q = a[i] / 3;
        a[i] = q;
        a[(i + 4) % 5] += q;
        a[(i + 1) % 5] += q;
    }
        
    for (int i = 0; i < MAXN; i++) {
        printf("%5d", a[i]);
    }
    printf("\n");
    
    return 0;
}