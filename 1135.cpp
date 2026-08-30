#include <iostream>
using namespace std;
char s[256];

int main()
{
    // ATATGGATGGTGTTTGGCTCTG
    // TATACCTACCACAAACCGAGAC
    cin.getline(s, 255);
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] == 'A') printf("T");
        else if (s[i] == 'T') printf("A");
        else if (s[i] == 'G') printf("C");
        else printf("G");
    }

    return 0;
}