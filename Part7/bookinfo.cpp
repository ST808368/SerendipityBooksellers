#include <iostream>
#include "bookinfo.h"
#include <iomanip>
using namespace std;

int bookInfo(string isbn, string title, string author, string publisher, string date, int qty, double wholesale, double retail)
{
    cout << "Serendipity Booksellers" << endl;
    cout << "    Book Information" << endl << endl;
    cout << "ISBN: " << isbn << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Publisher: " << publisher << endl;
    cout << "Date Added: " << date << endl;
    cout << "Quanitity-On-Hand: " << qty << endl;
    cout << fixed << setprecision(2);
    cout << "Wholesale Cost: " << wholesale << endl;
    cout << "Retail Price: " << retail << endl;
    return 0;
}