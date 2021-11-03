#include <iostream>

using namespace std;

int main()
{
    int arraying[10], newarray[10];
    cout << "Enter your numbers in the array" << endl;
    for (int i=0; i<10; i++)
    {
      cin >> arraying[i];
    }
    cout << "Enter the number you want to add to all items" << endl;
    int number;
    cin >> number;
    for (int i=0; i<10; i++)
        if(newarray[i]=arraying[i]+=number);
    for (int i=0; i<10; i++)
    {
      cout << "Number[" << i << "]=" << newarray[i] << endl;
    }
    return 0;
}

