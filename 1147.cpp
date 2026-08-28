#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int best = -1; char name[25];
    while (n--) {
        int t; char tn[25];
        scanf("%d %s", &t, tn);
        if (t > best) {
            best = t;
            strcpy(name, tn);
        }
    }
    printf("%s", name);

    return 0;
}