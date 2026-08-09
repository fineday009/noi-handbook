#include <iostream>
using namespace std;
char s[100];

int main()
{
    // cin.getline(s, 100); int len = strlen(s);
    // for(int i = 0; i < len; i++) {
    //     if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
    //     putchar(s[i]);
    // }
    
    char ch;
    while ((ch = getchar()) != EOF) {
        if (ch >= 'a' && ch <= 'z') putchar(ch - 32);
        else putchar(ch);
    }

    return 0;
}