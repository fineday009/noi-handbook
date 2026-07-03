#include <iostream>
using namespace std;

int main()
{
    int x, y, z; cin >> x >> y >> z;
    int ans = x;
    if (y > ans) ans = y;
    if (z > ans) ans = z;
    
    printf("%d\n", ans);
    
    return 0;
}