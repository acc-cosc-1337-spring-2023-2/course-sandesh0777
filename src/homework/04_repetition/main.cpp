//write include statements
#include <iostream>
#include <string>
#include "dna.h"

//write using statements
using namespace std;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/

int main() {
    int choice, num1, num2, result;
    bool exit = false;

    do {
        cout << "Please select an option: " << endl;
        cout << "1. Factorial" << endl;
        cout << "2. Greatest Common Divisor (gcd)" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a number to calculate factorial: ";
                cin >> num1;
                result = factorial(num1);
                cout << "Factorial of " << num1 << " is: " << result << endl;
                break;
            case 2:
                cout << "Enter two numbers to calculate gcd: ";
                cin >> num1 >> num2;
                result = gcd(num1, num2);
                cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;
                break;
            case 3:
                char confirm;
                cout << "Are you sure you want to exit? (Y/N)";
                cin >> confirm;
                if (confirm == 'Y' || confirm == 'y') {
                    exit = true;
                    cout << "Goodbye!" << endl;
                }
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (!exit);

    return 0;
}