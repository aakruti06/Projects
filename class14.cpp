// parameterized constructor 

#include<iostream>
using namespace std;

class square{
public:
	int side;


/*	void getdata()
	{
		cout<<"Side = ";
		cin>>side;
	}
*/
	square(int s){
		side = s;
		cout<<"Area = "<<s*s<<endl;
	}

	void printdata()
	{
		cout<<"Side = "<<side<<endl;
	}

};

int main()
{
	square c(10);

//	square b;
//	b.getdata();
	c.printdata();

	return 0;
}
