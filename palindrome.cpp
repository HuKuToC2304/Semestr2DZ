#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	string n;
	cout<<"Enter five-digit number: ";
	cin>>n;
	if(n.size() == 5)
	{
		if((n[0] == n[4]) && (n[1] == n[3]))
			cout<<"It's a palindrome"<<endl;
		else
			cout<<"It's not a palindrome";
	}
	else 
		cout<<"You entered a non-five-digit number!";
	return 0;
	
}
