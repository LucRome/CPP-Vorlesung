#pragma once
#include "BankAccount.h"

class GiroAccount : public BankAccount
{
public:
	GiroAccount(int BLZ, int balance_start = 0, int interest_start = 4, int dispo = -200);
	GiroAccount();
	~GiroAccount();
	void payIn(int cash) override;
	void printInfos() override;

protected:
	const int m_dispo;
};

