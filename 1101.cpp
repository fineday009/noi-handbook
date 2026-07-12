#include <iostream>
using namespace std;

int main()
{
    // y = (-ax + c) / b
    int a, b, c; cin >> a >> b >> c;
    int ans = 0;
    
    for (int x = 0; ; x++) {
        int t = (c - a*x);
        if (t < 0) break;
        if (t % b == 0 && t / b >= 0) ans++;
    }
    cout << ans << endl;
    
    return 0;
}