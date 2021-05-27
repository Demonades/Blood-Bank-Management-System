#include <iostream>
#include<string>
#include<vector>
#include"person.h"


using namespace std;
person::person(int ID, string name, string mail, string password, int age, string gender, string bloodtype)
{
		this->ID = ID;
		this->name = name;
		this->mail = mail;
		this->password = password;
		this->age = age;
		this->gender = gender;
		this->bloodtype = bloodtype;
}void person::login(int ID, string password)
{
	
	cout << "Login" << endl;
}