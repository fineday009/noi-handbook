#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    // 2a + 2b = 2x
    // 2a + 4b = y, b = (y-2x)/2, a=x - b
    int b = (y - 2 * x) / 2;
    int a = x - b;
    cout << a << " " << b << endl;
    
    return 0;
}