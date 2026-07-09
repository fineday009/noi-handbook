#include <iostream>
using namespace std;

int main()
{
    int m, k; cin >> m >> k;
    int t = m, tc = 0;
    while (t != 0) {
        int r = t % 10;
        if (r == 3) tc++;
        t /= 10;
    }
    
    if (tc == k && m % 19 == 0) printf("YES\n");
    else printf("NO");
    
    return 0;
}