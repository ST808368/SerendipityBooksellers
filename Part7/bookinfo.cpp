#include <iostream>
#include "bookinfo.h"
#include <iomanip>
using namespace std;

void bookInfo(string isbn, string title, string author, string publisher, string date, int qty, double wholesale, double retail)
{
    cout << fixed << setprecision(2) << setw(6);
    cout << "Serendipity Booksellers" << endl;
    cout << "    Book Information" << endl << endl;
    cout << "ISBN: " << isbn << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Publisher: " << publisher << endl;
    cout << "Date Added: " << date << endl;
    cout << "Quantity-On-Hand: " << qty << endl;
    cout << "Wholesale Cost: " << wholesale << endl;
    cout << "Retail Price: " << retail << endl;
}