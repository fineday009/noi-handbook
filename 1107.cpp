#include <iostream>
using namespace std;
const int MAXL = 10005;
bool cut[MAXL];

int main()
{
    int l, m; cin >> l >> m;
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        for (int i = u; i <= v; i++) cut[i] = true;
    }
    
    int ans = 0;
    for (int i = 0; i <= l; i++) {
        if (!cut[i]) ans++; 
    }
    
    cout << ans << endl;
    
    return 0;
}