#include <iostream>
using namespace std;

int main()
{
    int h; cin >> h;
    double dis = 0, lh = h;
    for (int i = 0; i < 10; i++) {
        if (i == 0) dis = h;
        else dis += lh * 2;
        lh /= 2;
    }
    
    printf("%g\n%g\n", dis, lh);
    
    return 0;
}