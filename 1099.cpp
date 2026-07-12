#include <iostream>
using namespace std;
#define LL long long

bool prime(LL n) 
{
    if (n < 2) return false;
    for (LL i = 2; i <= n / i; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    int n; cin >> n;
    int c = 0;
    LL t = 2;
    while (true) {
        if (prime(t)) {
            c++;
            if (c == n) break;
        }
        t++;
    }
    cout << t << endl;
    
    return 0;
}