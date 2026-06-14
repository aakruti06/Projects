//binary search

#include<iostream>
using namespace std;

int main()
{
	int a[5] = {10,20,30,40,50};
	int k;

	cout<<"Enter element to search : ";
	cin>>k;

	int m,l=0,h=4;
	int flag=0;
	while(l<=h)
	{
		m = (l+h)/2;
		if(a[m] == k)
		{
	//		cout<<"element found at index : "<<m<<endl;
	//		break;
			flag = m;
			break;
		}
		else if(k > a[m])
		{
			l = m+1;
		}
		else
		{
			h = m-1;
		}
	}
	//cout<<"Element not found"<<endl;
	if(flag!=-1)
	{
		cout<<"Element found at index "<<flag<<endl;
	}
	else
	{
		cout<<"Element not found"<<endl;
	}
	return 0;
}
 
