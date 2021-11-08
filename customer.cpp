/**
  * File:     customer.cpp
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Implementation of class Customer
  */


#include "customer.h"

namespace people {

Customer::Customer(int id, std::string lastname, std::string firstname,
                 date::Date birthday, Gender gender, Address address,
                 std::string phone, std::string email) :
                _id(id), _lastname(lastname), _firstname(firstname),
                _birthday(birthday), _gender(gender), _address(address),
                _phone(phone), _email(email) {}

std::string Customer::lastname() const {
    return _lastname;
}
std::string Customer::firstname() const {
    return _firstname;
}
date::Date Customer::birthday() const {
    return _birthday;
}
Gender Customer::gender() const {
    return _gender;
}
Address Customer::address() const {
    return _address;
}
std::string Customer::phone() const {
    return _phone;
}
std::string Customer::email() const {
    return _email;
}

std::ostream& operator<<(std::ostream& os, const Customer& customer) {
    std::string fullname;
    if (customer.gender() == Gender::woman) {
        fullname = "Ms ";
    }
    else {
        fullname = "Mr ";
    }
    fullname += customer.firstname() + " " + customer.lastname();
    os << fullname << std::endl;
    os << " " << customer.birthday() << std::endl;
    os << " " << customer.address() << std::endl;
    os << " " << customer.phone() << std::endl;
    os << " " << customer.email() << std::endl;
    return os;

}

}

