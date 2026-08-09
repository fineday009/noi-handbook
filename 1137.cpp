#include <iostream>
using namespace std;
char s[55];

int main()
{
    // GSOOWFASOq
    cin.getline(s, 50);
    int len = strlen(s);

    for (int i = 0, j = len - 1; i < j; i++, j--) { // reverse
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
    for (int i = 0; i < len; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
        else s[i] += 32;
    }
    for (int i = 0; i < len; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = (s[i] - 'a' + 3) % 26 + 'a';
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = (s[i] - 'A' + 3) % 26 + 'A';
        }
    }

    for (int i = 0; i < len; i++) putchar(s[i]);

    return 0;
}