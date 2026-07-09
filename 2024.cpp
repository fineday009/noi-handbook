#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int t = 0, ans = 1;
    while (t < n) {
        ans = ans * 1992 % 100;
        t++;
    }
    
    cout << ans << endl;
    
    return 0;
}