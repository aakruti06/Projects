//Multi level inheritance

#include<iostream>
using namespace std;

class number{
public:
	int n;

	void getdata(){
		cout<<"Enter number: ";
		cin>>n;
	}
};

class square : public number{
public:
	void square_func(){
		cout<<"Sqaure = "<<n*n<<endl;
	}
};

class cube : public square{
public:
	void cube_func(){
		cout<<"Cube = "<<n*n*n<<endl;
	}
};

int main(){
	cube c;
	c.getdata();
	c.square_func();
	c.cube_func();

	return 0;
}
