#include <iostream>
using namespace std;

int main()
{
    int x, y; cin >> x >> y;
    if ((x < 60 && y >= 60) || (x >= 60 && y < 60)) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    
    return 0;
}