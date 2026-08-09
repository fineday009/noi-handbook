#include <iostream>
using namespace std;
char s[205], t[205];

int main()
{
    cin.getline(s, 200); cin.getline(t, 200);
    int l1 = strlen(s), l2 = strlen(t);
    if (l1 < l2) {
        if (strstr(t, s) != NULL) printf("%s is substring of %s\n", s, t);
        else puts("No substring");
    } else {
        if (strstr(s, t) != NULL) printf("%s is substring of %s\n", t, s);
        else puts("No substring");
    }

    return 0;
}