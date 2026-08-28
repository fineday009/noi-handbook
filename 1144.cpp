#include <iostream>
using namespace std;
char s[505];
/**
 * 【输入样例】
hello world
【输出样例】
olleh dlrow
 */

int main()
{
    cin.getline(s, 505);
    int len = strlen(s);

    int start = 0;
    for (int i = 0; i <= len; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            int l = start, r = i - 1;
            while (l < r) { char t = s[l]; s[l] = s[r]; s[r] = t; l++; r--;}
            start = i + 1;
        }
    }

    puts(s);

    return 0;
}