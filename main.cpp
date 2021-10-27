/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   12 oct. 2021 - 08h43
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A - TD1 Gr1
 */

#include <iostream>

#include "date.h"
#include "address.h"


int main(int argc, char const *argv[]) {

   people::Address a1(12,"rue des geeks","01110", "St-Etienne");
   std::cout << a1 << std::endl;
   people::Address a2(1337,"rue des dev","21000", "Dijon");
   std::cout << a2 << std::endl;
   std::cout << full_address(a1) << std::endl;
   return 0;
}
