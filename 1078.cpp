#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int p1 = 1, q1 = 2;
    double sum = 2.0;
    
    for (int i = 2; i <= n; i++) {
        sum += (p1 + q1) * 1.0 / q1;
        int t = p1 + q1;
        p1 = q1; q1 = t;
    }
    
    printf("%.4f\n", sum);
    
    return 0;
}