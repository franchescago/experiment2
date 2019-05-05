#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main()
{
	int n, sum, i;

do
{
	cout<<"Enter a number: " ;
	cin>>n;

		if (n<=0)
		{
			cout<<"Thank you!"<<endl;
		}

		i = 1;
		sum = 0;
		while(i<=n)
		{
			sum+=i;
			i++;	
			
		}
		cout<<"The sum of all whole numbers from 1 to "<<n<<" is "<<sum<<endl;

} 
	while(n>0);
	getch();
	return 0;
}
