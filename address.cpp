/**
  * File:     address.cpp
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Implementation of class Address
  */

#include "address.h"

namespace people {
    Address::Address(int number, std::string street,
                     std::string zipcode, std::string city) :
                     _number(number), _street(street),
                     _zipcode(zipcode), _city(city)
                     { }

    /*
     * Getters
     */

    int Address::number() const {
        return _number;
    }
    std::string Address::street()  const {
        return _street;
    }
    std::string Address::zipcode() const {
        return _zipcode;
    }
    std::string Address::city() const {
        return _city;
    }



    /*
     * Helper functions
     */

    std::string full_address(const Address& address) {
        return std::to_string(address.number()) + ", " +
               address.street() + " - " +
               address.zipcode() + " " +
               address.city();
    }

    std::ostream& operator<<(std::ostream& os, const Address& address) {

        os << std::to_string(address.number()) << ", "  <<
              address.street() << " - " <<
              address.zipcode() <<  " " << address.city()  ;
        return os;
    }
}
