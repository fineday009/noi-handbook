#include <iostream>
using namespace std;

int main()
{
    int c = 0;
    int ans = -1;
    bool occurs = false;
    while (c < 7) {
        int x, y; cin >> x >> y;
        if (x + y > 8 && !occurs) {
            ans = c + 1;
            occurs = true;
        } 
        c++;
    }
    cout << ans << endl;
    return 0;
}