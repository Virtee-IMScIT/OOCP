#include<iostream.h>
#include<conio.h>

void main()
{
int n1,n2,n3;
clrscr();
	cout<<"Enter First Value:-";
	cin>>n1;

	cout<<"Enter Second Value:-";
	cin>>n2;

	cout<<"Enter Third Value:-";
	cin>>n3;

	if(n1>n2)
	{
		cout<<n1<<"is Maximum than"<<n2;
	}
	else if(n2>n3)
	{
		cout<<n2<<"is Maximum than"<<n3;
	}
	else
	{
		cout<<n3<<"is Maximum than other";
	}
getch();
}