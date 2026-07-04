#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int p = 0, q = 0, r = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        int a, b, c; cin >> a >> b >> c;
        p += a; q += b; r += c;
        sum += a + b + c;
    }
    printf("%d %d %d %d\n", p, q, r, sum);
    return 0;
}