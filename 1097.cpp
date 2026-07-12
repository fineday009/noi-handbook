#include <iostream>
using namespace std;

int main()
{
    int h, w;
    char c;
    int d; 
    cin >> h >> w >> c >> d;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            if (i == 1 || i == h) {
                printf("%c", c);
            } else if (j != 1 && j != w) {
                printf("%c", d ? c:' ');
            } else {
                printf("%c", c);
            }
        }
        puts("");
    }
    
    return 0;
}