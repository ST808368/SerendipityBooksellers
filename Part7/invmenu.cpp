#include <iostream>
#include "invmenu.h"
#include "bookinfo.h"
using namespace std;

// constant for array sizes
const int SIZE = 20;

// global arrays
extern string bookTitle[SIZE];
extern string isbn[SIZE];
extern string author[SIZE];
extern string publisher[SIZE];
extern string dateAdded[SIZE];
extern int qtyOnHand[SIZE];
extern double wholesale[SIZE];
extern double retail[SIZE];

int invMenu()
{
    bool cont = true;
    while (cont){
    	cout << "Serendipity Booksellers" << endl;
    	cout << "   Inventory Database" << endl << endl;
    	cout << "1. Look Up a Book" << endl;
    	cout << "2. Add a Book" << endl;
    	cout << "3. Edit a Book's Record" << endl;
    	cout << "4. Delete a Book" << endl;
    	cout << "5. Return to the Main Menu" << endl << endl;
    	cout << "Enter Your Choice: ";
    	
    	int inventoryChoice;
    	cin >> inventoryChoice;
    	
        switch(inventoryChoice){
            case 1:
                lookUpBook();
                break;
            case 2:
                addBook();
                break;
            case 3:
                editBook();
                break;
            case 4:
                deleteBook();
                break;
            case 5:
                cout << "\nYou selected item 5." << endl << endl;
                cont = false;
                break;
            default:
                cout << "\nPlease enter a number in the range 1 - 5." << endl << endl;
        }
    }
	return 0;
}

void lookUpBook(){
    cout << "Title: ";
    string book;
    getline(cin, book);
    for (int i = 0; i < SIZE; i++){
        if (book == bookTitle[i]){
            bookInfo(isbn, title, author, publisher, date, qty, wholesale, retail);
        }
    }
}

void addBook(){
    int spot = -1;
    for (int i = 0; i < SIZE; i++){
        string book = bookTitle[i];
    }
    if (spot == -1){
        cout << "No more books may be added to the inventory. " << endl;
    }
    else if (book == "" || book == null){
        string title, isbn, author, publisher, date;
        int qty;
        double wholesale, retail;
        cout << "Book title: ";
        getline(cin, title);
        cout << endl << "ISBN number: ";
        getline(cin, isbn);
        cout << endl << "Author's name: ";
        getline(cin, author);
        cout << endl << "Publisher name: ";
        getline(cin, publisher);
        cout << endl << "Date: ";
        getline(cin, date);
        cout << endl << "Quantity: "
        cin >> qty;
        cout << endl << "Wholesale cost: ";
        cin >> wholesale;
        cout << endl << "Retail price: ";
        cin >> retail;
    }
}

void editBook(){
    cout << "Title: ";
    bool found = false;
    string book;
    getline(cin, book);
    int spot;
    for (int i = 0; i < SIZE; i++){
        if (book == bookTitle[i]){
            found = true;
            spot = i;
            bookInfo(isbn, title, author, publisher, date, qty, wholesale, retail);
        }
    }
    if (!found){
        cout << endl << "The book is not in inventory. " << endl;
    }
    cout << "You may edit any of the following fields: " << endl << "1. ISBN\n2. Title\n3. Author's Name\n4. Publisher's Name\n5. Date Book Was Added To Inventory\n6. Quantity On Hnad\n7. Wholesale Cost\n8. Retail Price\n9. Exit" << endl;
    cout << endl << "Enter Your Choice: ";
    string choice;
    cin >> choice;
    switch(choice){
        case 1:
            isbn[]
    }
    
    
}

void deleteBook(){
    cout << "You selected Delete Book. " << endl;
}