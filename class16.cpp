// default and parameterized constructor

#include<iostream>
using namespace std;

class cube{
public:
	int c;

	cube()
	{
		cin>>c;
		cout<<"cube : "<<c*c*c<<endl;
	}

	cube(int n)
	{
		cout<<"cube : "<<n*n*n<<endl;
	}

};

int main()
{
	cube(5);
	cube();

	return 0;
}
