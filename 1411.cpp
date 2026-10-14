#include <iostream>
using namespace std;

bool ip(int n)
{
    if (n <= 1) return false;
    for (int i = 2; i <= n/i; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int rev(int n)
{
    int ans = 0;
    while (n) {
        int t = n % 10;
        ans = ans * 10 + t;
        n /= 10;
    }
    return ans;
}

int main()
{
    int M, N; cin >> M >> N;
    bool seen = false;
    for (int i = M; i <= N; i++) {
        if (ip(i) && ip(rev(i))) {
            if (!seen) seen = true;
            else putchar(',');
            printf("%d", i);
        }
    }
    if (!seen) puts("No"); 

    return 0;
}
/**
 * 真素数
 * 【输入样例】
10 35
【输出样例】
11,13,17,31
 */