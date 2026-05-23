#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    int sum = 0;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    while (n > 0)
    {
        int digit = n % 10;
        sum = sum + digit;
        n /= 10;
    }

    cout << sum;
    return 0;
}