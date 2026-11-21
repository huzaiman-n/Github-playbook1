#include <iostream>
using namespace std;


int main() {
    int age, mark;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter test mark: ";
    cin >> mark;

    bool eligible = (age >= 18) && (mark >= 60);

    if (eligible) {
        cout << "Eligible for the workshop.\n";
        cout << "Please complete the registration form.\n";
    } else {
        cout << "Not eligible for the workshop.\n";
    }

    return 0;
}
