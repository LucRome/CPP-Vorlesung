#include "TagesgeldAccount.h"
#include <iostream>

TagesgeldAccount::TagesgeldAccount(int BLZ, int balance_start, int interestRate, int min_RunTime)
	:BankAccount(BLZ, interestRate, balance_start)
	,m_minRunTime(min_RunTime)
	,m_balance(balance_start)
{
}

TagesgeldAccount::TagesgeldAccount()
	:BankAccount()
	,m_minRunTime(askUser("Mindestlaufzeit"))
	,m_balance(askUser("Balance (cant pay in)"))
{
}

TagesgeldAccount::~TagesgeldAccount()
{
}

void TagesgeldAccount::payIn(int cash)
{
	std::cout << "you cant pay in money" << std::endl;
}

void TagesgeldAccount::printInfos()
{
	std::cout << "Tagesgeld Bank Account" << std::endl;
	BankAccount::printInfos();
	std::cout << "    Runtime " << m_minRunTime << std::endl;
}
