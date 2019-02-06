#include <iostream>
using namespace std;

int main()
{
    int i, j, N, colCount, value;

    colCount = 1;
    value = 1;

    cin>>N;

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=colCount; j++)
        {
            if(value == 2*N)
                value = 1; 

            char ch=(char)(64+value);
            cout<<ch<<" ";

            value++;
        }

        cout<<"\n";

        colCount *= 2;
    }

    return 0;
}
