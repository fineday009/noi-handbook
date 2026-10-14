#include <iostream>
using namespace std;
char t[105];
int chs[26];

bool isPrime(int n)
{
    if (n <= 1) return false;

    for (int i = 2; i <= n/i; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    // cin >> t;
    cin.getline(t, sizeof(t));
    t[strcspn(t, "\t\r\n")] = '\0';
    int len = strlen(t);
    for (int i = 0; i < len; i++) chs[t[i] - 'a']++;

    int maxN = -1, minN = 105;
    for (int i = 0; i < 26; i++) {
        if (chs[i] == 0) continue;
        if (chs[i] > maxN) maxN = chs[i];
        if (chs[i] < minN) minN = chs[i];
    }
    // printf("%d %d\n", maxN, minN);
    if (isPrime(maxN - minN)) printf("%s\n%d\n", "Lucky Word", maxN - minN);
    else printf("%s\n%d\n", "No Answer", 0);

    return 0;
}