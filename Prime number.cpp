#include <iostream>
using namespace std;
bool getprime(int n)
{
    if (n <= 0)
    {
        return false;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    if (getprime(n))
        cout << "prime" << endl;
    else
        cout << "not prime" << endl;

    // for (int i = 2; i <= n; i++)
    // {
    //     bool prime = getprime(i);
    //     if (prime)
    //     {
    //         cout << i << " ";
    //     }
    // }
}
