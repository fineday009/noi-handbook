#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i - 1; j++) printf(" ");
        for (int j = 0; j < 2 * i + 1; j++) printf("%c", c);
        printf("\n");
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < i + 1; j++) printf(" ");
        for (int j = 0; j < 3 - 2 * i; j++) printf("%c", c); 
        printf("\n");
    }
    return 0;
}