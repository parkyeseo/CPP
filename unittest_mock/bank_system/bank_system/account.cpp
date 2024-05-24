#include "account.h"

Account::Account(string _id, string _name, int _balance) : id(_id), name(_name), balance(_balance) {
	total_balance += _balance;
}


string Account::getId(void) const
{
	return id;
}

int Account::getTotal_balance(void)
{
	return total_balance;
}


int Account::total_balance = 0;