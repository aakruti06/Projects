//Multi level inheritance

// Shape -Rectangle/ Square - Box


#include<iostream>
using namespace std;

class shape{
protected:
	int l,b;
public:
	int s;
};

class rectangle : public shape{
public:

	void get_r_data(){
		cout<<"Enter sides l & b : ";
		cin>>l>>b;
	}
};

class square : public shape{
public:

	void get_s_data(){
		cout<<"Enter sides s : ";
		cin>>s; 
	}
};

class r_box : public rectangle{
public:

	void r_display(){
		cout<<"Area = "<<(l*b)<<endl;
	}
};

class s_box : public square{
public:

	void s_display(){
		cout<<"Area = "<<(s*s)<<endl;
	}
};

int main(){

	r_box r1;
	r1.get_r_data();
	r1.r_display();

	s_box s1;
	s1.get_s_data();
	s1.s_display();

	return 0;
}
