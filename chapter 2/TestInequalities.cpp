#include <iostream>
using namespace std;

#include "Inequalities.hpp"

int main()
{
    double d1, d2;
    cout << "give the first number: ";
    cin >> d1;
    cout << "give the second number: ";
    cin >> d2;

    char c;
    cout << "Which function a) Max() or b) Min()? ";
    cin >> c;

    /*
    There is a disctinction here from using "a"
    https://stackoverflow.com/questions/2603039/warning-comparison-with-string-literals-results-in-unspecified-behaviour
    */
   
    if (c == 'a') 
    {
        cout << "Max value is: " << Max(d1,d2) << endl;
    }
    else
    {
        cout << "Min value is: " << Min(d1,d2) << endl;
    }

    double dA = 1.0; double dB = 2.0; double dC = 3.0;
    cout << "\n\n Max and Min of three numbers:" << endl;

    cout << "Max value is:" << Max(dA,dB,dC) << endl;
    cout << "Min value is:" << Min(dA,dB,dC) << endl;

    return 0;

}