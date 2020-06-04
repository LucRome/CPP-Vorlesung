#pragma once
#include "IdAndName.h"

class Kanuteam;


class Boat :
	public IdAndName
{
public:
	Boat(std::string name, Kanuteam* kanuteam = nullptr);
	~Boat() override;
	void printInfos() const override;
	void addElement(Kanuteam* kanuteam);
	void removeElement(Kanuteam* k); //Input wird zwar nicht ben�tigt, aber um Art des Objektes festzulegen
	
	void setKanuteam_noTest(Kanuteam* kanuteam);
	bool is_KanuteamSet();

protected:
	Kanuteam* m_Kanuteam;
};

