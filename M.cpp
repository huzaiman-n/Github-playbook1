#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double purchase, discount = 0.0, payable;

    cout << "Enter purchase amount (RM): ";
    cin >> purchase;

    if (purchase >= 100)
        discount = purchase * 0.10;

    payable = purchase - discount;

    cout << fixed << setprecision(2);
    cout << "Discount = RM " << discount << "\n";
    cout << "Amount payable = RM " << payable << "\n";
    return 0;
}
