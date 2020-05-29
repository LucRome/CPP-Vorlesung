#include "Test.h"
#include "Person.h"
#include "Kanuteam.h"
#include "Boat.h"

void Test::testFunktion()
{
	Person* p1 = new Person("Günther");
	Person* p2 = new Person("Gustav");
	Person* p3 = new Person("Jenny");
	Person* p4 = new Person("Laura");
	Person* p5 = new Person("Carl");

	Kanuteam* k1 = new Kanuteam("Row");
	Kanuteam* k2 = new Kanuteam("Bears");
	Kanuteam* k3 = new Kanuteam("Divers");

	Boat* b1 = new Boat("Unsink");
	Boat* b2 = new Boat("Eisberg");
	Boat* b3 = new Boat("Schwimmer");



	b1->setKanuteam(k1);
	k2->setBoat(b2);
	b3->setKanuteam(k3);

	k1->addMember(p1);
	k1->addMember(p2);
	k1->addMember(p3);
	k1->addMember(p4);
	k1->addMember(p5);

	p1->addKanuteam(k2);
	p3->addKanuteam(k2);
	p5->addKanuteam(k2);

	k3->addMember(p3);
	k3->addMember(p4);
	k3->addMember(p5);


	p1->printInfos();
	p2->printInfos();
	p3->printInfos();
	p4->printInfos();
	p5->printInfos();

	k1->printInfos();
	k2->printInfos();
	k3->printInfos();

	b1->printInfos();
	b2->printInfos();
	b3->printInfos();


	delete p1;

	k1->printInfos();
}
