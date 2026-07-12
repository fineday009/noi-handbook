#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    long long s = 0, m = 1;
    for (int i = 1; i <= n; i++) {
        m = m * i % 1000000;
        s = (s + m) % 1000000;
    }    
    printf("%lld\n", s);
    return 0;
}