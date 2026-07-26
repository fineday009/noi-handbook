#include <iostream>
using namespace std;
int a[105][105], b[105][105];

int main()
{
    int n, m, k; cin >> n >> m >> k;
    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    for (int i = 1; i <= m; i++) 
        for (int j = 1; j <= k; j++)
            cin >> b[i][j];
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            int sum = 0;
            for (int t = 1; t <= m; t++) {
                sum += a[i][t] * b[t][j];
            }
            printf("%d ", sum);
        }
        puts("");
    }
    
    return 0;
}