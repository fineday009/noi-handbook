#include <iostream>
using namespace std;


/**
现有资源加上新生资源可供x亿人生活a年，或供y亿人生活b年。

为了能够实现可持续发展，避免资源枯竭，地球最多能够养活多少亿人？


这题的坑：可持续的意思是新生的刚好够人吃，和牛吃草一个意思。


t0 + a*d = x * a * c
t0 + b*d = y * b * c
d / c = (xa - yb) / (a - b)

t0*b  + abd = xabc
t0*a  + abd = yabc
t0 / c = ab(x - y) / (a - b)

这个式子定义错了，要看1005的做法，直接d = ans * c
t0 + d = ans * c

**/

int main()
{
    int x, a, y, b;
    
    cin >> x >> a >> y >> b;
    // cout << ((y*b - x*a) / (b - a) + a*b*(y -x)*(b - a)) << endl;
    // cout << (x * a - y * b) / (a - b) << endl;
    printf("%.2f\n", (x * a - y * b) / (a - b) * 1.0);
    return 0;
}