#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int count;

	cout<<"Counting...\n" ;

	for(count=1;count<=10;count++)
	{
		cout<<count<<"," ;
	}
	for(count=12;count<=30;count=count+2)
	{
		cout<<count<<"," ;
	}

	getch();
	return 0;
}
