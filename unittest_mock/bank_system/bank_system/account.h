#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using namespace std;

class Account
{
    string id, name;
    int balance;
    static int total_balance;

public:
    Account(string _id, string _name, int _balance);
    ~Account() {}

    string getId(void) const;

    static int getTotal_balance(void);
};

#endif /* ACCOUNT_H */
