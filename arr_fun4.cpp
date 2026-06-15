//move all zeros to the end

#include<iostream>
using namespace std;

void movezero(int a[], int n)
{
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			a[j++] = a[i];
		}
	}
	while(j<n)
	{
		a[j++] = 0;
	}
}

int main()
{
	int a[5] = {1,0,2,0,3};
	movezero(a,5);
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
