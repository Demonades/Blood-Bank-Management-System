#pragma once
#include "person.h"
class Doner :
    public person
{
private:
    
public:
    string known_disease;
    Doner(int ID, string name, string mail, string password, int age, string gender, string bloodtype,string known_disease);

};

