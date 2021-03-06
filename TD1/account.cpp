/**
  * File:     account.cpp
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Implementation of class Acccount
  */

#include "account.h"

namespace bank {
    Account::Account(people::Customer customer, std::string iban,
                    date::Date creation, double balance, double max_debit) :
                    _customer(customer), _iban(iban), _creation(creation),
                    _balance(balance), _max_debit(max_debit)
                     {
                        assert("Balance must be positive to create an account" && balance >=0);
                     }

    people::Customer Account::customer() const {
        return _customer;
    }
    std::string Account::iban() const {
        return _iban;
    }
    date::Date Account::creation() const {
        return _creation;
    }
    double Account::balance() const {
        return _balance;
    }
    double Account::max_debit() const {
        return _max_debit;
    }

    bool Account::debit(double amount) {
        if ((amount <= 0) || (amount >= _balance) || (amount >= _max_debit)) {
            return false;
        }
        _balance -= amount;
        return true;
    }

    bool Account::credit(double amount) {
        if (amount <= 0) {
            return false;
        }
        _balance += amount;
        return true;
    }
    /*
    bool Account::transfer(Account& dest, double amount) {
        if (debit(amount)) {
            dest.credit(amount);
            return true;
        }
        return false;
    }
    */

    bool transfer (Account& source, Account& dest, double amount) {
        if (!source.debit(amount)) {
            return false;
        }
        dest.credit(amount);
        return true;
    }
/*
    void Account::setBalance(double new_balance) {
        if (new_balance >= 0) {
            _balance = new_balance;
        }
    }

    bool credit(Account& account, double amount) {
        if (amount <= 0) {
            return false;
        }
        account.setBalance(account.balance()+amount);
        return true;
    }
*/

    std::ostream& operator<<(std::ostream& os, const Account& account) {
        os << account.customer()<< std::endl;
        os << account.iban() << std::endl;
        os << account.creation() << std::endl;
        os << account.balance() << std::endl;
        os << account.max_debit() << std::endl;
        return os;
    }


    Saving::Saving(people::Customer customer, std::string iban,
                date::Date creation, double rate,
                double balance, double max_debit) :
                Account(customer, iban, creation, balance, max_debit),
                _rate(rate) {}

    bool Saving::credit(double amount) {
        return Account::credit(amount*(1+_rate/100.00));
    }


}