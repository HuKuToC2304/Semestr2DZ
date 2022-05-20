#include<iostream>
using namespace std;

int main()
{
	int t;
	cout<<"Input your time:"<<endl;
	cin>>t;
	if (t>=6 && t<12)
		cout<< "Good morning" <<endl;
	else if (t>=12 && t<16)
		cout<< "Good day" <<endl;
	else if (t>=16 && t<=24 || t>=0 && t<6)
		cout<< "Good Night" <<endl;
	else { cout<<"You have wrong time";}
	return 0;
	
}

