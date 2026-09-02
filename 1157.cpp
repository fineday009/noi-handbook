#include <iostream>
using namespace std;

bool isPrime(int n) 
{
    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
/**
 * 分行输出：

例如:

6=3+3

8=3+5
...
（每个数只拆开一次，请保证第一个加数最小）
 */

int main()
{
    for (int t = 6; t <= 100; t += 2) {
        for (int i = 2; i <= 100; i++) {
            if (isPrime(i)) {
                int r = t - i;
                if (r >= 2 && isPrime(r)) {
                    // 找到一组，结束循环
                    printf("%d=%d+%d\n", t, i, r);
                    break;
                }
            }
        }
    }
    return 0;
}