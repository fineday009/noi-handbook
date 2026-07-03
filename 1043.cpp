#include <iostream>
using namespace std;

int main()
{
    int x, y; cin >> x >> y;
    if (x > y) printf(">");
    else if (x == y) printf("=");
    else printf("<");
    puts("");
    
    return 0;
}