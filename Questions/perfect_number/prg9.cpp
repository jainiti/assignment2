#include <iostream>
using namespace std;

int main()
{
   int a, b, num;
   cin>>num;
   a = 1;
   b = 0;
   while(num > a)
   {
		if(num % a == 0)
		b = b + a;
		a++;
   }
	if(b == num)
	cout<<"perfect number";	
	else
	cout<<"not a perfect number";
return 0;
}
