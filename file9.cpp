// Store emp details

/*
	ofstream - write into a file
	ifstream - read from a file
	fstream - read and write a file
*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){

	string name,dg;
	int exp,salary;

	cout<<"Enter employee details: "<<endl;
	cout<<"Name                : ";
	cin>>name;
	cout<<"Designation         : ";
	cin>>dg;
	cout<<"Experience(years)   : ";
	cin>>exp;
	cout<<"Salary(INR)         : ";
	cin>>salary;
	cout<<endl;

	ofstream fout;
	fout.open("text.txt");
	fout<<"Name          : "<<name<<endl;
	fout<<"Designation   : "<<dg<<endl;
	fout<<"Experisnce    : "<<exp<<endl;
	fout<<"Salary        : "<<salary<<endl;
	fout.close();

	cout<<"Data written successfully"<<endl;

	ifstream fin;
	fin.open("text.txt");
	string line;
	while(getline(fin,line)){
		cout<<line<<endl;}
	fin.close();

	return 0;
}
