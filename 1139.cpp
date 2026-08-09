#include <iostream>
using namespace std;
char s[25];

int main()
{
    int n; cin >> n; 
    cin.ignore(); // 这也是个坑
    
    for (int i = 0; i < n; i++) {
        
        /**
         * 而 getline(s, 20) 最多只能装 19 个字符。遇到恰好 20 个字符的药名时后果比"截断"严重——cin 会置 failbit，
         * 之后所有 getline 全部静默失败，剩下的药名一行都读不出来。
         */
        cin.getline(s, 21); // 这里是个坑，如果写20，则最多读19个字符
        
        int len = strlen(s);
        for (int j = 0; j < len; j++) {
            if (j == 0) {
                if (s[j] >= 'a' && s[j] <= 'z') s[j] -= 32;
            } else {
                if (s[j] >= 'A' && s[j] <= 'Z') s[j] += 32;
            }
        }
        puts(s);
    }
    
    return 0;
}