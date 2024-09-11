#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "*";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << "*";
        }
        cout << endl;
        for (int i = 2; i < n; i++)
        {
            for (int j = 0; j < 1; j++)
            {
                cout << "*";
            }
            for (int k = 0; k < n - 2; k++)
            {
                cout << " ";
            }
            for (int j = 1; j > 0; j--)
            {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            cout << "*";
        }
    }
}