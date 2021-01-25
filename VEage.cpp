#include <iostream>
using namespace std;

int main() {
    int a, i;
	cout<<"Enter your age \n";
	cin>>a;
	if(a>=18)
	{
	    cout<<"You are eligible to vote.";
	}
	else 
	{
	    i = 18 - a;
	    cout<<"You are not eligible to vote.\n";
	    if(i==1)
	    cout<<"You will reach voting eligibility next year";
	    else cout<<"You will reach voting eligibility after "<<i<<" years";
	}
	return 0;
}
