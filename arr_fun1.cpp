// store array element, print sum of array using functions

#include<iostream>
using namespace std;

int sum_arr(int a[], int n);

int main()
{
	int n;
	cout<<"Enter size: ";
	cin>>n;

	int a[n];

	cout<<"Enter elements : ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	cout<<"Sum of the array elements : "<<sum_arr(a,n)<<endl;
	return 0;
}

int sum_arr(int a[],int n)
{
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	return sum;
}
