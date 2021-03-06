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
        //void setBalance(double new_balance);
        //bool transfer(Account& dest, double amount);

    private:
        people::Customer _customer;
        std::string _iban;
        date::Date _creation;
        double _balance;
        double _max_debit;
    };

    bool transfer (Account& source, Account& dest, double amount);
    bool credit(Account& accout, double amount);
    std::ostream& operator<<(std::ostream& os, const Account& account);

    class Saving : public Account {
    public:
        Saving(people::Customer customer, std::string iban,
                date::Date creation, double rate=2.0,
                double balance=0, double max_debit=0);
        bool credit(double amount);
    private:
        double _rate;
    };
} // bank



#endif // ACCOUNT_H

