#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cin>>n;

    for(i=n/2; i<=n; i+=2)
    {
        for(j=1; j<n-i; j+=2)
        {
            cout<<" ";
        }

        for(j=1; j<=i; j++)
        {
            cout<<"*";
        }

        for(j=1; j<=n-i; j++)
        {
            cout<<" ";
        }

        for(j=1; j<=i; j++)
        {
            cout<<"*";
        }

        cout<<"\n";
    }

    for(i=n; i>=1; i--)
    {
        for(j=i; j<n; j++)
        {
            cout<<" ";
        }

        for(j=1; j<=(i*2)-1; j++)
        {
            cout<<"*";
        }

        cout<<"\n";
    }

    return 0;
}
