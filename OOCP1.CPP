#include<iostream.h>
#include<conio.h>

void Add();
void Sub();
void Mul();
void Div();
void main()
{

clrscr();
	cout<<"Arithmetic Operation:\n";

	Add();
	Sub();
	Mul();
	Div();

getch();
}

void Add()
{
	int n1,n2,add;
	cout<<"Addition";
	cout<<"\nEnter Two No. :-";
	cin>>n1;
	cin>>n2;

	add=n1+n2;
	cout<<"Addition :- "<<add<<endl;

}

void Sub()
{
	int n1,n2,sub;
	cout<<"Substraction";
	cout<<"\nEnter Two No. :-";
	cin>>n1;
	cin>>n2;

	sub=n1-n2;

	cout<<"Substraction :- "<<sub<<endl;

}
void Mul()
{
	int n1,n2,mul;
	cout<<"Multiplication";
	cout<<"\nEnter Two No. :-";
	cin>>n1;
	cin>>n2;

	mul=n1*n2;

	cout<<"Multiplication :- "<<mul<<endl;


}
void Div()
{
	int n1,n2,div;
	cout<<"Division";
	cout<<"\nEnter Two No. :-";
	cin>>n1;
	cin>>n2;

	div=n1/n2;

	cout<<"Division :- "<<div<<endl;

}