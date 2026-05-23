#include<iostream>
using namespace std;
int main()
{
    int n, positive = 0, negative = 0, even = 0, odd = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            positive++;
        }
        if (a[i] < 0) {
            negative++;
        }
        if (a[i] % 2 == 0) {
            even++;
        }
        if (a[i] % 2 != 0) {
            odd++;
        }
    }
    cout << positive << endl;
    cout << negative << endl;
    cout << even << endl;
    cout << odd << endl;
}