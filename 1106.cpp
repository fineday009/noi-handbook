#include <iostream>
using namespace std;
const int N = 105;
int a[N];

int main()
{
    int n; cin >> n;
    
    int b[4];
    memset(b, 0, sizeof(b));
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] >= 0 && a[i] <= 18) b[0]++;
        else if (a[i] >= 19 && a[i] <= 35) b[1]++;
        else if (a[i] >= 36 && a[i] <= 60) b[2]++;
        else if (a[i] >= 61) b[3]++;
    }
    
    for (int i = 0; i < 4; i++) printf("%.2f%%\n", b[i] * 100.0 / n);
        
    return 0;
}