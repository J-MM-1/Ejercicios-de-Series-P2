#include <iostream>
using namespace std;

int main()
{
    int i, n, num;

    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << num << ",";
        }
        else
        {
            cout << num * num << ",";
            num++;
        }
    }
    return 0;
}