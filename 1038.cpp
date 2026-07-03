#include <iostream>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    
    double remain = n  - (y*1.0/x);
    int ans = 0;
    if (remain < 0) ans = 0;
    else ans = (int)remain;
    
    printf("%d\n", ans);
    return 0;
}