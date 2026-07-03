#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    printf("%s\n", a % 2 ? "" : "yes");
    
    return 0;
}