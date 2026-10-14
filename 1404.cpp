#include <iostream>
using namespace std;
int t[100005];

int main()
{
    // m(m + 1)/2 - 3x = n
    // x = (m*(m+1)-2*n)/6

    int n; cin >> n;

    // 枚举m
    for (int m = 1; ; m++) {
        int t = m*(m+1)-2*n;
        if (t > 0 && t % 6 == 0) {
            printf("%d %d\n", t / 6, m);
            break;
        }
    }

    return 0;
}