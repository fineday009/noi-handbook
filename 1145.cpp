#include <iostream>
using namespace std;
char s[1005];

int main()
{
    cin.getline(s, 1000);
    int len = strlen(s);
    s[len] = '#'; s[len + 1] = '\0';

    int c = 1;
    for (int i = 1; i <= len; i++) {
        if (s[i] != s[i - 1]) {
            printf("%d%c", c, s[i - 1]);
            c = 1;
        } else c++;
    }

    return 0;
}