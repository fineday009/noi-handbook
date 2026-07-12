#include <iostream>
using namespace std;
const int MAXN = 100;
int main()
{
    int a[MAXN];
    int n = 0;
    while (cin >> a[n]) n++;
    for (int i = n - 1; i >= 0; i--) cout << a[i] << " ";
    
    return 0;
}