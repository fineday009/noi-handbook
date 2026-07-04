#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int score; cin >> score;
        sum += score; 
    }
    printf("%.2f\n", sum * 1.0 / n);
    return 0;
}