#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int a = i % 10, b = i / 10 % 10, c = i / 100;
        if (!(i % 7 == 0 || a == 7 || b == 7 || c == 7)) {
            ans += i * i;
        }
    }
    
    printf("%d\n", ans);
    return 0;
}