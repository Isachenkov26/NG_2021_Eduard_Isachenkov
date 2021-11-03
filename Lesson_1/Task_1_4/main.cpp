#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, D, x1, x2;
    cout << "Value a:" << endl;
    cin >> a;
    cout << "Value b:" << endl;
    cin >> b;
    cout << "Value c:" << endl;
    cin >> c;
    D = b*b-4*a*c;
    if (D>0){
        x1 = ((-b)+sqrt(D))/(2*a);
        x2 = ((-b)-sqrt(D))/(2*a);
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
        }
    if (D==0){
        x1 = -(b/(2*a));
        cout << "x1 = x2 = "<< x1;
        }
    if (D<0)
        cout << "D < 0, There are no roots.";
}
