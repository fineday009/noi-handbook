#include <iostream>
using namespace std;
const int N = 105;
int a[N];

int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = n - 1; i > -1; i--) cout << a[i] << " ";
    
    return 0;
}