/** 
  * File:     main.cpp 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021 
  * Course:   C-C++ Programming / Esirem 3A 
  * Summary:  Test
  */
#include <iostream>
#include "geometry.h"

int main(int argc, char const *argv[])
{

	Point centre(2.0, 5.5);
	double rayon = 4.0;
	Cercle cercle1(centre, rayon);
	std::cout << cercle1.aire() << std::endl;


	return 0;
}