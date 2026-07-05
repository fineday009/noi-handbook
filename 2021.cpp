#include <iostream>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    
    int ans = 1;
    for (int i = 2; i <= n && i <= m; i ++) {
        if (n % i == 0 && m % i == 0) ans = i;
    }
    printf("%d\n", ans);
    
    return 0;
}