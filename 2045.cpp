#include <iostream>
using namespace std;
int a[25][25];

int main()
{
    int n; cin >> n;
    int c = 1, x = 0, y = n - 1;
    a[x][y] = 1;
    while (c < (n * n)) {
        while (x + 1 < n && a[x + 1][y] == 0) a[++x][y] = ++c;
        while (y - 1 >= 0 && a[x][y - 1] == 0) a[x][--y] = ++c;
        while (x - 1 >= 0 && a[x - 1][y] == 0) a[--x][y] = ++c;
        while (y + 1 < n && a[x][y + 1] == 0) a[x][++y] = ++c;
        // printf("%d\n", c);
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        puts("");
    }
    return 0;
}