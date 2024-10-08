#include <iostream>
using namespace std; 

int main() {
    int N, n;
    n = 1;
    cout << "Ingrese el valor de N: ";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {

        if (i % 4 == 0)
        {
            cout << "0,";
            n--;
        }
        else
        {
            cout << n << ",";
            n += 2;
        }
    }
    return 0;
}