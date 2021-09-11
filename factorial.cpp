#include<iostream>
using namespace std;
int main()
{
	int fact=1,i,a;
	cout<<"Enter a number for factorial calculate : ";
	cin>>a;
	if(a<0)
	{
		cout<<"Can't calculate the factorial of < 0"<<endl;
	}
	else
	{
		for(i=a;i<=0;i--)
		{
			fact = i*fact ;
		}
		cout<<"factorial of "<<a<<" is "<<fact;
	}
	
	return 0;
}
