#include "Person.h"
#include <iostream>


void Person::greet(Nationalities ownNationality, string nameOther)
{
	switch (ownNationality) {
	case de:
		cout << "\nHallo " <<  nameOther << endl; break;
	case en:
		cout << "\nGood morning " << nameOther << endl; break;
	case fr:
		cout << "\nBonjour " << nameOther << endl; break;
	case it:
		cout << "\nCiao! " << nameOther << endl; break;
	default:
		cout << "\nfalse Nationality" << endl;
	}
}

void Person::farewell(Nationalities otherNationality, string nameOther)
{
	switch (otherNationality) {
	case de:
		cout << "Auf wiedersehen " << nameOther << endl; break;
	case en:
		cout << "Good bye " << nameOther << endl; break;
	case fr:
		cout << "Au Revoir! " << nameOther << endl; break;
	case it:
		cout << "Ciao! " << nameOther << endl << endl; break;
	default:
		cout << "false Nationality" << endl;
	}
}

Person::Person(Nationalities nationality, string name)
	:m_Name(name)
	,m_Nationality(nationality)
{
}

void Person::talkTo(Person person)
{
	greet(m_Nationality, person.get_name());
	farewell(person.get_nationality(), person.get_name());
}

Nationalities Person::get_nationality()
{
	return m_Nationality;
}

string Person::get_name()
{
	return m_Name;
}
