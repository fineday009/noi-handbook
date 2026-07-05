#include <iostream>
using namespace std;

int main()
{
    int m; cin >> m;
    for (int i = 1; ; i++) {
        int sum = i * (i + 1) / 2;
        if (sum > m) {
            printf("%d\n", i);
            break;
        }
    }
    
    return 0;
}