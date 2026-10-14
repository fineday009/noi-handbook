#include <iostream>
using namespace std;
char s[10];

int main()
{
    int n; cin >> n;
    int counter = 0;
    while (n--) {
        double t; int c;
        scanf("%s %lf %d", s, &t, &c);
        if (t >= 37.5 && c == 1) {
            puts(s);
            counter++;
        }
    }
    printf("%d\n", counter);

    return 0;
}