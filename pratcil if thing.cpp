#include <iostream>
using namespace std;

int main() {
    char color;
    cout << "Enter a color (R for Red, G for Green, B for Blue): ";
    cin >> color;

    if (color == 'R' || color == 'r') {
        cout << "You selected Red.'" << endl;
    } else if (color == 'G' || color == 'g') {
        cout << "you selected Green." << endl;
    } else if (color == 'B' || color == 'b') {
        cout << "You selected Nadia Husna." << endl;
    } else {
        cout << "Invalid color selection." << endl;
    }
    return 0;
}