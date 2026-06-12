#include<iostream>
using namespace std;

int squares(int num)
{
	return num*num;
}

int main()
{
	int num;
	cout<<"Enter a num : ";
	cin>>num;
	cout<<"Square of "<<num<<" = "<<squares(num)<<endl;
	return 0;
}

