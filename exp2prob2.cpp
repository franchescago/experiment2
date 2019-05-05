#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main ()
{
	double presentR, prevR, unpaidBal;
	
	cout<<"Input the following to compute the water bill: \n";
	cout<<"Previous Reading: ";
	cin>>prevR;
	cout<<"Present Reading: ";
	cin>>presentR;
	cout<<"Unpaid Balance: ";
	cin>>unpaidBal;
	
		if (unpaidBal>0)
	 	cout<<"Total bill: "<<"Php"<<35+(presentR-prevR)*1.10+unpaidBal+20<<endl;
	 	else
		cout<<"Total bill: "<<"Php"<<35+(presentR-prevR)*1.10<<endl;
	

	
	getch();
	return 0;
}
