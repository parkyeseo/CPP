#include "pch.h"
#include "../bank_system/account.h"

TEST(Account, constructor_initialization)
{
    Account* acc;
    acc = new Account("test", "test", 0);


    EXPECT_EQ("test", acc->getId());
    EXPECT_EQ(0, acc->getTotal_balance());

    delete acc;
}

