#include <iostream>
using namespace std;
int main()
{
    int i, j, k, N;

    cin>>N;
    char ch;
    for(i=1; i<=N; i++)
    { 
        if(i & 1)
            k = 97;

        else
            k = 98;
        
        for(j=1; j<=i; j++, k+=2)
        {
           
           char c=(char)k;
           cout<<c<<" ";
        }

        cout<<"\n";
    }

    return 0;
}
