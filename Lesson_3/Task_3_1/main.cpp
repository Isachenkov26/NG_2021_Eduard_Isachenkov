#include <iostream>

using namespace std;

int main()
{
    int arraying[10], newarraying[10], number; // Added second array
    cout << "Enter your numbers in the array" << endl;
    for (int i=0; i<10; i++){
        cin >> arraying[i];
    }
    cout << "Enter the number you want to add to all items" << endl;
    cin >> number;
    for (int i=0; i<10; i++){
        newarraying[i] = arraying[i] + number;
        cout << "Number [" << i << "]=" << newarraying[i] << endl;
    }
    return 0;
}

