#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        for(int space=0; space<i-1; space++)
        {
            cout << " ";
        }
        
        int stars = n - i + 1;
        
        if(i == 1)
        {
            for(int j=1; j<=stars; j++)
            {
                cout << "*";
                if(j < stars)
                    cout << " ";
            }
        }
        else if(stars == 1)
        {
            cout << "*";
        }
        else
        {
            cout << "*";
            int innerSpaces = (stars - 1) * 2 - 1;
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
