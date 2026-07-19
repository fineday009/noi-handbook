#include <iostream>
using namespace std;
const int N = 1000 + 5;
int a[N], b[N];

int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += a[i] * b[i];
    }
    
    cout << ans << endl;
    
    return 0;
}