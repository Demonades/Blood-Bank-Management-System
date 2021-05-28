#include "person.h"
#include<vector>
#include <string>
#include<iostream>

using namespace std;
person::person(string ID, string name, string mail, string password, string age, string gender, string bloodtype)
{
    this->ID = ID;
    this->name = name;
    this->mail = mail;
    this->password = password;
    this->age = age;
    this->gender = gender;
    this->bloodtype = bloodtype;
}

void person::login(string ID, string password)
{
}
