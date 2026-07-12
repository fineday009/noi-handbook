#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    double s = 1; long long m = 1;
    for (int i = 1; i <= n; i++) {
        m = m * i;
        s = (s + 1.0 / m);
    }    
    printf("%.10f\n", s);
    return 0;
}