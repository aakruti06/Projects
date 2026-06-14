//right rotate by n positions

#include<iostream>
using namespace std;

void r_rotate(int a[], int n, int pos)
{
	while(pos)
	{
		int t = a[n-1];
		for(int i=n-1;i>0;i--)
		{
			a[i] = a[i-1];
		}
		a[0] = t;
		pos--;
	}
}

int main()
{
	int n,pos;
	cout<<"Enter size : ";
	cin>>n;
	cout<<endl;

	cout<<"Enter pos : ";
	cin>>pos;
	cout<<endl;
	int a[n];
	cout<<"Enter array elements : ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	cout<<"Right rotate by n positions: ";
	r_rotate(a,n,pos);

	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
