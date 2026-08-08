#include <iostream>
using namespace std;
char s[105];

int main()
{
    cin.getline(s, 100);
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (i == len - 1) printf("%c", s[i] + s[0]);
        else printf("%c", s[i] + s[i + 1]);
    }

    return 0;
}