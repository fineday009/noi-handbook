//有一个牧场，牧场上的牧草每天都在匀速生长，这片牧场可供15头牛吃20天，或可供20头牛吃10天，那么，这片牧场每天新生的草量可供几头牛吃1天？
/**
牛一天吃x草，草一天长d
15x * 20 = t0 + 20*d
20x * 10 = t0 + 10*d
ans是结果，则d = ans * x

300 = t0 / x + 20ans
200 = t0 / x + 10ans
两式相减，得到ans = 10

**/

#include <iostream>
using namespace std;

int main()
{
    cout << 10 << endl;
    
    return 0;
}