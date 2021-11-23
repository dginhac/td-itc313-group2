/**
  * File:     customer.h
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Declaration of class Customer
  */

#include "date.h"
#include "address.h"
#include <iostream>

#ifndef CUSTOMER_H
#define CUSTOMER_H

namespace people {

    enum class Gender {
        woman, man
    };

    class Customer
    {
    public:
        Customer(int id, std::string lastname, std::string firstname,
                 date::Date birthday, Gender gender, Address address,
                 std::string phone, std::string email);
        int id() const;
        std::string lastname() const;
        std::string firstname() const;
        date::Date birthday() const;
        Gender gender() const;
        Address address() const;
        std::string phone() const;
        std::string email() const;


    private:
        int _id;
        std::string _lastname;
        std::string _firstname;
        date::Date _birthday;
        Gender _gender;
        Address _address;
        std::string _phone;
        std::string _email;
    };

    std::ostream& operator<<(std::ostream& os, const Customer& customer);



} // people

#endif // CUSTOMER_H
