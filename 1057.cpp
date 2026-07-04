#include <iostream>
using namespace std;

int main()
{
    int a, b; char c;
    cin >> a >> b >> c;
    switch (c) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b == 0) printf("Divided by zero!\n");
            else printf("%d\n", a / b);
            break;
        default:
            printf("Invalid operator!\n");
    }
    
    return 0;
}