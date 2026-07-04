#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y; cin >> x >> y;
    if (abs(x) <= 1 && abs(y) <= 1) puts("yes");
    else puts("no");
    return 0;
}