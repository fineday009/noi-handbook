#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int t = i;
        while (t != 0) {
            if (t % 10 == 1) ans++;
            t /= 10;
        }
    }
    
    printf("%d\n", ans);
    return 0;
}