/******************************************************************************
* Program:
*   Assignment 11, 
*   Brother , CS124
* Author:
*   Morgan Whitmer
* Summary:
*   This program will display a	
*   Monthly Budget 
*   on the screen 
******************************************************************************/

#include <iostream>
using namespace std;
#include <iomanip>
/******************************************************************************
* Input:
*   none
* Output:
*   Monthly Budget
*   Displyed to user
******************************************************************************/

int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   cout << "\t" <<  "Item" << 
   "\t\t"<< "Projected" << endl;
   cout << "\t" << "=============  " <<
   "\t" << setw(9) << "==========" << endl;
   cout << "\t" << "Income" <<
   "\t\t$" << setw(9) << 1000.00 << endl;
   cout << "\t" << "Taxes" <<
   "\t\t$" << setw(9) << 100.00 << endl;
   cout << "\t" << "Tithing" <<
   "\t\t$" << setw(9) << 100.00 << endl;
   cout << "\t" << "Living" <<
   "\t\t$" << setw(9) << 650.00 << endl;
   cout << "\t" << "Other" <<
   "\t\t$" << setw(9) << 90.00	<< endl;
   cout << "\t" << "=============  "<<
   "\t" << setw(9) << "==========" << endl;
   cout << "\t" << "Delta" << 
   "\t\t$" << setw(9) << 60.00	<< endl;
   return 0;
}
