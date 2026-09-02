#include <iostream>
using namespace std;

int maxNum(int x, int y, int z)
{
    if (x > y) return x > z ? x : (y > z ?y:z);
    return y > z ? y : (x > z ?x:z);
}

int main()
{
    int a, b, c; cin >> a >> b >> c;
    printf("%.3f\n", maxNum(a, b, c) * 1.0 / maxNum(a+b, b, c) / maxNum(a, b, b + c));
    return 0;
}