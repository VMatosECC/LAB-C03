// S0103-Matos-MilesPerTank.cpp 
// Goal: Calculate miles-per-gallon efficiency factor


#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    //Variable Definition
    double tankCapacity;
    double maxDistanceFullTank;
    double mpg;

    //Input
    cout << "Enter tank capacity (gallons):  ";
    cin >> tankCapacity;
    cout << "Max distance using a full tank: ";
    cin >> maxDistanceFullTank;

    //Process
    mpg = maxDistanceFullTank / tankCapacity;

    //Output
    cout << fixed << setprecision(2) << showpoint;
    cout << "Miles-per-Gallon Index: " << mpg << endl;

}

