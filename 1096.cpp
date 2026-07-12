#include <iostream>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int ans = 0;
    for (int i = n; i <= m; i++) {
        int t = i;
        while (t != 0) {
            if (t % 10 == 2) ans++;
            t /= 10;
        }
    }
    
    printf("%d\n", ans);
    return 0;
}