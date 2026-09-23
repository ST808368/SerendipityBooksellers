#include <iostream>
#include "cashier.h"
using namespace std;

void cashier()
{
    bool valid = true;
    while (valid){
        string date, isbn, title;
        int quantity;
        float price;
        
        cout << "Serendipity Booksellers" << endl;
        cout << "  Cashier Module" << endl << endl;
        cout << "Date: ";
        cin >> date;
        cin.ignore();
        cout << "Quantity of Book: ";
        cin >> quantity;
        cin.ignore();
        cout << "ISBN: ";
        cin >> isbn;
        cin.ignore();
        cout << "Title: ";
        cin >> title;
        cin.ignore();
        cout << "Price: ";
        cin >> price;
        cin.ignore();
        cout << endl;
        double subtotal = price*quantity;
        double tax = subtotal*0.06;
        double total = tax + subtotal;
        
    	cout << "Serendipity Book Sellers\n" << endl;
    	cout << "Date: " << endl << endl;
    	cout << "Qty\tISBN\t\tTitle\t\t\tPrice\tTotal" << endl;
    	cout << "______________________________________________________________" << endl;
    	cout << quantity << "\t" << isbn << "\t\t" << title << "\t\t\t" << "$ " << price << "\t" << "$ " << subtotal << endl << endl;
    	cout << "\t\tSubtotal" << "\t\t\t\t$ " << subtotal << endl;
    	cout << "\t\tTax" << "\t\t\t\t\t$ " << tax << endl;
    	cout << "\t\tTotal" << "\t\t\t\t\t$ " << total << endl;
    	
    	cout << "\nThank You for Shopping at Serendipity!" << endl;
    	
    	string validHolder;
    	cout << "Does another transaction need to be processed? Reply 1 for Yes. ";
    	
    	cin >> validHolder;
    	if (validHolder != "1"){
    	    valid = false;
    	}
    }
}