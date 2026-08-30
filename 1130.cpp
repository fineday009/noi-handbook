#include <iostream>
using namespace std;
int cache[26];
char s[100005];

int main()
{
    cin.getline(s, 100000);
    // gets(s);

    int len = strlen(s);
    for (int i = 0; i < len; i++) cache[s[i] - 'a']++;

    bool found = false;
    for (int i = 0; i < len; i++) {
        if (cache[s[i] - 'a'] == 1) {
            printf("%c\n", s[i]);
            found = true;
            break;
        }
    }
    if (!found) printf("no\n");

    return 0;
}