// S0103-Matos-CreditCard.cpp 
// Goal: Read data from a credit card (name, id, secCode)

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Variable declaration
    string    custName;
    long long ccNumber;
    string    secCode;   //cvv

    //Input
    cout << "Enter CC Number:  ";
    cin >> ccNumber;
    
    cin.ignore();

    cout << "Customer Name:    ";
    getline(cin, custName);

    cout << "Sec Code (CVV):   ";
    cin >> secCode;

    //Process

    //Output
    cout << "Echo- CCN:           " << ccNumber << endl;
    cout << "Echo- Customer Name: " << custName << endl;
    cout << "Sec. Code (CVV):     " << secCode << endl;
}

