#pragma once
#include <string>
#include <vector>
using namespace std;
class person
{
protected:
    string name, password, mail, gender, bloodtype, ID, age;
public:
    person(string ID, string name, string mail, string password, string age, string gender, string bloodtype);
    virtual void login(string ID, string password);

};
