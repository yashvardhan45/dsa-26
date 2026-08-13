#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << "*";
        }
        
        int gap = 2 * (n - i);
        for(int space=0; space<gap; space++)
        {
            cout << " ";
        }
        for(int j=1; j<=i; j++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    
    for(int i=n-1; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout << "*";
        }
        
        int gap = 2 * (n - i);
        for(int space=0; space<gap; space++)
        {
            cout << " ";
        }
        for(int j=1; j<=i; j++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    return 0;
}