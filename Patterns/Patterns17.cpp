#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt=64;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*(n - i -1); j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= i;k++)
        {
            cout << char(cnt+k);
        }
        for (int k = i + 1; k >= 1;k--)
        {
            cout << char(cnt+k);
        }

        for (int j = 0; j < 2*(n - i - 1); j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}