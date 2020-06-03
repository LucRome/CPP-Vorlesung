#include "Test.h"
#include "Person.h"
#include "Kanuteam.h"
#include "Boat.h"

void Test::testFunktion()
{
	/*Person* p1 = new Person("Günther");
	Person* p2 = new Person("Gustav");
	Person* p3 = new Person("Jenny");
	Person* p4 = new Person("Laura");
	Person* p5 = new Person("Carl");

	Kanuteam* k1 = new Kanuteam("Row");
	Kanuteam* k2 = new Kanuteam("Bears");
	Kanuteam* k3 = new Kanuteam("Divers");

	Boat* b1 = new Boat("Unsink");
	Boat* b2 = new Boat("Eisberg");
	Boat* b3 = new Boat("Schwimmer");*/

	m_persons = {
		new Person("Gustav"),
		new Person("Carl"),
		new Person("Jenny"),
		new Person("Paula"),
		new Person("Daria")
	};

	m_teams = {
		new Kanuteam("Bears"),
		new Kanuteam("Rows"),
		new Kanuteam("Smiths")
	};

	m_boats = {
		new Boat("R2"),
		new Boat("B412"),
		new Boat("JK")
	};

	/*Boote den teams zuweisen*/
	for (int i = 0; i < m_boats.size(); i++) {
		if (i < m_teams.size()) {
			m_boats[i]->addElement(m_teams[i]);
		}
	}

	/*Teammitglieder einteilen*/
	m_teams[0]->addElement(m_persons[0]);
	m_teams[0]->addElement(m_persons[1]);
	m_teams[0]->addElement(m_persons[2]);
	m_teams[0]->addElement(m_persons[3]);

	m_teams[1]->addElement(m_persons[0]);
	m_teams[1]->addElement(m_persons[2]);
	m_teams[1]->addElement(m_persons[3]);
	m_teams[1]->addElement(m_persons[4]);

	m_teams[2]->addElement(m_persons[1]);
	m_teams[2]->addElement(m_persons[3]);
	m_teams[2]->addElement(m_persons[4]);
	m_teams[2]->addElement(m_persons[2]);

	/*Alle Infos Ausgeben*/
	for (Person* p : m_persons) {
		p->printInfos();
	}
	for (Boat* b : m_boats) {
		b->printInfos();
	}
	for (Kanuteam* k : m_teams) {
		k->printInfos();
	}
	
	/*Paar Elemente zerstören*/
	delete m_teams[1];
	m_teams.erase(m_teams.begin() + 1);
	delete m_persons[2];
	m_persons.erase(m_persons.begin() + 2);
	delete m_persons[3];
	m_persons.erase(m_persons.begin() + 3);
	delete m_boats[2];
	m_boats.erase(m_boats.begin() + 2);

	/*Alle Infos Ausgeben*/
	for (Person* p : m_persons) {
		p->printInfos();
	}
	for (Boat* b : m_boats) {
		b->printInfos();
	}
	for (Kanuteam* k : m_teams) {
		k->printInfos();
	}

	for (Person* p : m_persons) {
		delete p;
	}
	for (Kanuteam* k : m_teams) {
		delete k;
	}
	for (Boat* b : m_boats) {
		delete b;
	}

	m_boats.clear();
	m_teams.clear();
	m_persons.clear();
}
