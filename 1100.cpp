#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int days = 0, daysPre = 0, i = 1;
    int ans = 0;
    while (days <= n) {
        days += i;
        daysPre += (i - 1);
        ans += (i - 1) * (i - 1);
        i++;
    }
    ans += (n - daysPre) * (i - 1);
    
    cout << ans << endl;
    
    return 0;
}