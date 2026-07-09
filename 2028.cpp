#include <iostream>
using namespace std;

int main()
{
    // 3:15, 1:3, 3:1

    for (int i = 0; i <= 100 / 5; i++) {
        for (int j = 0; j <= 100 / 3; j++) {
            for (int k = 0; k <= 3 * 100; k += 3) {
                if (i * 5 + j * 3 + k / 3 == 100 && i + j + k == 100) {
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
    
    return 0;
}