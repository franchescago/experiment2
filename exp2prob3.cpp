#include<iostream>
#include<math.h>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
	int x, y;
	float V;
	const float z = 2.5;

	cout<<"Enter value of x: " ;
	cin>>x;
	cout<<"Enter value of y: " ;
	cin>>y;

	switch(x)
	{
		case 1: 
			if(y>1 && y<5)
			{
				V = x*y*z;
				cout<<setw(10)<<setprecision(2)<<fixed;
				cout<<"The value of V is: "<<V;
			}
			if(y>=5)
			{
				V = (x+y)/z;
				cout<<setw(10)<<setprecision(2)<<fixed;
				cout<<"The value of V is: "<<V;
			}
			if(y==1)
			{
				V = x+y+z;
				cout<<setw(10)<<setprecision(2)<<fixed;
				cout<<"The value of V is: "<<V;
			}
			break;
		case 2:
			if(y<=5)
			{
				V = abs((x-y)/z);
				cout<<setw(10)<<setprecision(2)<<fixed;
				cout<<"The value of V is: "<<V;
			}
			if(y>5)
			{
				V= x - sqrt(y+z);
				cout<<setw(10)<<setprecision(2)<<fixed;
				cout<<"The value of V is: "<<V;
			}
				break;
		default:
			V = x+y+z;
			cout<<setw(10)<<setprecision(2)<<fixed;
			cout<<"The value of V is: "<<V;
			break;
	}
	getch();
	return 0;
}
