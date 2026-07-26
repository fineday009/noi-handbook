#include <iostream>
using namespace std;
int a[105][105], b[105][105];

int main()
{
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            //(i, j) -> (j, n - i + 1)
            b[j][n - i + 1] = a[i][j];
        }
    }
    
    for (int j = 1; j <= m; j++) {
        for (int i = 1; i <= n; i++) {
            printf("%d ", b[j][i]);
        }
        puts("");
    }
    
    return 0;
}