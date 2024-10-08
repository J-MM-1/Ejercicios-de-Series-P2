#include <iostream>
using namespace std;

int main() {
    int N, n;
    n = 1;

    cout << "Ingrese el valor de N: ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            cout << n << ",";
            n += 2;
        }
        else
        {
            cout << n << ",";
            n--;
        }
    }
    return 0;
}