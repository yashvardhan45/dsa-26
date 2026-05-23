#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    long long pallindrome = n;
    long long rev = 0;

    while (n > 0)
    {
        long long digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    if (rev == pallindrome) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
