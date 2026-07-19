#include <iostream>
using namespace std;
const int N = 10005;
int a[N];

int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    int x; cin >> x;
    
    bool find = false;
    int ans = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == x && !find) {
            find = true;
            ans = i + 1;
        }
    }
    
    cout << ans << endl;
    return 0;
}