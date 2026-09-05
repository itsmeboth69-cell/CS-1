#include <iostream>
using namespace std;

int main (){
    int n;
    int sum = 1;



    cout << "Enter an integer N: ";
    cin >> n;

    for (int i = 1; i <= n; i++){

        sum = sum * i;
        



    }
    
    cout << n << "!= " << sum << endl;
    

return 0 ;
}