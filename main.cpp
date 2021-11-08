/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   12 oct. 2021 - 08h43
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A - TD1 Gr1
 */

#include <iostream>

#include "date.h"
#include "address.h"
#include "customer.h"
#include "account.h"


int main(int argc, char const *argv[]) {

   people::Address ad1(12,"rue des geeks","01110", "St-Etienne");
   std::cout << ad1 << std::endl;
   people::Address ad2(1337,"rue des dev","21000", "Dijon");
   std::cout << ad2 << std::endl;
   std::cout << full_address(ad1) << std::endl;

   int id=0;
   people::Customer c1(id++, "Ginhac", "Dom", date::Date(5,26), people::Gender::man,
      ad1,"0300010203", "dginhac@u-bourgogne.fr");

   std::cout << c1 << std::endl;


   bank::Account ac1(c1, "FR76XX", date::Date(11,8), 1000, 50);
   std::cout << ac1 ;

   ac1.debit(40);
   std::cout << ac1.balance() << std::endl;
   ac1.credit(40);
   std::cout << ac1.balance() << std::endl;

   bank::Account ac2(c1, "FR76XX", date::Date(11,8), 1000);
   //std::cout << ac2 ;

   std::cout << "Before transfer: ac1=" << ac1.balance() << " - ac2=" << ac2.balance() << std::endl;
   ac1.transfer(ac2, 20);
   std::cout << "After transfer: ac1=" << ac1.balance() << " - ac2=" << ac2.balance() << std::endl;


   bank::Account ac3(c1, "FR76XX", date::Date(11,8));
   //std::cout << ac3 ;


   std::cout << "Bye." << std::endl;


   return 0;
}
