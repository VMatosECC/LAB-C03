// S102-Matos-SecCode.cpp 
// Goal: Enhance an ID number adding a security code.


#include <iostream>
using namespace std;


int main()
{
    //Variable declaration
    int id, newId, sum, secCode, d1, d2, d3, d4;

    //Input 
    cout << "Enter a FOUR digit number: ";
    cin >> id;

    //Process
    d1 = id % 10;
    d2 = (id / 10) % 10;
    d3 = (id / 100) % 10;
    d4 = (id / 1000) % 10;


    //Output
    //cout << d1 << " " << d2 << " " << d3 << " " << d4 << endl;
    sum = d1 + d2 + d3 + d4;
    secCode = sum % 10;

    newId = id * 10 + secCode;
    cout << "Enhanced ID is " << newId << endl;

}

