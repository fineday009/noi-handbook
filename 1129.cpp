#include <iostream>
using namespace std;
char s[300];

int main()
{
    cin.getline(s, 255);

    int ans = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= '0' && s[i] <= '9') ans++;
    }
    printf("%d\n", ans);

    return 0;
}