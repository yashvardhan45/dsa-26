#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++)
    {
        for(int space=0; space<n-i; space++)
        {
            cout << " ";
        }
        
        if(i == 1)
        {
            cout << "*";
        }
        else
        {
            cout << "*";
            int innerSpaces = (i - 1) * 2 - 1;
            for(int sp=0; sp<innerSpaces; sp++)
            {
                cout << " ";
            }
            cout << "*";
        }
        
        cout << endl;
    }
    
    for(int i=n-1; i>=1; i--)
    {
        for(int space=0; space<n-i; space++)
        {
            cout << " ";
        }
        
        if(i == 1)
        {
            cout << "*";
        }
        else
        {
            cout << "*";
            int innerSpaces = (i - 1) * 2 - 1;
            for(int sp=0; sp<innerSpaces; sp++)
            {
                cout << " ";
            }
            cout << "*";
        }
        
        cout << endl;
    }
    
    return 0;
}
