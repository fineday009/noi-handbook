#include <iostream>
using namespace std;
const int MAXN = 1000 + 5;
int a[MAXN];

int main()
{
    int n; cin >> n;
    memset(a, 0, sizeof(a));
    for (int t = 1; t <= n; t++) {
        for (int i = 1; i <= n; i++) {
            if (i % t == 0) a[i] = !a[i];
        }
    }
    
    for (int i = 1; i <= n; i++) {
        if (a[i]) printf("%d ", i);
    }
    return 0;
}