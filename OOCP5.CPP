#include <iostream.h>
#include<conio.h>

void main()

{

    int n;

clrscr();

    cout << "Enter a number: ";
    cin >> n;

	if(n>0)

	{

		for (int i = 0; i < n; i++)
		{
			cout << "Well Done" << endl;
		}
	}

	else

	{
		cout << "Please enter a non-negative number." << endl;
	}

getch();

}