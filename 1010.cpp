#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << fixed << setprecision(9) << a * 1.0 / b << endl;
    return 0;
}