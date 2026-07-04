#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int odd = 0, even = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2) odd += i;
        else even += i;
    }
    cout << even << " " << odd << endl;
    return 0;
}