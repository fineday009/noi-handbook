#include <iostream>
using namespace std;
bool isPrime(int n) 
{
    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    for (int i = 11; i <= 99; i++) {
        if (isPrime(i) && isPrime(i%10*10 + i / 10)) printf("%d\n", i);
    }

    return 0;
}