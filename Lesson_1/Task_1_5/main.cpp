#include <iostream>

using namespace std;

int main()
{
    int fuelShip;
    cout << "Good day" << endl;
    cout << "Welcome to \"ZAZ\", you are now on the ship \"Space Traveler\"" << endl;
    cout << "We calculated. You will fly 300 light years, do not be afraid for you this flight will last only one week." << endl;
    fuelShip = ((3000/3) - 2)*300;
    cout << "Fuel for 300 light years required = " << fuelShip << endl;
    cout << "Okay, let's start the timer" << endl;
    return 0;
}

