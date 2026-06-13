//count even and odd numbers of the array

#include<iostream>
using namespace std;

int main()
{
	int a[5];
	int e=0,o=0;
	cout<<"Enter 5 elements : ";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<endl;
	for(int i=0;i<5;i++)
	{
		if(a[i]%2 == 0)
		{
			e++;
		}
		else
		{
			o++;
		}
	}
	cout<<"Even number of elements = "<<e<<endl;
	cout<<"Odd number of elements = "<<o<<endl;

	return 0;
}
