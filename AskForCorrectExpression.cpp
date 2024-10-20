/*********************************************************************
* Name: Nayun Jeong
* Project 4: AskForCorrectExpression
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
    
    int first, second, result;
    char op;

    cout << "Please enter the first operand:  ";
    cin >> first;

    while (cin.fail() || (first < 0)){
        if (cin.fail()){
            cout << "Unable to read the number for the first operand. Please try again." << endl;
            cin.clear() ; // clear the error state
            cin.ignore(INT_MAX, '\n'); // throw away the bad input
        } else if (first < 0){
            cout << "The first operand cannot be negative. Please try again." << endl;
        }
        cout << "Please enter the first operand:  ";
        cin >> first;
    }
    cout << "Please enter the second operand: ";
    cin >> second;

    while (cin.fail() || (second < 0)){
        if (cin.fail()){
            cout << "Unable to read the number for the second operand. Please try again." << endl;
            cin.clear() ; // clear the error state
            cin.ignore(INT_MAX, '\n'); // throw away the bad input
        }
        else if (second < 0){
            cout << "The second operand cannot be negative. Please try again." << endl;
        }
        cout << "Please enter the second operand: ";
        cin >> second;
    }

    cout << "Please enter the expression operator: ";
    cin >> op;
    while (op != '+' && op != '-' && op != '*' && op != '/' && op != '%') {
            cout << "Unsupported operator. Please try again." << endl;
            cout << "Please enter the expression operator: ";
            cin >> op;
        }
        switch (op) {
            case '+':
                result = first + second;
                break;
            case '-':
                result = first - second;
                break;
            case '*':
                result = first * second;
                break;
            case '/':
                result = first / second;
                break;
            case '%':
                result = first % second;
                break;
            }

    cout.width(5);
    cout.setf(ios::right);
    cout << first << "    " << op;
    cout.width(5);
    cout << second << "    =";            
    cout.width(5);
    cout << result << endl << endl;

    return 0;
}

/*********************************************************************
* Function: Gets two operands and one operator. Until proper operands
*    and an operator are entered, handles input error and gets the input.
* Parameters: 
*   first (IN): the first operand
*   second (IN): the second operand
*   op (IN): the arithmetic operator
* Return: NONE
**********************************************************************/