//largest number of 2

#include<iostream>
using namespace std;

class number
{
public:
	int a,b;

	void getdata()
	{
		cout<<"Enter data: ";
		cin>>a>>b;
	}

	void largest()
	{
		if(a>b){
			cout<<"Largest : "<<a<<endl;
		}
		else{
			cout<<"Largest : "<<b<<endl;
		}
	}

};

int main()
{
	number n;
	n.getdata();
	n.largest();

	return 0;
}
