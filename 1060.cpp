#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double score; cin >> score;
        sum += score; 
    }
    printf("%.4f\n", sum / n);
    return 0;
}