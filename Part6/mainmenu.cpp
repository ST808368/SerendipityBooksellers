#include <iostream>
#include "cashier.h"
#include "invmenu.h"
#include "reports.h"
#include "bookinfo.h"
using namespace std;

int main()
{
    bool cont = true;
    while (cont){
        cout << "Serendipity Booksellers\n\tMain Menu\n" << endl;
        cout << "1. Cashier Module" << endl;
        cout << "2. Inventory Database Module" << endl;
        cout << "3. Report Module" << endl;
        cout << "4. Exit\n" << endl;
        cout << "Enter Your Choice: ";
        
        int mainChoice;
        cin >> mainChoice;
        
        switch(mainChoice){
            case 1:
                cashier();
                break;
            case 2:
                invMenu();
                break;
            case 3:
                reports();
                break;
            case 4:
                cout << "\nYou selected item 4." << endl << endl;
                cont = false;
                break;
            case 5:
                cout << "\nYou selected item 5." << endl << endl;
                break;
            case 6:
                cout << "\nYou selected item 6." << endl << endl;
                break;
            default:
                cout << "\nPlease enter a number in the range 1 - 4." << endl << endl;
        }
    }
	return 0;
}