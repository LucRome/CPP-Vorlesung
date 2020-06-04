#pragma once
#include "IdAndName.h"

class Kanuteam;


class Boat :
	public IdAndName
{
public:
	Boat(std::string name, Kanuteam* kanuteam = nullptr);	//wei�t Name zu, Kanuteam falls vorhanden
	~Boat() override; //entfernt sich auch aus Klassen die es referenzieren (Kanuteam)
	void printInfos() const override;	//gibt alle Infos aus
	void addElement(Kanuteam* kanuteam);	//f�gt Kanuteam zu sich und sich selber zu Kanuteam hinzu (falls m�glich)
	void removeElement(Kanuteam* k);	//entfernt Kanuteam (-> nullptr)
	
	void setKanuteam_noTest(Kanuteam* kanuteam);	//f�gt nur Kanuteam hinzu
	bool is_KanuteamSet();	//�berpr�ft, ob Kanuteam gesetzt ist

protected:
	Kanuteam* m_Kanuteam;
};

