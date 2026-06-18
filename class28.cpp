// total marks of 3 students


#include<iostream>
using namespace std;

class student{
public:
	int marks;

	void getmarks(){
		cin>>marks;
	}
};

int main(){
	student s[3];
	int total = 0;
	cout<<"Enter the marks:\n";

	for(int i=0;i<3;i++){
		s[i].getmarks();
		total += s[i].marks;
	}
	cout<<"Total marks = "<<total<<endl;
}

