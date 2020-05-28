#include "Location.h"




Location::Location(int x, int y, char name[10])
{
	m_x = x;
	m_y = y;
	for (int i = 0; i < 10;i++) {
		m_name[i] = name[i];
	}
	
}

int Location:: get_x() {
	return m_x;
}

int Location::get_y() {
	return m_y;
}

char* Location::get_name()
{
	return m_name;
}
