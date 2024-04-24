#include <iostream>

using namespace std;
// Function prototypes
void displayMenu();
void performOperation(int choice, int num1, int num2);

int main()
{


    char continueChoice;

    do {
        int choice, num1, num2;

        // Display menu and get user choice
        displayMenu();
        cin >> choice;

        // Get input numbers
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        // Perform operation based on user's choice
        performOperation(choice, num1, num2);

        // Ask if the user wants to continue
        cout << "Do you want to continue? (y/Y for yes): ";
        cin >> continueChoice;

    } while (continueChoice == 'y' || continueChoice == 'Y');

    return 0;
}

// Function to display the menu
void displayMenu() {
    cout << "Menu:"<< endl ;
    cout << "1. Addition"<< endl;
    cout << "2. Subtraction"<< endl;
    cout << "3. Multiplication"<< endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): "<< endl;
}

// Function to perform the operation based on user's choice
void performOperation(int choice, int num1, int num2) {
    switch (choice) {
        case 1:
            cout << "Result of Addition: " << num1 + num2 ;
            break;
        case 2:
            cout << "Result of Subtraction: " << num1 - num2 ;
            break;
        case 3:
            cout << "Result of Multiplication: " << num1 * num2;
            break;
        case 4:
            if (num2 != 0)
                cout << "Result of Division: " << num1 / num2 ;
            else
                cout << "The second integer is zero, divide by zero." ;
            break;
        default:
            cout << "Invalid choice! Please enter a number between 1 and 4." ;
    }
}

