#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter the a: " << endl;
    cin >> a;
    cout << "Enter the b: " << endl;
    cin >> b;
    a=b+a;
    b=a-b;
    a=a-b;
    cout << ("a:") << a << endl;
    cout << ("b:") << b << endl;
    return 0;
}
