#include <iostream>
using namespace std;

int main()
{
    int pocket = 0; // 自己口袋里还剩多少钱
    int notEnough = 0; // 是否足够
    int hold = 0; // 给妈妈的存款
    for (int i = 1; i <= 12; i++) {
        int x; cin >> x;
        int left = 300 + pocket - x;
        if (left < 0 && !notEnough) {
            printf("-%d\n", i);
            notEnough = 1;
        }
        if (left >= 100) {
            hold += 100 * (left / 100);
        }
        pocket = left - 100 * (left / 100);
        // printf("%d---%d %d\n", i, left, pocket);
    }
    if (!notEnough) {
        printf("%d\n", (int)(pocket + 1.2 * hold));
    }
    
    return 0;
}