//default and parameterized deconstructor


#include<iostream>
using namespace std;

class number
{
public:
	int n,m;
	number(){
		cin>>n>>m;
		cout<<"Sum = "<<(n+m)<<endl;
		cout<<"Product = "<<(n*m)<<endl;
	}

	number(int a,int b)
	{
		n=a;
		m=b;
		cout<<"Square of n : "<<n*n<<endl;
		cout<<"Cube of m : "<<m*m*m<<endl;
	}

	void table(int a)
	{
		cout<<"Table of a: "<<a<<endl;
		for(int i=1;i<11;i++)
		{
			cout<<"a x i = "<<a*i<<endl;
		}
	}

};


int main()
{

	number o1;
	number o2(2,3);

	o2.table(5);
	return 0;

}
