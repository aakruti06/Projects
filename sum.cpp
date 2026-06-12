#include<iostream>
using namespace std;

int main(){
	int num, sum=0;
	cout<<"Enter a num: ";
	cin>>num;
	
	while(num)
	{
	sum = sum+(num%10);
	num = num/10;
	}
	cout<<"Sum of digits = "<<sum<<endl;
	return 0;
}

