#include <iostream>
using namespace std;
const int N = 10005;
int a[N], b[N], g[N], k[N];

int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i] >> g[i] >> k[i];
    int x, y; cin >> x >> y;
    
    // 不要想复杂了，直接用灵巧的逆向匹配
    bool found = false;
    for (int i = n - 1; i >= 0; i--) {
        if (x >= a[i] && x <= a[i] + g[i] &&
            y >= b[i] && y <= b[i] + k[i]) {
            cout << (i + 1) << endl;
            found = true;
            break;
        }
    }
    
    if (!found) cout << -1 << endl;
    
    return 0;
}