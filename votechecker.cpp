#include<iostream>

using namespace std;

main(){
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	
	if(age>=18)
	{
		cout<<"You are eligible to vote!";
	}
	else
	{
		cout<<"You are not eligible to vote. You can vote in "<<18-age<<" years!";
	}
	return 0;
}
