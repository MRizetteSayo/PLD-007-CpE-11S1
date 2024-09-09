#include<iostream>
using namespace std;

int main()
{
	//int x=4;
	//int y=2;
	int x, y;
	int sum,diff,prod,rem;
	float quotient;
	
	cout<<"Please type two integers:"<<endl;
	cout<<"Enter the value of x:";
	cin>>x;
	cout<<"Enter the value of y:";
	cin>>y;
	
	sum=x+y;
	diff=x-y;
	prod=x*y;
	quotient = x/(double)y;
	rem=x%y;
	
	
	
	cout<<"x+y="<<sum<<endl;
	cout<<"x-y="<<diff<<endl;
	cout<<"x*y="<<prod<<endl;
	cout<<"x/y="<<quotient<<endl;
	
return 0;
}
