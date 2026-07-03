#include <iostream>
using namespace std;

int main()
{
    char c; cin >> c;
    int d = (int)c;
    printf("%s\n", d % 2 ?"YES":"NO");
    
    return 0;
}