#pragma once
#include <string>

class Boat;
class Kanuteam;
class Person;


class IdAndName
{
public:
	IdAndName(std::string name);  //weißt Name und ID zu
	virtual ~IdAndName();

	int getId() const;	//gibt Id zurück
	std::string getName() const;	//gibt Name zurück

	virtual void printInfos() const;	//gibt Id und Name aus


protected:
	static int counter;
	const int m_id;
	const std::string m_name;
};

