// Hierarchical Inheritance


#include<iostream>
using namespace std;

class shape{
public:
	void message(){
		cout<<"Area : "<<endl;
	}
};

class circle : public shape{
public:
	float r;
	void get_radius(){
		cout<<"Enter Radius : ";
		cin>>r;
	}

	void area_circle(){
		cout<<"Area of circle : "<<3.14*r*r<<endl;
	}
};

class rectangle : public shape{
public:
	float lt,bt;

	void get_ltbt(){
		cout<<"Enter length : ";
		cin>>lt;

		cout<<"Enter Breadth : ";
		cin>>bt;
	}

	void area_rectangle(){
		cout<<"Area of rectangle : "<<lt*bt<<endl;
	}
};

class triangle : public shape{
public:
	float b,h;
	void get_triangle(){
		cout<<"Enter base : ";
		cin>>b;
		cout<<"Enter height : ";
		cin>>h;
	}

	void area_triangle(){
		cout<<"Area of triangle : "<<0.5*b*h<<endl;
	}
};

int main(){

	circle c;
	rectangle r;
	triangle t;

	cout<<" ---Circle --- "<<endl;
	c.message();
	c.get_radius();
	c.area_circle();

	cout<<" --- Triangle --- "<<endl;
	t.message();
	t.get_triangle();
	t.area_triangle();

	cout<<" --- Rectangle --- "<<endl;
	r.message();
	r.get_ltbt();
	r.area_rectangle();

	return 0;
}
