/******************************************************************************
* Program:
*   Assignment 12, 
*   Brother , CS124
* Author:
*   Morgan Whitmer
* Summary:
*   This program will prompt the user
*   to enter in their income
*   "\tYour monthly income: "
*   the program will then display
*   "Your income is: "
******************************************************************************/

#include <iostream>
using namespace std;
#include <iomanip>
/******************************************************************************
* Input: User inputs his/her's 
*   monthly income
* Output: Display users monthly income
*   on the screen
******************************************************************************/

int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   float monthlyIncome;
   cout << "\tYour monthly income: ";
   cin >> monthlyIncome;
   cout << "Your income is: $" << setw(9) << monthlyIncome << "\n";
	
   return 0;
}

