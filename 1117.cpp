#include <iostream>
using namespace std;
const int U = 20005;
const int V = 5005;

int a[U];
bool seen[V];

int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    
    for (int i = 0; i < n; i++) {
        if (!seen[a[i]]) {
            printf("%d ", a[i]);
            seen[a[i]] = true;
        }
    }
    
    return 0;
}