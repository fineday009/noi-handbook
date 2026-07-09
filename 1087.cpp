#include <iostream>
using namespace std;

int main()
{
    int k; cin >> k;
    double sum = 0;
    int i = 1;
    while (sum <= k) {
        sum += 1.0 / i++;
    }
    
    cout << i - 1 << endl;
    return 0;
}