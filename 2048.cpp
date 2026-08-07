#include <iostream>
using namespace std;

int main()
{
    string s[25];
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> s[i];

    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= n - i; j++) {
            if (s[j] > s[j + 1]) swap(s[j], s[j + 1]);
        }
    }

    for (int i = 1; i <= n; i++) cout << s[i] << endl;

    return 0;
}