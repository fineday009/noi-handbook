#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << (n - 0.8 * m) << endl;
    return 0;
}