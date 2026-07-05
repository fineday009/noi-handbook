#include <iostream>
using namespace std;

int main()
{
    int m; cin >> m;
    int n; cin >> n;
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x > m) ans++;
        else m -= x;
    }
    
    cout << ans << endl;
    return 0;
}