#pragma once
#include "person.h"
class Donor :
        public person
{
private:
    string known_disease;

public:

    Donor(string ID, string name, string mail, string password, string age, string gender, string bloodtype, string known_disease);
    void update_donor(string ID, string name, string mail, string password, string age, string gender, string bloodtype, string known_disease);
    static void serialize(vector <Donor> v);
    static vector<Donor> deserialize();
};