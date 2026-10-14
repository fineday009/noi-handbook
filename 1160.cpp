// // 常规递归方法
// #include <iostream>
// using namespace std;

// int f(int n)
// {
//     if (n == 0) return 0;

//     int t = n % 10, tt = n, m = 1;
//     n /= 10;
//     while (n) { 
//         n /= 10;
//         m *= 10;
//     }
//     return m * t + f(tt / 10);
// }

// void solve()
// {
//     int n; cin >> n;
//     cout << f(n) << endl;
// }

// // 输入一个非负整数，输出这个数的倒序数。例如输入123，输出321。

// int main()
// {
//     solve();
//     return 0;
// }

// 尾递归：尾递归能在 O(1) 空间执行，非尾递归必须 O(深度) 空间

#include <iostream>
using namespace std;

int f(int n, int acc)
{
    if (n == 0) return acc;
    return f(n / 10, 10 * acc + n % 10); 
}

int main()
{
    int n; cin >> n;
    cout << f(n, 0) << endl;

    return 0;
}
