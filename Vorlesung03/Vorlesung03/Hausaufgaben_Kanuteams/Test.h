#pragma once
#include <vector>

class Person;
class Kanuteam;
class Boat;

class Test
{
public:
	void testFunktion();

private:
	std::vector<Person*> m_persons;
	std::vector<Kanuteam*> m_teams;
	std::vector<Boat*> m_boats;
};

