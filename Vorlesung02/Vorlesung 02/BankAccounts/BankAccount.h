#pragma once
#include "Communication.h"
#include <string>
#include <random>

class BankAccount : public Communication
{
public:
	BankAccount(int BLZ, int interestRate_start, int balance);
	BankAccount();
	virtual ~BankAccount();
	virtual void printInfos();
	virtual void payIn(int cash) = 0;


protected:
	const int m_AccoutnNr; /*Randomly generated*/
	const int m_BLZ;
	int m_balance;
	int m_interestRate; /*May change over Time, depends on kind of Account 
						(wäre für Bauspahrvertrag const, steht aber nicht in Aufgabe
						Angabe in %*/

private:
	int randomNr();
	static std::mt19937 mt_rand;
};

