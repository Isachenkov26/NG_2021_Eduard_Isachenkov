#include <iostream>

using namespace std;

int main()
{
    double MassShip;
    cout << "Good day" << endl;
    cout << "Welcome to \"ZAZ\", you are now on the ship \"Space Traveler\"" << endl;
    cout << "Enter the mass of the ship" << endl; // Added weight to the ship
    cin >> MassShip;
    cout << "We calculated. You will fly 300 light years, do not be afraid for you this flight will last only one week." << endl;
    MassShip = ((MassShip/3.0) - 2.0)*300.0;
    cout << "Fuel for 300 light years required = " << MassShip << endl;
    cout << "Okay, let's start the timer" << endl;
    return 0;
}

