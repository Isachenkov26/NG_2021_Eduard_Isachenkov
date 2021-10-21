#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double ip, number;
    cout << "255.255.255.*, instead of * write the number of ip addresses " << endl;
    cin >> ip;
    number=abs(ip-254);
    cout << "number= " << number;
}
