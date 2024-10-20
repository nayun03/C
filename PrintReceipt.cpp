/*********************************************************************
* Name: Nayun Jeong
* Project 2: PrintReceipt
* Editor(s) used: Visual Studio Code
* Compiler(s) used: Visual Studio Code
* Description:
*   This program prints a receipt of given informations.
**********************************************************************/
#include <iostream>
using namespace std;

/*********************************************************************
* Function: Main
**********************************************************************/

int main() {
    string name;
    double price;
    int quantity;
    char gift;
    string occasion;
    double subtotal, tax, total;
    

    cout << "Please enter the name of the item: ";
    getline(cin, name);

    cout << "Please enter the price for each item: ";
    cin >> price;

    cout << "Please enter the quantity: ";
    cin >> quantity;

    cout << "Is this a gift? ";
    cin >> gift;

    cin.ignore();

    cout << "Please enter the description of the occasion: ";
    getline(cin, occasion);
    
    cout << "========== RECEIPT ==========" << endl;

    cout.width(12);
    cout.setf(ios::left);
    cout << "Name:";
    cout.setf(ios::left);
    cout << name << endl;

    cout.width(12);
    cout.setf(ios::left);
    cout << "Price:";
    cout.setf(ios::left);
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "$" << price << endl;

    cout.width(12);
    cout.setf(ios::left);
    cout << "Quantity:";
    cout.setf(ios::left);
    cout << quantity << endl;

    cout.width(12);
    cout.setf(ios::left);
    cout << "Subtotal:";
    cout.setf(ios::left);
    subtotal = price * quantity;
    cout << "$" << subtotal << endl;

    cout.width(12);
    cout.setf(ios::left);
    cout << "Tax:";
    cout.setf(ios::left);
    tax = subtotal * 0.1;
    cout << "$" << tax << endl;

    cout.width(12);
    cout.setf(ios::left);
    cout << "Total:";
    cout.setf(ios::left);
    total = tax + subtotal;
    cout << "$" << total << endl;

    cout.width(12);
    cout.setf(ios::left);
    cout << "Gift (y/n):";
    cout.setf(ios::left);
    cout << gift << endl;

    cout.width(11);
    cout.setf(ios::left);
    cout << "Occasion:";
    cout.setf(ios::left);
    cout << occasion << endl;

    cout << "============================" << endl;

    return 0;
}

/*********************************************************************
* Function: Gets input values using cin and getline() functions and 
*    prints a formatted receipt. setf is used to format an output and
*    precision is used to format decimal places
* Parameters: 
*   name (IN): name of the item
*   price (IN): price per item
*   quantity (IN): number of items
*   gift (IN): indicates if the item is a gift
*   occasion (IN): description of the occasion
* Return: NONE
**********************************************************************/