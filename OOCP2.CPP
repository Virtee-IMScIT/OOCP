#include<iostream.h>
#include<conio.h>

void main()
{
	int a,b;
clrscr();
	cout<<"\nEnter Value Of A: ";
	cin>>a;

	cout<<"\nEnter Value Of B: ";
	cin>>b;

	a=a+b;
	b=a-b;
	a=a-b;

	cout<<"\nSwap Value Of A: "<<a<<endl;
	cout<<"\nSwap Value Of B: "<<b;
getch();
}