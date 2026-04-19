#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int mn = A, mx = A;

    if (B < mn) mn = B;
    if (C < mn) mn = C;
    if (B > mx) mx = B;
    if (C > mx) mx = C;

    cout << "Min = " << mn << endl;
    cout << "Max = " << mx;
    return 0;
}
