#include <iostream>
using namespace std;

int main()
{
    int rows, cols, i, j;

    cin>>rows>>cols;

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            if(i == j || (j == (cols+1) - i))
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
        }

        cout<<"\n";
    }

    return 0;
}
