#include <iostream>
using namespace std;
char s1[105], s2[105];
int l1, l2, i = 0, j = 0;

int main()
{
    cin.getline(s1, 105);
    cin.getline(s2, 105);
    l1 = strlen(s1); l2 = strlen(s2);

    // 双指针
    bool ans = true;
    while (i < l1 || j < l2) {
        if (s1[i] == ' ') i++;
        else if (s2[j] == ' ') j++;
        else if (!( s1[i] == s2[j] || (s1[i] - 32 == s2[j]) || (s1[i] + 32 == s2[j]))) {
            ans = false;
            break;
        } else {
            i++; j++;
        }
    }

    printf("%s\n", ans ? "YES":"NO");
    return 0;
}