#include <iostream>
using namespace std;

int main() {

    double regularPay;
    double hours;
    double overtimePay;
    double totalPay;

    cout << "Enter your hours for this week: ";
    cin >> hours;

    regularPay = hours * 10;
    overtimePay = (hours - 40) * 12;

    if ( hours <= 40 ){
        
        cout << "Your Regular Pay is: $" << regularPay << endl;
        
    }

    else if (hours > 40) {

        
        cout << "Your Overtime pay is : $" << overtimePay << endl;
        cout << "Your Regular Pay is: $" << regularPay << endl;
        

        totalPay = regularPay + overtimePay;
        cout << "Your total pay is : $" << totalPay << endl;

        
        

    
    }
    


    

return 0;
}