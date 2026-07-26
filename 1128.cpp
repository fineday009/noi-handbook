#include <iostream>
using namespace std;
int a[105][105], b[105][105];

int main()
{
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i != 1 && i != n && j != 1 && j != m) {
                // double t = (b[i][j] + b[i - 1][j] + b[i][j - 1] + b[i + 1][j] + b[i][j + 1]) / 5.0;
                // a[i][j] = (int)(t + 0.5);
                
                /**
                原理：对非负数，round(x/5) 等价于 (x + 2) / 5。
                余数 0/1/2（小数 .0/.2/.4）加 2 不进位、余数 3/4（.6/.8）加 2 进位；
                又因为除数是 5，小数部分永远不会恰好是 .5，不存在争议的临界情况。
                这个"加半再除"技巧记下来，所有"整数平均要四舍五入"的题都用它。
                顺带我把边界的 if 换成了循环范围 i=2..n-1, j=2..m-1，少一层嵌套（等价，纯可读性）。
                    **/
                a[i][j] = (b[i][j] + b[i - 1][j] + b[i][j - 1] + b[i + 1][j] + b[i][j + 1] + 2) / 5;
            }
        }
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            printf("%d ", a[i][j]);
        }
        puts("");
    }
    
    
    return 0;
}