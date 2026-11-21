#include <iostream>
using namespace std;

int main() 
{
    char gred;
    cout << "Enter a Gred (A, B, C, F): ";
    cin >> gred;

    if (gred == 'A') {
        cout << "Nadia will congrats you personally!" << endl;
    } 
    else if (gred == 'B') { 
        cout << "Ok LAH you can improve so later she will congrats you personally!" << endl;
    } 
    else if (gred == 'C') { 
        cout << "Bro are you kidding me?" << endl;
    } 
    else if (gred == 'F') { 
        cout << "bro you are a failure! nadia will laugh at you! dopehead" << endl;
    } 
    else {
        cout << "Invalid grade entered!" << endl;
    }

    return 0;
} 
