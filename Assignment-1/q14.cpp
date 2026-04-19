#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n > m) {
        cout << "Min = "<< m << endl;
        cout << "Max = "<< n;
    } else {
        cout << "Min = "<< n << endl;
        cout << "Max = "<< m;
    }
    return 0;
}