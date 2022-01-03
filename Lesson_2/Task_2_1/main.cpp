#include <iostream>

using namespace std;

int main()
{
    int Number, Sum = 0;
    char Request;
    do {
        cout << "Enter a random number = ";
        cin >> Number;
        cout << "If you want to change number, press Y." << endl;
        cout << "If you do not want to change the number, press N." << endl;
        cin >> Request;
    }while (Request == 'Y' || Request == 'y');
    while (Number>0){
        Sum += Number%10;
        Number /= 10;
    }
    cout << "Sum = " << Sum << endl;
}
