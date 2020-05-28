#include "GiroAccount.h"
#include <iostream>


GiroAccount::GiroAccount(int BLZ, int balance_start, int interest_start, int dispo)
	:BankAccount(BLZ, interest_start, balance_start)
	, m_dispo(dispo)
{
}

GiroAccount::GiroAccount()
	:BankAccount()
	,m_dispo(askUser("Dispo"))
{
	m_balance = askUser("start Balance");
}

GiroAccount::~GiroAccount()
{
}

	void GiroAccount::payIn(int money)
{
	if (m_balance > m_dispo && money > 0) {
		m_balance += money;
		std::cout << "new Balance: " << m_balance << std::endl;
	}
	else {
		std::cout << "Not enough money left" << std::endl;
	}
}

void GiroAccount::printInfos()
{
	std::cout << "Giro Bank Account" << std::endl;
	BankAccount::printInfos();
	std::cout << "    Dispo: " << m_dispo << std::endl;

}
