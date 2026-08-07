// AABCD CDAA
#include <iostream>
using namespace std;
const int N = 61;
char s1[N], s2[N], x[N], t[N];
int l1, l2;

int main()
{
    scanf("%s %s", s1, s2);
    if (strlen(s1) < strlen(s2)) { // 完成s1, s2互换
        strcpy(t, s1);
        strcpy(s1, s2);
        strcpy(s2, t);
    }

    // 用strstr函数判断是否是子串
    strcpy(x, s1);
    if (strstr(strcat(s1, x), s2) == NULL) printf("false\n");
    else printf("true\n");

    return 0;
}
