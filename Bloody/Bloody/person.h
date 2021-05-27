#pragma once
#include <string>
#include <vector>
using namespace std;
class person
{
protected:
	int ID, age;
	string name, password, mail, gender, bloodtype;
public:
	person(int ID, string name, string mail, string password, int age, string gender, string bloodtype);
	void login(int ID, string password);
	
	
};

