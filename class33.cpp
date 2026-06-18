//public, private 

#include<iostream>
using namespace std;

class student{
private:
	int roll;
public:
	int r;
	void getdata(int n){
		roll = n;
	}
	void display(){
		cout<<roll<<endl;
	}
};

int main(){

	student s;
	s.r = 1;
	cout<<s.r<<endl;

	student t;
	t.getdata(10);
	t.display();


	return 0;

}
