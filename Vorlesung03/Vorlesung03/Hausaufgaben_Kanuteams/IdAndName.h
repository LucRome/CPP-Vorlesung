#pragma once
#include <string>


class IdAndName
{
public:
	IdAndName(std::string name);
	virtual ~IdAndName();

	int getId() const;
	std::string getName() const;

	virtual void printInfos() const;
	


protected:
	static int counter;
	const int m_id;
	const std::string m_name;
};

