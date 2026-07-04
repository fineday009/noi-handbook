#include <iostream>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x == m) ans++;
    }
    
    printf("%d\n", ans);
    
    return 0;
}