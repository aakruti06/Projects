// Multi Level inheritance


#include<iostream>
using namespace std;

class number{
public:
	int num;
	void getdata(){
		cout<<"Enter number : ";
		cin>>num;
	}
};

class square : public number{
public:
	void sq(){
		cout<<"Square : "<<num*num<<endl;
	}
};

class cube : public number{
public:
	void cu(){
		cout<<"Cube : "<<num*num*num<<endl;
	}
};

int main(){
	square s1;
	s1.getdata();
	s1.sq();

	cout<<endl;

	cube c1;
	c1.getdata();
	c1.cu();

	return 0;
}
