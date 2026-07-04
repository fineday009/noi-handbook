#include <iostream>
using namespace std;

int main()
{
    int x; cin >> x;
    if ((x % 4 == 0 && x % 100) || x % 400 == 0) puts("Y");
    else puts("N");
    
    return 0;
} 