/**
  * File:     main.cpp
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:
  */

#include <vector>
#include <array>
#include <iostream>

std::ostream& operator<<(std::ostream& os, std::vector<double> data) {
    for (auto it=data.begin(); it!= data.end();++it)
        os << *it << " ";
    os << std::endl;
    return os;
}

int main() {
    std::vector<double> source;
    std::cout << source;

    double offset = 2.3;


    std::transform(source.begin(), source.end(), source.begin(),
                    [offset](double a) { return 2*a+offset;});

    std::cout << source;

    return 0;
}