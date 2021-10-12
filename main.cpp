/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   12 oct. 2021 - 08h43
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A - TD1 Gr1
 */

#include <iostream>

#include "date.h"


int main(int argc, char const *argv[]) {

   date::Date d1(10,12);

   std::cout << "Hello world" << std::endl;
   std::cout << date::toString(d1) << std::endl;
   return 0;
}
