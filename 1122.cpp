#include <iostream>
using namespace std;
int a[6][6], b[6], c[6];

int main()
{
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            // 检查是否符合条件
            cin >> a[i][j];
        }
    }
      
    for (int i = 1; i <= 5; i++) {
        int max = -1e9;
        for (int j = 1; j <= 5; j++) {
            if (a[i][j] > max) max = a[i][j];
        }        
        b[i] = max;
    }
    for (int j = 1; j <= 5; j++) {
        int min = 1e9;
        for (int i = 1; i <= 5; i++) {
            if (a[i][j] < min) min = a[i][j];
        }
        c[j] = min;
    }
    
    bool found = false;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (a[i][j] == b[i] && a[i][j] == c[j]) {
                found = true;
                printf("%d %d %d\n", i, j, a[i][j]);
            }
        }
    }
    if (!found) printf("not found\n");
    
    return 0;
}