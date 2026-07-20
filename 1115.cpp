#include <iostream>
using namespace std;
const int N = 10005;
int a[N], b[N];

int main()
{
    int n; cin >> n;
    int fmax = -1e9;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > fmax) fmax = a[i];
        b[a[i]]++;
    }
    
    
    for (int i = 0; i <= fmax; i++) {
        cout << b[i] << endl;
    }
    
    return 0;
}