#include <iostream>
using namespace std;

char w[20], a[1000005];

int lower(int c) { return (c >= 'A' && c <= 'Z') ? c + 32 : c; }

int main()
{
    fgets(w, sizeof w, stdin);
    fgets(a, sizeof a, stdin);
    w[strcspn(w, "\r\n")] = '\0';
    a[strcspn(a, "\r\n")] = '\0';

    int lw = strlen(w), cnt = 0, first = -1;
    for (int i = 0; a[i]; ) {
        while (a[i] == ' ') i++;
        if (!a[i]) break;

        int st = i;
        while (a[i] && a[i] != ' ') i++;

        if (i - st == lw) {
            int k = 0;
            while (k < lw && lower(a[st + k]) == lower(w[k])) k++;
            if (k == lw) {
                if (cnt == 0) first = st;
                cnt++;
            }
        }
    }

    if (cnt == 0) puts("-1");
    else printf("%d %d\n", cnt, first);

    return 0;
}