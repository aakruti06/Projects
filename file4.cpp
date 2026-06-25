// Read data from a file

/*

	ofstream - write into a file

	ifstream - read from a file

	fstream - read and write a file

*/

#include<iostream>
#include<fstream>
using namespace std;

int main(){

	ifstream fin;

	string line;

	fin.open("sample.txt");

	while(getline(fin,line))
	{
		cout<<line<<endl;
	}

	fin.close();

	return 0;
}
