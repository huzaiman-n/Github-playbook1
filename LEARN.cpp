#include <iostream>
using namespace std;

 int main() {
    int kg;
    cout << "Enter weight in kilograms: ";
    cin >> kg;

    if (kg < 50){
        cout << "gemuk kau babi." << endl;
    }
    else if (kg >= 50 && kg <= 100){
        cout << "normal kau." << endl;
    }
    else {
        cout << "kurus kau." << endl;
    }
    return 0;
 }