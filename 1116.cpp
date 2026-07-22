#include <iostream>
using namespace std;
const int N = 1000005;
int a[N];

int main()
{
    // 1 2 2 3 3 3 4 5 5 6
    int n; cin >> n;
    int c = 0;
    int max = -1e9;
    a[0] = a[n + 1] = -1e9;
    
    for (int i = 1; i <= n; i++) cin >> a[i];
     
    for (int i = 1; i <= n + 1; i++) {
        if (a[i] != a[i - 1]) {
            if (c > max) max = c;
            c = 1;
        } else c++;
    }
    
    cout << max << endl;
    
    return 0;
}