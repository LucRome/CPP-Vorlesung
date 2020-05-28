#include "Car.h"
#include <math.h>

Car::Car(int x, int y, int fuelUse)
{
	m_x = x;
	m_y = y;
	m_fuelUse = fuelUse;
}

int Car::get_x()
{
	return m_x;
}

int Car::get_y()
{
	return m_y;
}

int Car::drive(int new_x, int new_y)
{
	int distance;
	int usedFuel;
	int d_x, d_y;

	d_x = abs(new_x - m_x);
	d_y = abs(new_y - m_y);

	distance = d_x + d_y; /*Besser über a² + b ² = c²*/

	usedFuel = distance * m_fuelUse / 100;
	return usedFuel;
}
