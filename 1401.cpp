#include <iostream>
using namespace std;

int q[500];
bool seen[1000];

int main()
{
    int m, n; cin >> m >> n;
    int ans = 0;

    int head = 0, tail = -1;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (seen[x]) continue;

        ans++;
        if (tail - head + 1 == m) seen[q[head++]] = false;
        q[++tail] = x;
        seen[q[tail]] = true;
    }

    printf("%d\n", ans);

    return 0;
}