#include <iostream>
using namespace std;
// 用递归算法将一个十进制数X转换成任意进制数M（M≤16）。
// 31 16 ｛将十进制31转化为十六进制数｝
// 1F

void f(int x, int M)
{
    if (x >= M) f(x / M, M);

    putchar("0123456789ABCDEF"[x % M]);
}

int main()
{
    int x, m; cin >> x >> m;
    f(x, m);
    return 0;
}