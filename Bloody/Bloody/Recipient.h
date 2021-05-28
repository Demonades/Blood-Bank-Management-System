#pragma once
#include "person.h"

class Recipient :
        public person
{
private:
    string Hospital, Doctor;

public:
    Recipient(string ID, string name, string mail, string password, string age, string gender, string bloodtype, string Hospital, string Doctor);
    void update_recipient(string ID, string name, string mail, string password, string age, string gender, string bloodtype, string Hospital, string Doctor);
    static void serialize(vector <Recipient> v);
    static vector<Recipient> deserialize();
};
