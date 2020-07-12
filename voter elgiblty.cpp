#include <iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Entre The Age of The Voter:";
	cin>>age;
	
	if (age>=18)
	{
		cout<<"\nYou Are Eligible to Vote";
	}
	else {
			cout<<"\nYou Are Eligible Not to Vote";
			}
			return 0;
}
