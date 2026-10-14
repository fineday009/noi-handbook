#include <iostream>
using namespace std;
char s[205], a[105], b[105];
char word[205];

int main()
{
    cin.getline(s, sizeof(s));
    cin.getline(a, sizeof(a));
    cin.getline(b, sizeof(b));
    
    int j = 0, len = strlen(s);
    for (int i = 0; i <= len; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            word[j] = '\0';
            if (strcmp(word, a) == 0) {
                printf("%s", b);
            } else printf("%s", word);

            if (s[i] == ' ') {
                cout << ' ';
            }
            j = 0;
        } else {
            word[j] = s[i];
            j++;
        }
    }
    puts("");

    return 0;
}

/**
输入一个字符串，以回车结束（字符串长度≤200）。该字符串由若干个单词组成，单词之间用一个空格隔开，所有单词区分大小写。现需要将其中的某个单词替换成另一个单词，并输出替换之后的字符串。

【输入】
第1行是包含多个单词的字符串 s；

第2行是待替换的单词a(长度 ≤ 100)；

第3行是a将被替换的单词b(长度 ≤ 100)。

s,a,b最前面和最后面都没有空格。

【输出】
输出只有 1 行，将s中所有单词a替换成b之后的字符串。

【输入样例】
You want someone to help you
You
I
【输出样例】
I want someone to help you
*/
