#pragma once
class Location
{
	int m_x = 0, m_y = 0;
	char m_name[10];
	public: 
		Location(int x, int y, char name[10]);
		int get_x();
		int get_y();
		char* get_name();
};

