#include <iostream>
using namespace std;
int factorSum(int n);

int main()
{
    for (int i = 2; ; i++) {
        int t = factorSum(i);
        if (i == factorSum(t) && i != t) {
            printf("%d %d\n", i, t);
            break;
        }
    }

    return 0;
}

int factorSum(int n) 
{
    int ans = 0;
    for (int j = 1; j <= n / 2; j++) {
        if (n % j == 0) ans += j;
    }
    return ans;
}