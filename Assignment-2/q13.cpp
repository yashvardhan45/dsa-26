#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    long long rev = 0;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    while (n > 0)
    {
        long long digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    cout << rev;
    return 0;
}