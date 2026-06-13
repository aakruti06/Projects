//smallest element

#include<iostream>
using namespace std;

int main()
{
	int a[5];
	cout<<"Enter 5 elements : ";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	int min = a[0];
	cout<<endl;
	for(int i=1;i<5;i++)
	{
		if(a[i] < min)
		{
			min = a[i];
		}
	}
	cout<<"Smallest element : "<<min<<endl;
	return 0;
}


