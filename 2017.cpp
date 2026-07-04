#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) printf("%d ", i);
    }
    puts("");
    return 0;
}