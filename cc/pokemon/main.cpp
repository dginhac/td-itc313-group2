#include <iostream>
#include "pokemon.h"

int main(int argc, char const *argv[])
{
    Pokemon p1("Salameche", 30);
    Pokemon p2("Pikachu", 50);
    if (p1 < p2) {
        std::cout << "p1 a moins de PV que p2" << std::endl;
    }
    std::cout << p1;
    std::cout << p2;
    std::cout << "Combat avec methode " << std::endl;
    p1.fight(p2);
    std::cout << p1;
    std::cout << p2;
    std::cout << "Combat avec fonction " << std::endl;
    fight2(p1,p2);
    std::cout << p1;
    std::cout << p2;


    std::cout << "bye." << std::endl;
    return 0;
}