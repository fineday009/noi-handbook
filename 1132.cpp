#include <iostream>
using namespace std;
char s[10], t[10];

int main()
{
    // "Rock", "Scissors", "Paper"
    // Rock > Scissors,Paper > Rock,Scissors > Paper
    // R > S, P > R, S > P
    // P, R, S
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%s%s", s, t);
        if (s[0] == t[0]) puts("Tie");
        else if (s[0] == 'P') {
            printf("%s\n", t[0] == 'R' ? "Player1": "Player2");
        } else if (s[0] == 'R') {
            printf("%s\n", t[0] == 'P' ? "Player2": "Player1");
        } else if (s[0] == 'S') {
            printf("%s\n", t[0] == 'P' ? "Player1": "Player2");
        }
    }

    return 0;
}