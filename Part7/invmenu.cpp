#include <iostream>
#include "invmenu.h"
using namespace std;

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
    cout << "You selected Look Up Book. " << endl;
}

void addBook(){
    cout << "You selected Add Book. " << endl;
}

void editBook(){
    cout << "You selected Edit Book. " << endl;
}

void deleteBook(){
    cout << "You selected Delete Book. " << endl;
}