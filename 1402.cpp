#include <iostream>
using namespace std;
char k[105], c[1005], m[1005];

int main()
{
    // 加密后移动，解密往前移动。这题的示例是错的，洛谷的是对的：https://www.luogu.com.cn/problem/P1079
    /**
     *  CompleteVictory
        Yvqgpxaimmklongnzfwpvxmniytm
        Wherethereisawillthereisaway
     */
    cin.getline(k, sizeof(k)); cin.getline(c, sizeof(c));

    int kl = strlen(k), cl = strlen(c);
    int t = 0, times = (cl + kl) / kl;
    while (t < times) {
        for (int i = 0; i < kl && (t * kl + i) < cl; i++) {
            // 把ci反向移动ki次
            int dis = 0;
            if (k[i] >= 'a' && k[i] <= 'z') dis = k[i] - 'a';
            else dis = k[i] - 'A';

            int pos = t * kl + i;
            bool isUpper = c[pos] >= 'A' && c[pos] <= 'Z';

            char cur = (c[pos] - dis);
            if (isUpper) {
                if (cur < 'A') cur += 26;
            } else {
                if (cur < 'a') cur += 26;
            }
            printf("%c", cur);
        }
        t++;
    }

    return 0;
}