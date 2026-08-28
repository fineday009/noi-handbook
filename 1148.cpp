#include <iostream>
using namespace std;
char s[2505];

int main()
{
    int n; cin >> n;
    cin.ignore();
    cin.getline(s, 2505);
    int len = strlen(s);
    s[len] = '#'; s[len + 1] = '\0';

    int c = 1;
    bool exist = false;
    char ans = '0';
    for (int i = 1; i <= len; i++) {
        if (s[i] == s[i - 1]) c++;
        else {
            if (c >= n) {
                exist = true;
                ans = s[i - 1];
                break;
            }
            c = 1;
        }
    }

    if (!exist) printf("No");
    else printf("%c", ans);

    return 0;
}