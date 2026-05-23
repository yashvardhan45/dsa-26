#include<iostream>
using namespace std;
int main()
{
    long long n, factorial = 1;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    cout << factorial;
}