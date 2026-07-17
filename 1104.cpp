#include <iostream>
using namespace std;
const int N = 10;
int a[10];

int main()
{
    double p[10] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};
    double ans = 0;
    for (int i = 0; i < N; i++) {
        int x; cin >> x;
        ans += x * p[i];
    }
    
    printf("%.1f\n", ans);
    
    return 0;
}