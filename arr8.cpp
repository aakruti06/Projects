//print index of duplicate


#include<iostream>
using namespace std;

int main()
{

	int a[5];
	cout<<"Enter 5 elements: ";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}

	int idx = 0;
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i] == a[j])
			{
				cout<<"Duplicate element found at "<<i<<", "<<j<<endl;
                        }
                }
        }
        return 0;
}

