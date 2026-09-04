// Author: Virakboth Sin
// Date: August 29, 2026
// This program asks the user to enter the number of quarters, dimes, and nickels,
// then calculates and displays their total monetary value in dollars and cents.



#include <iostream>
using namespace std;

int main(){

    int quarters;
    cout << "Enter your Quarters: ";
    cin >> quarters;


    int dimes; 
    cout << "Enter your Dimes: ";
    cin >> dimes;


    int nickels;
    cout << "Enter your Nickels: ";
    cin >> nickels;


    int totalCents;
    totalCents = quarters * 25 + dimes * 10 + nickels * 5;


    double total;
    total = totalCents / 100.0;

    cout << "Total :" << totalCents << " cents " << "or " << "$" << total << endl;

return 0;

}