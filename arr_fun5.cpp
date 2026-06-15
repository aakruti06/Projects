//shift all the 1 to left

#include<iostream>
using namespace std;

void moveone(int a[], int n)
{
	int t[n];
	int k = 0;

	for(int i=0;i<n;i++)
	{
		if(a[i] == 1)
		{
			//to be written
		}
	}
}

int main()
{

	int n;
	cout<<"Enter size: ";
	cin>>n;
	cout<<endl;

	int a[n];
	cout<<"Enter the elements of the array: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<endl;

	moveone(a,n);

	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
