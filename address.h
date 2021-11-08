/**
  * File:     address.h
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Declaration of class Address
  */

#include <string>
#include <iostream>

#ifndef ADDRESS_H
#define ADDRESS_H

namespace people {

class Address {
    private:
        int _number;
        std::string _street;
        std::string _zipcode;
        std::string _city;
    public:
        Address(int number, std::string street, std::string zipcode, std::string city);
        int number() const;
        std::string street() const;
        std::string zipcode() const;
        std::string city() const;

};

std::string full_address(Address address);

std::ostream& operator<<(std::ostream& os, const Address& address);

} // people

#endif // ADDRESS_H
