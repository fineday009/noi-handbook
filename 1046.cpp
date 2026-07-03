#include <iostream>
using namespace std;

int main()
{
    int x; cin >> x;
    printf("%s\n", (x % 3 || x % 5) ? "NO":"YES");
    return 0;
}