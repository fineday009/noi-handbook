#include <iostream>
using namespace std;

int main()
{
    char c;
    scanf("%c", &c);
    for (int i = 0; i < 3; i++) {
        // 2n + 1 个*， 3-i-1个空格
        for (int j = 0; j < 3 - i - 1; j++) printf(" ");
        for (int j = 0; j < 2 * i + 1; j++) printf("%c", c);
        printf("\n");
    }
    
    return 0;
}