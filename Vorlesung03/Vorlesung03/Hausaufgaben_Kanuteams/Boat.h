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
	void setKanuteam(Kanuteam* kanuteam);
	void setKanuteam_noTest(Kanuteam* kanuteam);
	void removeKanuteam();
	bool is_KanuteamSet();

protected:
	Kanuteam* m_Kanuteam;
};

