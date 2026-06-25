/*

ofstream - write to file

ifstream - read from file

fstream - read and write

*/


#include<iostream>
#include<fstream> // read and write a file
using namespace std;

int main(){

	ofstream fout;//create file object

	fout.open("text.txt");

	fout<<"Alex"<<endl;
	fout<<"Roll no: 101"<<endl;

	fout.close();

	cout<<"New data written successfully"<<endl;

	return 0;
}
