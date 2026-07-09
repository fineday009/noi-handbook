#include <iostream>
using namespace std;

int main()
{
    int x; cin >> x;
    for (int i = 1; i <= x; i++) {
        int j = 1;
        while (j <= i) {
            printf("*");
            j++;
        }
        puts("");
    }
    
    return 0;
}