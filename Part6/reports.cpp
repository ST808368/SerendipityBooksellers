#include <iostream>
#include "reports.h"
using namespace std;

#include <iostream>
using namespace std;

void reports()
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
        cout << "Enter Your Choice: ";
        
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
                break;
            case 5:
                repCost();
                break;
            case 6:
                repAge();
                break;
            case 7:
                cout << "You selected Return to Main Menu. \n " << endl;
                cont = false;
                break;
            default:
                cout << "\nPlease enter a number in the range 1 - 7." << endl << endl;
        }
    }
}

void repListing(){
    cout << "You selected Inventory Listing. \n" << endl;
}

void repWholesale(){
    cout << "You selected Inventory Wholesale Value. \n" << endl;
}

void repRetail(){
    cout << "You selected Inventory Retail Value. \n" << endl;
}

void repQty(){
    cout << "You selected Listing By Quantity. \n" << endl;
}

void repCost(){
    cout << "You selected Listing By Cost. \n" << endl;
}

void repAge(){
    cout << "You selected Listing By Age. \n" << endl;
}