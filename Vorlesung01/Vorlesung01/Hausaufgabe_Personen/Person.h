#pragma once
#include <string>;
#include<stdio.h>;
#include "Enums.h";
using namespace std;

class Person
{
	void greet(Nationalities nationality, string nameOther);
	void farewell(Nationalities nationality, string nameOther);

public:
	Person(Nationalities nationality, string Name);
	void talkTo(Person person);
	Nationalities get_nationality();
	string get_name();

private:
	const Nationalities m_Nationality;
	const string m_Name;

};

