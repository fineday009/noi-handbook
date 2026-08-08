#include <iostream>
using namespace std;
char s[85];

int main()
{
    cin.getline(s, 80);
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] == 'z') printf("a");
        else if (s[i] == 'Z') printf("A");
        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) putchar(s[i] + 1);
        else putchar(s[i]);
    }

    return 0;
}