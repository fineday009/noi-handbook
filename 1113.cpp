#include <iostream>
using namespace std;

const int N = 105;
int a[N];

int main()
{
    int n; cin >> n;
    int max = -1e9, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > max) max = a[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (a[i] < max) sum += a[i];
    }
    
    cout << sum << endl;
    return 0;
}