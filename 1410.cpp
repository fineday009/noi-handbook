#include <iostream>
using namespace std;
/**
 * 任意输入两个正整数m,n(1<m<n≤5000)
，依次输出m
到n
之间每个数的最大质因子(包括m
和n
；如果某个数本身是质数，则输出这个数自身)。
【输入】
一行，包含两个正整数m
和n
，其间以单个空格间隔。

【输出】
一行，每个整数的最大质因子，以逗号间隔。

【输入样例】
5 10
【输出样例】
5,3,7,2,3,5
 */
bool ip(int n)
{
    if (n <= 1) return false;
    for (int i = 2; i <= n/i; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int maxPrimeFactor(int n)
{
    int ans = n;
    for (int i = n; i >= 2; i--) {
        if (ip(i) && n % i == 0) {
            ans = i;
            break;
        }
    }
    return ans;
}

int main()
{
    int m, n; cin >> m >> n;
    bool first = true;
    for (int i = m; i <= n; i++) {
        if (first) first = false;
        else printf(",");
        printf("%d", maxPrimeFactor(i));
    }

    return 0;
}