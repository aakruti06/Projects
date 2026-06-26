//Count number of lines

/*
	ofstream - write into a file
	ifstream - read from a file
	fstream - read and write a file
*/

#include<iostream>
#include<fstream>
using namespace std;

int main(){

	ifstream fin("student.txt");

	string line;
	int count = 0;

	while(getline(fin,line))
	{
		count++;
	}

	fin.close();

	cout<<"Total Lines = "<<count<<endl;
	return 0;
}
