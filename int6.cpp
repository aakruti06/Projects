// student result

#include<iostream>
using namespace std;

class student{
public:
	string name;

	void getdata(){
		cout<<"Name : ";
		cin>>name;
	}
//	cout<<endl;
};

class marks : public student{
public:
	int marks[6];
	int total = 0;
	void getmarks(){
		cout<<"\nEnter marks : \n";
		for(int i=0;i<6;i++){
			cin>>marks[i];
			total += marks[i];
		}
	}
};

class result : public marks{
public:
	char grade;
//	cout<<endl;
	void getresult(){
		cout<<"\nResult : ";

		if(total >= 450)
			grade = 'A';
		else if(total >= 400)
			grade = 'B';
		else if (total >= 350)
			grade = 'C';
		else if (total >= 300)
			grade = 'D';
		else if (total >= 250)
			grade = 'E';
		else
			grade = 'F';
		cout<<grade<<endl;
	}
};

int main(){

	result r1;

	r1.getdata();
	r1.getmarks();
	r1.getresult();
	return 0;
}
