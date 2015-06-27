#include <iostream.h>


void main()
{
	int choice=0,i;
	char hi;

	cout<< "\t\t Choose One";
	cout<< "\n\nEnter 1 for converstion of phrase to Morse code. \nEnter 2 for converstion of Morse phrase to english phrase";
	cout<< "\n\nEnter-> ";
	cin>> choice;

	cout<< "WARNING! You are about to format drive c: \nContinue? (y/n)";
	cin>> hi;

	cout<<"Formating...\n";

	for(i=0; i<=100; i++)
	{
		for(int j=1; j<= 4; j++)
			cout<< "\b";
		cout<< i << " " << "%";
		for(int k=0; k<=1000000; k++);
	}
	while (cin.get() != '\n');
	return;
}

 