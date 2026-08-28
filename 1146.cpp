#include <iostream>
using namespace std;
char s[105];

int main()
{
    cin.getline(s, 100);
    int len = strlen(s);

    bool yes = true;
    for (int p = 0, q = len - 1; p < q; p++, q--) {
        if (s[p] != s[q]) {
            yes = false;
            break;
        }
    }
    printf("%s\n", yes ? "yes":"no");

    return 0;
}