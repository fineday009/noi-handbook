#include <iostream>
#include <cstring>
using namespace std;
const int MAXN = 1005;
int a[MAXN];

int main()
{
    int n, m; cin >> n >> m;
    memset(a, 1, sizeof(int) * n); // 0x01010101
    int cur = n - 1, c = 0;
    while (c < n) {
        int ct = 0;
        while (ct < m) { // 数够m个活人
            cur = (cur + 1) % n;
            if (!a[cur]) continue;
            ct++;
        }
        a[cur] = 0; // 数够了
        printf("%d ", cur + 1);
        c++;
    }
    
    return 0;
}