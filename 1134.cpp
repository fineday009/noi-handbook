#include <iostream>
using namespace std;
char s[25];

int main()
{
    /**
     * C语言标识符要求：
        1.非保留字；
        2.只包含字母、数字及下划线（“_”）。
        3.不以数字开头。
     */
    cin.getline(s, 20);
    int len = strlen(s);
    bool yes = true;
    for (int i = 0; i < len; i++) {
        if (!(((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9') || s[i] == '_') 
            && !(s[0] >= '0' && s[0] <= '9'))) {
            yes = false;
            break;
        }
    }
    printf("%s\n", yes ?"yes":"no");

    return 0;
}