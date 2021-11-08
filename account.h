/**
  * File:     account.h
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Declaration of Account class
  */

#include <iostream>
#include "customer.h"
#include "date.h"

#ifndef ACCOUNT_H
#define ACCOUNT_H

namespace bank {

    class Account {
    public:
        Account(people::Customer customer, std::string iban,
                date::Date creation, double balance=0, double max_debit=0);
        people::Customer customer() const;
        std::string iban() const;
        date::Date creation() const;
        double balance() const;
        double max_debit() const;
        bool debit(double amount);
        bool credit(double amount);
        bool transfer(Account& dest, double amount);

    private:
        people::Customer _customer;
        std::string _iban;
        date::Date _creation;
        double _balance;
        double _max_debit;
    };

    std::ostream& operator<<(std::ostream& os, const Account& account);
} // bank

#endif // ACCOUNT_H

