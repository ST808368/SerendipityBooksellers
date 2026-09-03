#include <iostream>
using namespace std;

int main()
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
                cout << "\nYou selected item 1." << endl << endl;
                break;
            case 2:
                cout << "\nYou selected item 2." << endl << endl;
                break;
            case 3:
                cout << "\nYou selected item 3." << endl << endl;
                break;
            case 4:
                cout << "\nYou selected item 4." << endl << endl;
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