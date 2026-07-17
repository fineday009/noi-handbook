#include <iostream>
using namespace std;
const int N = 1005;
bool vis[N];

int main()
{
    int n; cin >> n;
    for (int i = 2; i <= n; i++) {
        if (!vis[i]) {
            // 埃氏筛法
            // for (int j = 2 * i; j <= n; j += i) {
            //     vis[j] = true; // 划掉倍数
            // }
            
            // 上面的代码ok，还可以优化，可以从i * i开始消，因为2i,3i,...(i-1)i，已经被比i更小的质数消除了
            for (int j = i * i; j <= n; j += i) {
                vis[j] = true;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (!vis[i]) printf("%d\n", i);
    }
    return 0;
}