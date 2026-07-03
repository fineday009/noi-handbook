#include <iostream>
using namespace std;

int main()
{
    int x; cin >> x;
    int a = 1, b = 1, c = 1;
    if (x % 3 == 0) a = 0;
    if (x % 5 == 0) b = 0;
    if (x % 7 == 0) c = 0;
    
    if (a == 1 && b == 1 && c == 1) printf("n");
    else {
        if (a == 0) printf("3 ");
        if (b == 0) printf("5 ");
        if (c == 0) printf("7 ");
    }

    printf("\n");
    return 0;    
}