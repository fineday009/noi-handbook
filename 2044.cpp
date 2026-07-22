#include <iostream>
#include <cstring>
using namespace std;
char ch[105];

int main()
{
    // char s[105] + cin >> s 会读一个不含空格的单词并自动补字符串结尾符 '\0'；strlen 在 <cstring> 里——这次头文件我可写上了 😄。如果以后题目要读带空格的整行，就要换 cin.getline(s, 105)，先记个印象。
    cin >> ch;
    int len = strlen(ch);
    if (len > 0 && ch[len - 1] == '.') len--;   // 题目保证以'.'结束，去掉终止符再判断

    bool ans = true;
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (ch[i] != ch[j]) {
            ans = false;
            break;
        }
    }
    
    printf("%s", ans ? "Yes" : "No");
    
    return 0;
}