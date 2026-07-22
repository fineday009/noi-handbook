#include <iostream>
using namespace std;
const int N = 25;
int a[N][N];

int main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i < j) continue;
            if (i == 1 && j == 1) a[i][j] = 1;
            else a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
            printf("%d ", a[i][j]);
        }
        puts("");
    }
    
    return 0;
}