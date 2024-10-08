#include <iostream>
using namespace std; 

int main()
{
    int i, n, it = 0, num = 0, cont = 1;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << num;
        for (int j = 1; j <= cont; j++)
        {
            num = it;
            num++;
            cout << num << ",";
        }
        it = num;
        num = 0;
        cont++;
    }
    return 0;
}