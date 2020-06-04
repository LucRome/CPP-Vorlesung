#pragma once
#include "IdAndName.h"

class Kanuteam;


class Boat :
	public IdAndName
{
public:
	Boat(std::string name, Kanuteam* kanuteam = nullptr);	//weißt Name zu, Kanuteam falls vorhanden
	~Boat() override; //entfernt sich auch aus Klassen die es referenzieren (Kanuteam)
	void printInfos() const override;	//gibt alle Infos aus
	void addElement(Kanuteam* kanuteam);	//fügt Kanuteam zu sich und sich selber zu Kanuteam hinzu (falls möglich)
	void removeElement(Kanuteam* k);	//entfernt Kanuteam (-> nullptr)
	
	void setKanuteam_noTest(Kanuteam* kanuteam);	//fügt nur Kanuteam hinzu
	bool is_KanuteamSet();	//Überprüft, ob Kanuteam gesetzt ist

protected:
	Kanuteam* m_Kanuteam;
};

