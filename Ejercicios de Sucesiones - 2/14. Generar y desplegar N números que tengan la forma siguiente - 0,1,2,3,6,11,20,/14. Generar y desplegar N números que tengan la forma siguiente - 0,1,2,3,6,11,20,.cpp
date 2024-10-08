#include <iostream>
using namespace std; 

int main()
{
    int i, n, a = 0, b = 1, c = 2, d;
    cin >> n;
    cout << a << "," << b << "," << c << ",";
    n = n - 3;
    for (i = 1; i <= n; i++)
    {
        d = a + b + c;
        a = b;
        b = c;
        c = d;
        cout << d << ",";
    }
    return 0;
}