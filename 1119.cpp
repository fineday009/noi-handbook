#include <iostream>
using namespace std;
int a[6][6];

int main()
{
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> a[i][j];
        }
    }
    int m, n; cin >> m >> n;
    for (int j = 1; j <= 5; j++) {
        int t = a[m][j];
        a[m][j] = a[n][j];
        a[n][j] = t;
    }
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%d ", a[i][j]);
        }
        puts("");
    }
    
    return 0;
}