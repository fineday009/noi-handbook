#include <iostream>
using namespace std;
int a[105][105], b[105][105];

int main()
{
    int m, n; cin >> m >> n;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    
    int same = 0;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> b[i][j];
            if (a[i][j] == b[i][j]) same++;
        }
    }
    
    printf("%.2f\n", same * 100.0 / m / n);
    
    return 0;
}