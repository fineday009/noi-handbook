#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    
    int min = 0x3f3f3f3f, max = 0x80000000;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x < min) min = x;
        if (x > max) max = x;
    }
    
    cout << (max - min) << endl;
    return 0;
}