#include <iostream>
using namespace std;

int main()
{
    int x; cin >> x;
    while (x != 0) {
        printf("%d ", x % 10);
        x /= 10;        
    }
    
    return 0;
}