#include <iostream>

using namespace std;

int main()
{
    int number, sum=0;
    char jdi;
    do {
    cout << "Enter a random number = ";
    cin >> number;
    while (number>0){
            sum += number%10;
            number /= 10;
    }
    cout << "Sum = " << sum << endl;
    cout << "If you want to change, press Y" << endl;
    cin >> jdi;
    }while (jdi == 'Y' || jdi == 'y');
}
