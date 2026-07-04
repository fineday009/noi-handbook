#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        sum += x;
    }
    printf("%d %.5f\n", sum, sum * 1.0 / n);
    return 0;
}