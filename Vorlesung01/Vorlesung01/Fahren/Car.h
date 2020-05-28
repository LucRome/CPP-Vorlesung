#pragma once
class Car
{
	int m_x = 0, m_y = 0;
	int m_fuelUse = 5;

public:
	Car(int x, int y, int fuelUse);
	int get_x();
	int get_y();
	int drive(int new_x, int new_y);
};

