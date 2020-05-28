
#include "Main.h"
#include<random>
#include<cstdlib>

/*
 *Unfertig
 */
enum Gender {
	Mann, Frau, Divers
};


char Name[10][2][20] = {
	{{"Gustav"}, {"Gans"}},
	{{"Melanie"}, {"Schmidt"}},
	{{"Gertrude"}, {"Bauer"}},
	{{"Elias"}, {"Lehmann"}},
	{{"Natasha"}, {"Tara"}},
	{{"Hermann"},{"A"}},
	{{"Chris"}, {"B"}},
	{{"50"}, {"Cent"}},
	{{"Snoop"}, {"Dogg"}},
	{{"Hanna"}, {"Schmied"}} };


struct Employee {
	int ID;
	char Vorname[20];
	char Nachname[20];
	int Gewicht;
	Gender gender;
};


void createEmployees(Employee employees[]) {
	int randomNr;
	for (int i = 0; i < 10; i++) {
		randomNr = std::srand();
	}
}

char Salutation[3][6] = { {"Herr"}, {"Frau"}, {"Sonst"}};

	int randomNr;
	char Name;
	Employee employees[10];

	void main() {
		

		for (int
	}
