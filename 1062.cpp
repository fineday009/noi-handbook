#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int ans = -1;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x > ans) ans = x;
    }
    printf("%d\n", ans);
    return 0;
}