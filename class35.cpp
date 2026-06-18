//Bank account

#include<iostream>
using namespace std;

class bankaccount{
private:
	int balance;
protected:
	int account_type;
public:
	string name;

	void getdata(string n,int b,int t)
	{
		name = n;
		balance = b;
		account_type = t;
	}

	void deposit(int amount)
	{
		balance += amount;
	}

	void withdraw(int amount)
	{
		if(amount <= balance){
			balance -= amount;
		}
		else{
			cout<<"Insufficient balance"<<endl;
		}
	}

	void display()
	{
		cout<<"Name         : "<<name<<endl;
		cout<<"Balance      : "<<balance<<endl;

		if(account_type == 1)
		{
			cout<<"Type         : Savings account "<<endl;
		}
		else
		{
			cout<<"Type         : Current account "<<endl;
		}
	}

};

int main()
{
	bankaccount acc;

	acc.getdata("Alex",20000,1);

	acc.deposit(2500);
	acc.withdraw(15000);

	acc.display();

	return 0;
}
