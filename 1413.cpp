// 一行，包含三个整数p、q、r。 p、q、r的所有位都是数字，并且1 ≤ p、q、r ≤ 1,000,000。
/**
 * 6×9=42对于十进制来说是错误的，但是对于13进制来说是正确的。即, 6(13)× 9(13)= 42(13)， 而 42(13)=4×131+2×130=54(10)。

你的任务是写一段程序，读入三个整数p、q和 r，然后确定一个进制 B(2<=B<=40) 使得 p × q = r。 如果 B 有很多选择, 输出最小的一个。

例如：p=11, q=11, r=121.则有11(3)× 11(3)= 121(3)因为 11(3)= 1 × 31+ 1 × 30= 4(10)和121(3)=1×32+2×31+1×30=16(10)。对于进制 10，同样有11(10)× 11(10)= 121(10)。这种情况下，应该输出 3。如果没有合适的进制，则输出 0。

 */
#include <iostream>
using namespace std;

int sum(int m, int B)
{
    int ans = 0, pow = 1;
    while (m) {
        int t = m % 10;
        if (t >= B) return -1;

        ans += t * pow;

        pow *= B;
        m /= 10;
    }
    return ans;
}

bool meet(int p, int q, int r, int B)
{
    // 思路是都转成10进制来验证
    int psum = sum(p, B), qsum = sum(q, B), rsum = sum(r, B);
    if (psum == -1 || qsum == -1 || rsum == -1) return false;

    // printf("%d %d %d %d\n", psum, qsum, rsum, B);
    if (psum * qsum == rsum) return true;

    return false;
}

int main()
{
    int p, q, r; cin >> p >> q >> r;

    bool met = false;
    for (int i = 2; i <= 40; i++) {
        if (meet(p, q, r, i)) {
            printf("%d\n", i);
            met = true;
            break;
        }
    }
    if (!met) printf("0\n");

    return 0;
}