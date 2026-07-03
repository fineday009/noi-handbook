#include <iostream>
using namespace std;

int main()
{
    int x; cin >> x;
    
    int a = 0, b = 0, c = 0, best = 0;
    for (int i = x/4; i >= 0; i--) {
        for (int k = 0; k <= x / 5; k++) {
            for (int j = 0; j <= x / 6; j++) {
                int r = x - (4 * i + 5 * k + 6 * j);
                if (r < 0) break;
                if (r == 0) {
                    if (i + j + k > best) {
                        best = i + j + k;
                        a = i;
                        b = k;
                        c = j;
                    }
                }
            }   
        }
    }
    
    printf("%d %d %d\n", c, b, a);
    return 0;
}