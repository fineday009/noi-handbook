#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    
    if (n < 0) puts("negative");
    else if (n == 0) puts("zero");
    else puts("positive");
    
    return 0;
}