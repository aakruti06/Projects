// store data and read student details

/*

	ofstream - write into a file

	ifstream - read from a file

	fstream - read and write a file

*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){

	string name;
	int marks;

	cout<<"Enter name: ";
	cin>>name;

	cout<<"Enter marks: ";
	cin>>marks;

	ofstream fout("results.txt");

	fout<<"Name: "<<name<<endl;
	fout<<"Marks: "<<marks<<endl;

	fout.close();

	cout<<"\n stored in file: \n"<<endl;

	ifstream fin("results.txt");

	string line;

	while(getline(fin,line)){
		cout<<line<<endl;
	}

	fin.close();
	return 0;
}
