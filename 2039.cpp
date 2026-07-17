#include <iostream>
using namespace std;
const int N = 25;
int a[N];

int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] < a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    
    for (int i = 0; i < n; i++) printf("%d\n", a[i]);
    
    return 0;
}