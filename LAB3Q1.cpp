#include <iostream>
#include <iomanip>  
using namespace std; 

int main() { 

    // DECLARE VARIABLES
    float price = 9.00;
    int quantity;
    const int DISC = 10;
    float totalprice;

    // 
    cout << "Enter the quantity purchased: "; 
    cin >> quantity;

    // CALCUL THE PRICE
    totalprice = (price * quantity) * (100 - DISC) / 100;

    // DISPLAY TOTAL PRICE
    cout << fixed << setprecision(4);
  
    cout << "Total price after discount: RM " << totalprice << endl;

    return 0; 
}