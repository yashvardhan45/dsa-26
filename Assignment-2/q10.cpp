#include<iostream>
using namespace std;
int main()
{
    long long n, x;
    cin >> x >> n;
    long long exponent = 1;
    for (int i = 1; i <= n; i++)
    {
        exponent *= x;
    }
    cout << exponent;
}