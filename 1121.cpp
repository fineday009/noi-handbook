#include <iostream>
using namespace std;
int a[105][105];

int main()
{
    int m, n; cin >> m >> n;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    
    int ans = 0;
    for (int i = 1; i <= m; i++) ans += a[i][1] + a[i][n];
    for (int j = 2; j <= n - 1; j++) ans += a[1][j] + a[m][j];
    
    cout << ans << endl;
    
    return 0;
}