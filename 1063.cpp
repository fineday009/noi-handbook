#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int max = -1, min = 0x7fffffff;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x > max) max = x;
        if (x < min) min = x;
    }
    printf("%d\n", max - min);
    return 0;
}