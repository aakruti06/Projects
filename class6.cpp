// store array, print array using class member functions

#include<iostream>
using namespace std;

class arr{
public:
	int a[5];

	void getdata()
	{
		cout<<"Enter 5 elements: ";
		for(int i=0;i<5;i++){
			cin>>a[i];}
	}
	int sum = 0;
	void display()
	{
		cout<<"Array : ";
		for(int i=0;i<5;i++){
			cout<<a[i]<<" ";
			sum+=a[i];}
		cout<<endl;
		cout<<"Sum of array elements = "<<sum<<endl;
	}
};

int main()
{
	arr a;
	a.getdata();
	a.display();
	return 0;
}
