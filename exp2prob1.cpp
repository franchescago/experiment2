#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main ()
{
	char package;
	double hrs;
	const double a = 995, b = 1495, c = 1995;
	
	cout<<"Input the following to compute your monthly bill: \n";
	cout<<"Package purchased(A/B/C): ";
	cin>>package;
	cout<<"Hours used: ";
	cin>>hrs;
	
	switch (package) 
	{
		case 'a':
		case 'A':
			 if (hrs>10)
	 		cout<<"Total bill: "<<"Php"<<a+(hrs-10)*20<<endl;
	 		else
			cout<<"Total bill: "<<"Php"<<a<<endl;
			break;
		case 'b':
		case 'B':
			if (hrs>20)
	 		cout<<"Total bill: "<<"Php"<<b+(hrs-20)*10<<endl;
	 		else
			cout<<"Total bill: "<<"Php"<<b<<endl;
			break;
		case 'c':
		case 'C':
			cout<<"Total bill: "<<"Php"<<c<<endl;
			break;	
	}
	

	
	getch();
	return 0;
}
