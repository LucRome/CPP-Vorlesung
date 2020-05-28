#pragma once
#include <string>

class User
{
public:
	User(std::string name = "Hans");
	void print();
	//static int get_userCounter();
	

protected:
	const std::string m_name;
	int m_id;
	static int m_userCounter;
};

