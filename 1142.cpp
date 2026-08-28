#include <iostream>
using namespace std;
char s[1000];

int main()
{
    bool f = true;
    while (scanf("%s", s) != EOF) {
        int len = strlen(s);
        if (f) {
            f = !f;
            printf("%d", len);
        } else printf(",%d", len);
    }
    

    return 0;
}