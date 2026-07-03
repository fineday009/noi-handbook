#include <iostream>
#include <cmath>
using namespace std;

#define dist(a, b, c, d) sqrt((a-c)*(a-c) + (b-d)*(b-d))
#define hyln(p, a, b, c) sqrt(p * (p - a) * (p - b) * (p - c))

int main()
{
    double x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double a = dist(x1, y1, x2, y2);
    double b = dist(x1, y1, x3, y3);
    double c = dist(x2, y2, x3, y3);
    
    // 海伦二世公式,p = (a + b + c) / 2
    // s = sqrt(p * (p - a) * (p - b) * (p - c))
    
    double p = (a + b + c) / 2;
    printf("%.2f\n", hyln(p, a, b, c));
    return 0;
}