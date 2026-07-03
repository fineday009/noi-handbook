#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int t = 0;
    long long ans = 1;
    while (t < n) {
        ans *= 2;
        t++;
    }
    cout << ans << endl;
    
    return 0;
}