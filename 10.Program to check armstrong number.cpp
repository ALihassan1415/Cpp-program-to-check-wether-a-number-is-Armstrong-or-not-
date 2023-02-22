#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int n,rem;
	int a=0,b=0;
	int size,temp;
	cout<<"Enter the number : ";
	cin>>n;
	temp=n;
	size=log10(n) + 1;
	while(n!=0)
	{
		rem=n%10;
		a=pow(rem,size);
		b=b+a;
		n=n/10;
	}
		if(b==temp)
		cout<<"The number is Aemstrong.";
		else
		cout<<"Number is not Armstrong.";	
		
}