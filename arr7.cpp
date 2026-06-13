#include<iostream>
using namespace std;

int main()
{
    int a[5];
    int key;

    cout << "Enter 5 elements: ";

    for(int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    for(int i = 0; i < 5; i++)
    {
        if(a[i] == key)
        {
            cout << "Element Found" << endl;
            return 0;
        }
    }

    cout << "Element Not Found" << endl;

    return 0;
}
