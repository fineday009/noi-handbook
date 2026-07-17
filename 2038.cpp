#include <iostream>
using namespace std;
const int MAXN = 1005;
int a[MAXN];

int main()
{
    int n; cin >> n;
    int ans = 0, max = 0x80000000;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] > max) {
            ans = i;
            max = a[i];
        }
    }
    cout << ans << endl;
    
    return 0;
}