#include <iostream>
using namespace std;

bool isPrime(int t) 
{
    if (t < 2) return false;
    for (int i = 2; i <= t / i; i++) {
        if (t % i == 0) return false;
    }
    
    return true;
}

int main()
{
    int a, b; cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) printf("%d\n", i);
    }
    
    return 0;
}
