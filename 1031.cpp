#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    printf("%d%d%d\n", n % 10, n/10%10, n/100);
    
    return 0;
}