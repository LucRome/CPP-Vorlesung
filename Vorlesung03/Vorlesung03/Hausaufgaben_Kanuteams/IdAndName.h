#pragma once
#include <string>

class Boat;
class Kanuteam;
class Person;


class IdAndName
{
public:
	IdAndName(std::string name);  //wei�t Name und ID zu
	virtual ~IdAndName();

	int getId() const;	//gibt Id zur�ck
	std::string getName() const;	//gibt Name zur�ck

	virtual void printInfos() const;	//gibt Id und Name aus


protected:
	static int counter;
	const int m_id;
	const std::string m_name;
};

