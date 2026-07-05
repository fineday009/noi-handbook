#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        int a = x % 10, b = x / 10 % 10, c = x / 100 % 10, d = x / 1000 % 10;
        if (a - d - c - b > 0) ans++;
    }
    
    cout << ans << endl;
    return 0;
}