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
	void addElement(Kanuteam* kanuteam) override;
	void removeElement(Kanuteam* k) override; //Input wird zwar nicht benötigt, aber um Art des Objektes festzulegen
	
	void setKanuteam_noTest(Kanuteam* kanuteam);
	bool is_KanuteamSet();

protected:
	Kanuteam* m_Kanuteam;
};

