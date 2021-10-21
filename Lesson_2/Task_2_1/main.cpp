#include <iostream>

using namespace std;

int main()
{
    double x1, x2, x3, x4, x5, x6, sum;
    cout << "Enter a random number (x<=9)"<< endl;
    cin >> x1; cin >> x2; cin >> x3; cin >> x4; cin >> x5; cin >> x6;
    if (x1<=9 && x2<=9 && x3<=9 && x4<=9 && x5<=9 && x6<=9)
    {
    sum=x1+x2+x3+x4+x5+x6;
    cout <<"Sum=" << sum;
    }
    else
    {
        cout << "Error";
    }
    return 0;
}
