// largest of array elements

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
	
	cout<<endl;
	int max = a[0];
	cout<<"Largest element : ";
	for(int i=1;i<5;i++)
		{
		if(a[i] > max)
			{
			max = a[i];
			}
		}
	cout<<max<<endl;
	return 0;
}




