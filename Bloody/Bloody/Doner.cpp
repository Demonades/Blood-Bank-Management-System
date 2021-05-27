#include "Doner.h"
#include <bits/stdc++.h>
Doner::Doner(int ID, string name, string mail, string password, int age, string gender, string bloodtype, string known_disease) :person(ID, name, mail, password, age, gender, bloodtype)
{
	this->known_disease = known_disease;
}
void Doner::serialize() {
    //precondition: pass a fully initialized donor
    ofstream myfile;
    myfile.open ("../donor.txt", ios_base::app);
    myfile << ID << " " << name << " " << mail << " " << password << " " << age << " " << gender << " " << bloodtype << " " <<known_disease << '\n';
    myfile.close();
    //postcondition: donor is serialized and saved to donor file
}