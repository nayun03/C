/*********************************************************************
* Name: Nayun Jeong
* Project 3: PrintExpressionsWithOptions
* Editor(s) used: Visual Studio Code
* Compiler(s) used: Visual Studio Code
* Description:
*   This program prints operations with two input values.
**********************************************************************/
#include <iostream>
using namespace std;

/*********************************************************************
* Function: Main
**********************************************************************/

int main() {
    int first, second;
    char option;

    int sum, difference, product, quotient, modulus;

    cout << "Please enter the first operand:  ";
    cin >> first;

    if (first > 0){
        cout << "Please enter the second operand: ";
        cin >> second;
        
        if(second > 0){
            cout << "Please enter the printing option ('A' or 'B'): ";
            cin >> option;

            sum = first + second;
            difference = first - second;
            product = first * second;
            quotient = first / second;
            modulus = first % second;

            if (option == 'A'){
                cout.width(5);
                cout << first << "    +";
                cout.setf(ios::right); 
                cout.width(5);
                cout << second << "    =";
                cout.width(5);
                cout << sum << endl;

                cout.width(5);
                cout.setf(ios::right); 
                cout << first << "    -";
                cout.width(5);
                cout << second << "    =";
                cout.width(5);
                cout << difference << endl;

                cout.width(5);
                cout.setf(ios::right); 
                cout << first << "    *";
                cout.width(5);
                cout << second << "    =";
                cout.width(5);
                cout << product << endl;

                cout.width(5);
                cout.setf(ios::right); 
                cout << first << "    /";
                cout.width(5);
                cout << second << "    =";
                cout.width(5);
                cout << quotient << endl;

                cout.width(5);
                cout.setf(ios::right); 
                cout << first << "    %";
                cout.width(5);
                cout << second << "    =";
                cout.width(5);
                cout << modulus << endl;
            }
            else if(option == 'B'){
                cout.width(5);
                cout << first << "    +";
                cout.setf(ios::right); 
                cout.width(5);
                cout << second << "    =";
                cout.width(5);
                cout << sum << endl;

                cout.width(5);
                cout << first << "    -";
                cout.setf(ios::right); 
                cout.width(5);
                cout << second << "    =";
                cout.width(5);
                cout << difference << endl;
            }
            else {
                cout << "Unsupported printing option." << endl;
            }
        }
        else {
            cout << "The second operand is not valid." << endl;
        }
    }
    else{
        cout << "The first operand is not valid." << endl;
    }

    cout << endl;

    return 0;
}

/*********************************************************************
* Function: Controls input values by using conditinal statement 
*    'if-else' and prints arithmetic operations.
* Parameters: 
*   first (IN): the first operand
*   second (IN): the second operand
*   option (IN): user's choice for which operations to print
* Return: NONE
**********************************************************************/