#include <iostream>
using namespace std;
int main() {
    int choice;
    double a, b;

    cout << "1. Add\n2. Subtract\n3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << a + b;
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << a - b;
            break;
        case 3:
            cout << "Exiting program...";
            break;
        default:
            cout << "Invalid choice!";
    }

    return 0;
}
