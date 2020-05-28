#include "Bausparvertrag.h"
#include "GiroAccount.h"
#include "TagesgeldAccount.h"

int main() {
	BankAccount* bau = new Bausparvertrag(821893);
	BankAccount* giro = new GiroAccount(987);
	BankAccount* day = new TagesgeldAccount();

	bau->printInfos();
	giro->printInfos();
	day->printInfos();

	giro->payIn(477);
	giro->printInfos();

	delete bau;
	delete giro;
	delete day;
}