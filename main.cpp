#include <iostream>
using namespace std;

int main() {

   int i;
   int numClasses = 0;
   int creditHours = 0;
   int totalCredits = 0;
   double costPerCredit = 0.00;
   double numFees = 0.00;
   double totalFees = 0.00;
   double subtotal = 0.00;
   double total = 0.00;
   char classFees;
   char student;
   
   cout << "Are you a student? " << endl;
   cin >> student;
   if (student == 'N' || student == 'n') {
      return 0; 
   }
   else if (student == 'Y' || 'y') {
      cout << "How many classes are you taking? " << endl;
      cin >> numClasses;
   
      if (numClasses < 1) {
         cout << endl << "SUMMARY" << endl << "Number of credit hours: 0" << endl << "Cost per credit hour: 0.00" << endl << "Fees: 0.00" << endl << "Subtotal: 0.00" << endl << "Total: 0.00" << endl;
      return 0;
      }
      
      cout << "What is the cost per credit hour? " << endl;
      cin >> costPerCredit;
      
      for (i = 1; i <= numClasses; ++i) {
         cout << "How many credit hours is class " << i << "? " << endl;
         cin >> creditHours;
         if (creditHours < 1) {
            cout << "Classes must be at least one or more credits." << endl;
            cout << "How many credit hours is class " << i << "? " << endl;
            cin >> creditHours;
         }
         
         cout << "Are there any fees for class " << i << "? " << endl;
         cin >> classFees;
         if (classFees == 'Y' || classFees == 'y') {
            cout << "What is the total amount of fees for class " << i << "? " << endl;
            cin >> numFees;
         }
         else if (classFees == 'N' || classFees == 'n') {
            numFees = 0;
         }
         totalCredits += creditHours;
         totalFees += numFees;
      }
      subtotal = (totalCredits * costPerCredit) + totalFees;
      total = (subtotal * 1.075);
      
   }
   cout << endl << "SUMMARY" << endl << "Number of credit hours: " << totalCredits << endl << "Cost per credit hour: " << costPerCredit << endl << "Fees: " << totalFees << endl << "Subtotal: " << subtotal << endl << "Total: " << total << endl;
      

   return 0;
}
