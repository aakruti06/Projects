// copy files and count lines

/*

	ofstream - write into a file 
	ifstream - read from a file
	fstream - read and write a file

*/

#include<iostream>
#include<fstream>

using namespace std;

int main()
{

	ifstream fin("text.txt");
	ofstream fout("emp.txt");

	string line;
	int count = 0;
	while(getline(fin,line))
	{
		cout<<line<<endl;
		count++;
	}

	fin.close();
	fout.close();

	cout<<"Data copied "<<endl;
	cout<<"Number of lines : "<<count<<endl;

	return 0;
}
