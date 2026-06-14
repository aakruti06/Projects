// left rotate array by n positio

#include<iostream>
using namespace std;

//int l_rotate(int a[], int n, int pos);
void l_rotate(int a[], int n, int pos)
{
	int t;
	while(pos>0)
	{
		t = a[0];
		for(int i=0;i<n;i++)
		{
			a[i] = a[i+1];
		}
		a[n-1] = t;pos--;
	}
}

int main()
{
	int n,pos;
	cout<<"Enter size : ";
	cin>>n;
	cout<<endl;
	cout<<"Enter rotation number : ";
	cin>>pos;
	cout<<endl;
	int a[n];
	cout<<"Enter array elements : ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}


	cout<<"Left rotate array elements by "<<pos<<" positions."<<endl;
	l_rotate(a,n,pos);

	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;

	return 0;
}

