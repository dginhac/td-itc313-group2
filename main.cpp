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

   std::cout << full_address(a1) << std::endl;

   std::cout << "Hello world" << std::endl;

   std::cout << a1 << std::endl;

   return 0;
}
