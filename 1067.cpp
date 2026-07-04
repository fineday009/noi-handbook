#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int p = 0, q = 0, r = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        switch (x) {
            case 1:
                p++;
                break;
            case 5:
                q++;
                break;
            case 10:
                r++;
                break;
            default:
                break;
        }
    }
    printf("%d\n%d\n%d\n", p, q, r);
    return 0;
}