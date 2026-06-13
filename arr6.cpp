//reverse of an array

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter number of elements n = ";
	cin>>n;
	cout<<endl;
	int a[n];
	cout<<"Enter 5 elements : ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int j=0,k=n-1,t;
	while(j<k)
	{
		t = a[j];
		a[j] = a[k];
		a[k] = t;
		j++;
		k--;
	}
	cout<<"reverse of an array = : ";
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
