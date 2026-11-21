#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double total, monthlyPayment;
    int months;
    cout << "Enter total (RM): ";
    cin >> total;
    cout << "Enter number of months: ";
    cin >> months;
    bool validPayment = (total >= 0) && (months > 0);
    if (validPayment)
    {
        monthlyPayment = total / months;
        cout << fixed << setprecision(2);
        cout << "Monthly payment = RM " << monthlyPayment << "\n";
    }
    if (!validPayment)
        cout << "Invalid payment details.\n";
    return 0;
}
