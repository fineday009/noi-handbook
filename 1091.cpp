#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    long long s = 0, m = 1;
    for (int i = 1; i <= n; i++) {
        m = m * i;
        s = (s + m);
    }    
    printf("%lld\n", s);
    return 0;
}