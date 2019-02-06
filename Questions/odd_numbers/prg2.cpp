#include <iostream>
using namespace std;
int main()
{
    int i, j, k, N;
    cin>>N;

    for(i=1; i<=N; i++)
    {
        k = (i * 2) - 1;
        for(j=1; j<i; j++)
        {
            cout<<"  ";
        }

        for(j=i; j<=N; j++, k+=2)
        {
            cout<<k<<" ";
        }

        cout<<"\n";
    }

    return 0;
}
