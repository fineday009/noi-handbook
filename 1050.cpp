#include <iostream>
using namespace std;

int main()
{
    int x; cin >> x;
    double t1 = 27 + 23 + x / 3.0;
    double t2 = x / 1.2;
    
    if (t1 == t2) puts("All");
    else if (t1 < t2) puts("Bike");
    else puts("Walk");
    
    return 0;
}