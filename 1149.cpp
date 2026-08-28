#include <iostream>
using namespace std;
char s[505];

bool isAlpha(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int main()
{
    cin.getline(s, 500);
    int len = strlen(s);
    s[len] = ' '; s[len + 1] = '\0';

    int c = 0, maxLen = -1, maxStart = 0;
    char ans[50];
    for (int i = 0; i <= len; i++) {
        if (isAlpha(s[i])) c++;
        else {
            if (c > maxLen) {
                maxLen = c;
                maxStart = i - c;
                strncpy(ans, s + maxStart, maxLen);
                ans[maxLen] = '\0';
            }
            c = 0;
        }
    }
    // printf("%.*s\n", maxLen, s + maxStart);
    printf("%s\n", ans);

    return 0;
}