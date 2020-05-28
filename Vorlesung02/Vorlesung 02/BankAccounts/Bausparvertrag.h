#pragma once
#include "BankAccount.h"
class Bausparvertrag : public BankAccount
{
public:
	Bausparvertrag(int BLZ, int balance_start = 0, int max = 250000, int interestRate = 4);
	Bausparvertrag();
	~Bausparvertrag() override;
	void payIn(int cash) override;
	void printInfos() override;

protected:
	const int m_max;
};

