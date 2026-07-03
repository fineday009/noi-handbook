#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159;
    int h, r;
    cin >> h >> r;
    double ans = 20 * 1000 / (PI * r * r * h);
    printf("%d\n", (int)ceil(ans));
    return 0;
}