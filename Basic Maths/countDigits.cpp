#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    int temp = n;
    while (temp > 0)
    {
        int lastDig = temp % 10;
        if ( lastDig != 0 &&  n % lastDig == 0)
        {
            count++;
        }
        temp = temp / 10;
    }

    cout << count;
}