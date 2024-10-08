#include <iostream>
using namespace std; 

int main() {
    int N, n1, n2;
    n1 = 1;
    n2 = 0;

    cout << "Ingrese el valor de N: ";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 != 0)
        {
            cout << n1 + n2 << ",";
            n1 += 2;
        }
        else
        {
            cout << n1 + n2 << ",";
            n1--;
        }
        if (i % 4 == 0)
        {
            n2 += 2;
        }
    }
    return 0;
}