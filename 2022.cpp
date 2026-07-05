#include <iostream>
using namespace std;

int main()
{
    int m; cin >> m;
    double sum = 0;
    for (int i = 1; ; i++) {
        sum += 1.0 / i;
        if (sum >= m) {
            printf("%d\n", i);
            break;
        }
    }
    
    return 0;
}