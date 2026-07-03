#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int a = x % 10, b = x / 10 % 10, c = x / 100 % 10;
    printf("%d\n", a * 100 + b * 10 + c);
    
    return 0;
}