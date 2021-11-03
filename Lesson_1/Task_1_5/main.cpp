#include <iostream>

using namespace std;

int main()
{
    double massShip=3000, planet, fuelShip;
    cout << "Good day" <<endl;
    cout << "Welcome to ZAZ, you are now on the ship ""Space Traveler"", which planet do you want to go to?" << endl;
    cin>>planet;
    cout << "We calculated. You will fly 300 light years, do not be afraid for you this flight will last only one week." << endl;
    fuelShip = ((massShip/3) - 2)*300;
    printf("Fuel for 300 light years required = %f\n", fuelShip);
    cout << "Okay, let's start the timer" << endl;
    }

