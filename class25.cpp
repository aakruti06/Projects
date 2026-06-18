// array of objects

#include<iostream>
using namespace std;

class student{
public:
	int roll;

	void getdata(){
		cin>>roll;
	}

	void display(){
		cout<<"Roll = "<<roll<<endl;
	}
};

int main(){
	student s[3];
	cout<<"Enter 3 roll number: \n";

	for(int i=0;i<3;i++){
		s[i].getdata();
	}

	cout<<"\n Student details:\n";

	for(int i=0;i<3;i++){
		s[i].display();
	}
	return 0;
}
