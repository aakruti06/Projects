// average of the array elements 

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter n : ";
	cin>>n;
	int a[n];
	int sum = 0;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum += a[i];
	}

	float avg;
	avg = (float)sum / n;
	cout<<"Average of array elements : "<<avg<<endl;
	return 0;
}
