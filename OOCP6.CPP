#include <iostream.h>
#include<conio.h>
#include<string.h>

void main()

{

	int units;
    	char name[50];
	float bill = 0;

clrscr();

	cout<< "Enter Name : ";
	cin >> name;
	cout << "\nEnter number of units consumed: ";
	cin >> units;

    
	if (units <= 100)
	
	{
		bill = units * 0.60;
	}
    
	else if (units <= 300)
	
	{
		bill = (100 * 0.60) + (units - 100) * 0.80;
    	}
    	
	else 
	
	{
		bill = (100 * 0.60) + (200 * 0.80) + (units - 300) * 0.90;
    	}

	if (bill < 50)

	{
		bill = 50;
    	}

	if (bill > 300)
	
	{
        	float surcharge = bill * 0.15;
        	
		bill += surcharge;
    	}


    cout << "Total Electricity Bill: " << bill << endl;

getch();
    
}