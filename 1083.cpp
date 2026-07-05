#include <iostream>
using namespace std;

int main()
{
    int a, b; cin >> a >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++) {
        ans *= a;
        if (ans > 7) ans %= 7;
    }
    
    switch (ans) {
        case 0:
            puts("Sunday");
            break;
        case 1:
            puts("Monday");
            break;
        case 2:
            puts("Tuesday");
            break;
        case 3:
            puts("Wednesday");
            break;
        case 4:
            puts("Thursday");
            break;
        case 5:
            puts("Friday");
            break;
        case 6:
            puts("Saturday");
            break;
    }
    
    return 0;
}