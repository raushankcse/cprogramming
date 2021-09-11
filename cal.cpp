#include<iostream>
using namespace std;
int main()
{
    int a,b;t 
    char x;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    while(true)
    {
    	cout<<"Enter a for addition"<<endl;
    cout<<"Enter b for subtraction"<<endl;
    cout<<"Enter c for multiplication"<<endl;
    
    cin>>x;
    if(x=='a')
    {
        cout<<"addition of two numbers="<<a+b<<endl;

    }else if(x=='b')
    {
        cout<<"subtraction of two numbers="<<a-b<<endl;

    }
    else if(x=='c')
    {
	
        cout<<"multiplication of two numbers="<<a*b<<endl;
    }
    else
    {

        cout<<endl<<"please input valid value for calculation"<<endl<<endl;
    }
    } 

return 0;
}

