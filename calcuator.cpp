#include<iostream>
using namespace std;
void showMenu() {
    cout << "Simple Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}
int main(){
    int choice;
    double num1, num2;
    while (true) {
        showMenu();
        cin >> choice;
        if (choice == 5) {
            cout << "Exiting..." << endl;
            break;
        }
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        switch (choice) {
            case 1:
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero is not allowed." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        cout << "----------------------" << endl;
    }
    return 0;
}