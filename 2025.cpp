#include <iostream>
using namespace std;

int main()
{
    for (int i = 7; ;i++) {
        if (i % 2 == 1 && i % 3 == 1 && i % 4 == 1 && i % 5 == 1 && i % 6 == 1 && i % 7 == 0) {
            printf("%d\n", i);
            break;        
        }
    }
    
    return 0;
}