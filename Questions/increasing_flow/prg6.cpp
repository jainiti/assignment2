#include <iostream>
using namespace std;

int main()
{
    int i, j, diff, value, N;

    cin>>N;

    diff = 1;
    value = 1;

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<value<<" ";

            value += diff; 
            diff++;        
        }

        cout<<"\n";
    }

    return 0;
}
