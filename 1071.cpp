#include <iostream>
using namespace std;

int main()
{
    int k; cin >> k;
    int ans;
    if (k == 1 || k == 2) {
        ans = 1;
    } else {
        int a = 1, b = 1;
        for (int i = 3; i <= k; i++) {
            ans = a + b;
            a = b;
            b = ans;
        }
    }
    printf("%d\n", ans);
    
    return 0;
}