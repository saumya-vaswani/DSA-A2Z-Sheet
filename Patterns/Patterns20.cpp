#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        for (int k = 1; k <= 4 * (n - i - 1); k++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n-1; i>0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        for (int k = 0; k < 4 * (n-i); k++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}