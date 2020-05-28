#pragma once
#include "IdAndName.h"

class Kanuteam;


class Boat :
	public IdAndName
{
public:
	Boat(std::string name, Kanuteam* kanuteam);
	~Boat() override;
	void printInfos() const override;

protected:
	Kanuteam* const m_Kanuteam;
};

