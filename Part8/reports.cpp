#include <iostream>
#include "reports.h"
using namespace std;

#include <iostream>
using namespace std;

int reports()
{
    bool cont = true;
    while (cont){
        cout << "Serendipity Booksellers" << endl;
        cout << "\tReports" << endl << endl;
        cout << "1. Inventory Listing" << endl;
        cout << "2. Inventory Wholesale Value" << endl;
        cout << "3. Inventory Retail Value" << endl;
        cout << "4. Listing by Quantity" << endl;
        cout << "5. Listing by Cost" << endl;
        cout << "6. Listing by Age" << endl;
        cout << "7. Return to Main Menu" << endl << endl;
        cout << "Enter Your Choice: " << endl;
        
        int reportsChoice;
        cin >> reportsChoice;
        
        switch(reportsChoice){
            case 1:
                repListing();
                break;
            case 2:
                repWholesale();
                break;
            case 3:
                repRetail();
                break;
            case 4:
                repQty();
            case 5:
                repCost();
                break;
            case 6:
                repAge();
                cont = false;
                break;
            case 7:
                cout << "You selected item 7. " << endl;
            default:
                cout << "\nPlease enter a number in the range 1 - 7." << endl << endl;
        }
    }
    return 0;
}

void repListing(){
    cout << "You selected Inventory Listing. " << endl;
}

void repWholesale(){
    cout << "You selected Inventry Wholesale Value. " << endl;
}

void repRetail(){
    cout << "You selected Inventory Retail Value. " << endl;
}

void repQty(){
    cout << "You selected Listing By Quantity. " << endl;
}

void repCost(){
    cout << "You selected Listing By Cost. " << endl;
}

void repAge(){
    cout << "You selected Listing By Age. " << endl;
}