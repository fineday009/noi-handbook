#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    while (n != 1) {
        if (n % 2) {
            int t = n;
            n = 3 * n + 1;
            printf("%d*3+1=%d\n", t, n);  
        } else {
            int t = n;
            n /= 2;
            printf("%d/2=%d\n", t, n);
        }
    }
    puts("End");
    
    return 0;
}