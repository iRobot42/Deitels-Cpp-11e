// ex_03_04.cpp
// Credit Limits

#include <iomanip>
#include <iostream>

int main() {

   std::cout << std::setprecision( 2 ) << std::fixed;

   while ( true ) {

      int account;

      std::cout << "Enter account number (or -1 to quit): ";
      std::cin >> account;

      if ( account == -1 ) return 0;

      double beginning_balance, total_charges, total_credits, credit_limit;

      std::cout << "Enter beginning balance: "; std::cin >> beginning_balance;
      std::cout << "Enter total charges: ";     std::cin >> total_charges;
      std::cout << "Enter total credits: ";     std::cin >> total_credits;
      std::cout << "Enter credit limit: ";      std::cin >> credit_limit;

      const double balance{ beginning_balance + total_charges - total_credits };

      std::cout << "New balance is " << balance << '\n';

      if ( balance > credit_limit )
         std::cout << "Account:      " << account
                 << "\nCredit limit: " << credit_limit
                 << "\nBalance:      " << balance
                 << "\nCredit Limit Exceeded.\n";

      std::cout << std::endl;
   }

   return 0;
}