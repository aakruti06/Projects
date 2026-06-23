//Multiple inheritance

#include<iostream>
using namespace std;

class academic{
public:
	int a_marks;
	void get_a_marks(){
		cout<<"Academic Marks : ";
		cin>>a_marks;
	}
};

class sports{
public:
	int s_marks;
	void get_s_marks(){
		cout<<"Sport Marks : ";
		cin>>s_marks;
	}
};

class result : public academic, public sports{
public:
	void display(){
		cout<<"Academic marks : "<<a_marks<<endl;
		cout<<"Sports marks   : "<<s_marks<<endl;
		cout<<"Total = "<<(a_marks + s_marks)<<endl;
	}
};

int main(){
	result r1;
	r1.get_a_marks();
	r1.get_s_marks();
	r1.display();

	return 0;
}
