#include <iostream>
using namespace std;

int main()
{
    int x; char c; cin >> x >> c;
    int ans = 8;
    if (x > 1000) {
        int r = (x - 1000);
        ans +=  r / 500 * 4 + ((r % 500) > 0 ? 4 : 0);
    }
    if (c == 'y') ans += 5;
    
    cout << ans << endl;
    
    return 0;
}