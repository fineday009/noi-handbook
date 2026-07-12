#include <iostream>
using namespace std;
const int MAXN = 50;
int a[MAXN];

int main()
{
    int n, len = 0; cin >> n;
    while (cin >> a[len]) len++;
    
    int t = a[0];
    for (int i = 0; i < len - 1; i++) {
        a[i] = a[i + 1];
    }
    a[len - 1] = t;
    
    for (int i = 0; i < len; i++) {
        cout << a[i] << " ";
    }
    return 0;
}