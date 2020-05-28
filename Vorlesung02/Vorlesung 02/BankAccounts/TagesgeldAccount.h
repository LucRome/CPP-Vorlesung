#pragma once
#include "BankAccount.h"
class TagesgeldAccount : public BankAccount
{
public:
	TagesgeldAccount(int BLZ, int balance_start = 100, int interestRate = 4, int min_RunTime = 10);
	TagesgeldAccount();
	~TagesgeldAccount();
	void payIn(int cash = 0) override;
	void printInfos() override;

protected:
	const int m_minRunTime;
	const int m_balance;
};

