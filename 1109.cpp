#include <iostream>
using namespace std;
const int N = 5005;
bool light[N];

int main()
{
    int n, m; cin >> n >> m;
    memset(light, true, sizeof(light));
    
    for (int i = 1; i <= m; i++) {
        for (int j = i; j <= n; j++) {
            if (j % i == 0) light[j] = !light[j];
        }
    }
    
    bool first = true;
    for (int i = 1; i <= n; i++) {
        if (!light[i]) {
            if (first) {
                printf("%d", i);
                first = false;
            } else printf(",%d", i);
        }
    }
    
    return 0;
}