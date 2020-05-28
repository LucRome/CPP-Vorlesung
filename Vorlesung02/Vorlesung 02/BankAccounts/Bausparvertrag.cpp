#include "Bausparvertrag.h"
#include <iostream>

Bausparvertrag::Bausparvertrag(int BLZ, int balance_start, int max, int interestRate)
	:BankAccount(BLZ, interestRate, balance_start)
	,m_max(max)
{
}

Bausparvertrag::Bausparvertrag()
	:BankAccount()
	,m_max(askUser("Bausparsumme"))
{
}

Bausparvertrag::~Bausparvertrag()
{
}

void Bausparvertrag::payIn(int cash)
{
	if (cash > 0 && m_balance < (m_max - cash)) {
		m_balance += cash;
		std::cout << "new Balance: " << m_balance << std::endl;
	}
	else {
		std::cout << "Error: Input cant be negative or Maximum already reached" << std::endl;
	}
}

void Bausparvertrag::printInfos()
{
	std::cout << "	  Bausparvertrag" << std::endl;
	BankAccount::printInfos();
	std::cout << "    Maximum: " << m_max << std::endl;
}