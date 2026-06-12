#include<iostream>
using namespace std;

int main()
{

	int num,fact = 1;
	cout<<"Enter num: ";
	cin>>num;
	
	while(num)
	{
		fact = fact*num;
		num--;
	}
	cout<<"factorial = "<<fact<<endl;
}

