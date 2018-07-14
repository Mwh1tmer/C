/***********************************************************************
* Program:
*    project 03, Monthly Budget         
*    Brother Ridges, CS124
* Author:
*    Morgan Whitmer
* Summary: 
*   Input: user will input monthly income:,budgeted living expenses,actual living expenses:,actual taxes withheld:,actual tithe offerings:,actual other expenses
*    
*   Processing: organize and calculate totals.
*   
*   Output: 
        Item                  Budget          Actual
        =============== =============== ===============
        Income          $    1000.00    $    1000.00
        Taxes           $       0.00    $     100.00
        Tithing         $     100.00    $     120.00
        Living          $     650.00    $     700.00
        Other           $     250.00    $     150.00
        =============== =============== ===============
        Difference      $       0.00    $     -70.00
*
*    Estimated:  2.0 hrs   
*    Actual:     4.0 hrs
*      I would have to say the most difficult part in developing this program was:
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * the function 
 * 
 ***********************************************************************/

// User input    
 int getIncome()
{
int income;
 cout << "Please enter the following: \n";
 cout << "Your monthly income: \n";
 cin >> income;
 return;
}
 
int getBudgetLiving()
{
  int budLiving;
  cout << "Your budgeted living expenses: \n";
  cin >> budLiving;
 return;
} 
   int getActualLiving()
   {
     int actLiving;
     cout << "Your actual living expenses: \n"; 
cin >> actLiving;
 return;     
   }

  int getActualTax()
  {
    int actTax;
    cout << "Your actual taxes withheld: \n"; 
    cin >> actTax;
 return;  
  }
    
    int getActualTithing()
    {
    int actTithing;
    cout << "Your actual tithe offerings: \n";
    cin >> actTithing;
 return;  
    }

int getActualOther()
{    
      int actOther;
      cout << "Your actual other expenses: \n";
      cin >> actOther;
 return;  
}

// combine in main
int main()
{
 int income = getIncome();
 int budLiving = getBudgetLiving();
 int actTax = getActualTax();
 int actTithing = getActualTithing();
 int actliving = getActualLiving();
 int other = getActualOther();
 int display = display ( income, budLiving, actTax, actTithing, actLiving, actOther);  
}
 
 int display ( income, budLiving, actTax, actTithing, actLiving, actOther)
 {
   cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(0);
    
 int budgetTax = comTax * income;
 int budgetTithing = comTithing * income;
 int budgetOther = income – budgetTax – budgetTithing – budLiving;
 int actualDifference = income – actTax – actTithing – actLiving – actOther;
 int budgetDifference = 0;
 //Output: 
 //       Item                  Budget          Actual
 //       =============== =============== ===============
 //       Income          $    1000.00    $    1000.00
//        Taxes           $       0.00    $     100.00
//        Tithing         $     100.00    $     120.00
 //       Living          $     650.00    $     700.00
 //       Other           $     250.00    $     150.00
 //       =============== =============== ===============
  //      Difference      $       0.00    $     -70.00
	
    // first row (Item)
    cout << "Item\n"
    << "===============\n"
    << "Income\n"
    << "Taxes\n"
    << "Tithing\n"
    << "Living\n"
    << "Other\n"
    << "==============\n"
    << "Difference" 
    << end1;
    
	// second row (Budget)
	cout << "Budget\n";
    cout << "===============\n"
 << "\t$"
	<< setw(7) << income
 << "\t$"
	<< setw(7) << budgetTax
 << "\t$"    
	<< setw(7) << budgetTithing
 << "\t$"    
	<< setw(7) << budLiving
 << "\t$"
	<< setw(7) <<budgetOther
 << "\t$"    
<< "=============\n"
 << "\t$"   
<<  budgetDifference 
<< end1;
    
    // third row (Actual)
cout << "Actual\n"
<< "===============\n"
    << setw(7) << income
 << "\t$"
	<< setw(7) << actTax 
 << "\t$"    
	<< setw(7) << actTithing
 << "\t$"    
	<< setw(7) << actliving
 << "\t$"
	<< setw(7) << other
 << "\t$"    
 
<< "=============\n"
<< "\t$"  
<< actualDifference 
<< end1;
   return 0;
}

// computing Tithing
int computeTithing()
{
    int comTithing = income / 10;
    return;
}

// computing Taxes
int computeTax()
{
    int comTax;
    return 0.0.;
}