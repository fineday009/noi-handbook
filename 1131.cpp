#include <iostream>
using namespace std;
char s[505], t[505];

int main()
{
    double f; cin >> f;
    cin >> s; cin >> t;
    int len = strlen(s);

    int same = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == t[i]) same ++;
    }

    double tmp = same * 1.0 / len;
    if (tmp >= f) puts("yes");
    else puts("no");

    return 0;
}