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
            bookInfo(isbn[i], bookTitle[i], author[i], publisher[i], dateAdded[i], qtyOnHand[i], wholesale[i], retail[i]);
        }
    }
}

void addBook(){
    string title, isbn, author, publisher, date, book;
    int qty;
    double wholesale, retail;
    int spot = -1;
    for (int i = 0; i < SIZE; i++){
        book = bookTitle[i];
    }
    if (spot == -1){
        cout << "No more books may be added to the inventory. " << endl;
    }
    else if (book == ""){
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
        cout << endl << "Quantity: ";
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
            bookInfo(isbn[i], bookTitle[i], author[i], publisher[i], dateAdded[i], qtyOnHand[i], wholesale[i], retail[i]);
        }
    }
    if (!found){
        cout << endl << "The book is not in inventory. " << endl;
    }
    else{
        cout << "You may edit any of the following fields: " << endl << "1. ISBN\n2. Title\n3. Author's Name\n4. Publisher's Name\n5. Date Book Was Added To Inventory\n6. Quantity On Hnad\n7. Wholesale Cost\n8. Retail Price\n9. Exit" << endl;
        cout << endl << "Enter Your Choice: ";
        int choice, newQty;
        string newISBN, newTitle, newAuthor, newPublisher, newDate;
        double newWholesale, newRetail;
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Current ISBN: " << isbn[spot] << endl;
                cout << "Enter new ISBN (#-###-#####-#): ";
                cin >> newISBN;
                isbn[spot] = newISBN;
                break;
            case 2:
                cout << "Current Title: " << bookTitle[spot] << endl;
                cout << "Enter new Title: ";
                cin >> newTitle;
                bookTitle[spot] = newTitle;
                break;
            case 3:
                cout << "Current Author: " << author[spot] << endl;
                cout << "Enter new Author: ";
                cin >> newAuthor;
                author[spot] = newAuthor;
                break;
            case 4:
                cout << "Current Publisher: " << publisher[spot] << endl;
                cout << "Enter new Publisher: ";
                cin >> newPublisher;
                publisher[spot] = newPublisher;
                break;
            case 5:
                cout << "Current Date Added: " << dateAdded[spot] << endl;
                cout << "Enter new Date (MM/DD/YYYY): ";
                cin >> newDate;
                dateAdded[spot] = newDate;
                break;
            case 6:
                cout << "Current Quantity on Hand: " << qtyOnHand[spot] << endl;
                cout << "Enter new Quantity on Hand: ";
                cin >> newQty;
                qtyOnHand[spot] = newQty;
                break;
            case 7:
                cout << "Current Wholesale Cost: " << wholesale[spot] << endl;
                cout << "Enter new Wholesale Cost: ";
                cin >> newWholesale;
                wholesale[spot] = newWholesale;
                break;
            case 8:
                cout << "Current Retail Price: " << retail[spot] << endl;
                cout << "Enter new Retail Price: ";
                cin >> newRetail;
                retail[spot] = newRetail;
                break;
            case 9:
                cout << "Go back to main menu.";
            default:
                cout << "Enter a valid option." << endl;
                break;
        }
    }
}

void deleteBook(){
    cout << "Title: ";
    bool found = false;
    string book;
    getline(cin, book);
    int spot;
    for (int i = 0; i < SIZE; i++){
        if (book == bookTitle[i]){
            found = true;
            spot = i;
            bookInfo(isbn[i], bookTitle[i], author[i], publisher[i], dateAdded[i], qtyOnHand[i], wholesale[i], retail[i]);
        }
    }
    if (!found){
        cout << endl << "The book is not in inventory. " << endl;
    }
    else{
        char confirm;
        cin >> confirm;
        if (confirm == 'y' || confirm == 'Y'){
            isbn[spot] = "";
            bookTitle[spot] = "";
        }
        isbn[spot] = "";
        bookTitle[spot] = "";
    }
}