#include<iostream>
using namespace std;

int main()
{
    double x, y, z;
    cin >> x >> y >> z;
    double ans = x;
    if (y > ans) ans = y;
    if (z > ans) ans = z;
    
    cout << ans << endl;
    
    return 0;     
}