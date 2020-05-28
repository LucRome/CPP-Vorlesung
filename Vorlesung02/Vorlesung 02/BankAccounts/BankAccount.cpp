#include "BankAccount.h"
#include <iostream>

std::mt19937 BankAccount::mt_rand = std::mt19937(23);

BankAccount::BankAccount(int BLZ, int interestRate_start, int balance)
	:m_AccoutnNr(randomNr())
	,m_BLZ(BLZ)
{
	m_balance = balance;
	m_interestRate = interestRate_start;
}

BankAccount::BankAccount()
	:m_AccoutnNr(randomNr())
	,m_BLZ(askUser("BLZ"))
{
	m_balance = askUser("Balance");
	m_interestRate = askUser("Interest Rate");
}

BankAccount::~BankAccount()
{
}

void BankAccount::printInfos()
{
	std::cout << "    Account Nr.: " << m_AccoutnNr << std::endl;
	std::cout << "    BLZ: " << m_BLZ << std::endl;
	std::cout << "    Balance: " << m_balance << std::endl;
	std::cout << "    Interest Rate: " << m_interestRate << "%" << std::endl;
}

int BankAccount::randomNr()
{	
	int nr = mt_rand();
	return abs(nr);
}
