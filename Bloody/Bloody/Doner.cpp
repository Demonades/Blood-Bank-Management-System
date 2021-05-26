#include "Doner.h"

Doner::Doner(int ID, string name, string mail, string password, int age, string gender, string bloodtype, string known_disease) :person(ID, name, mail, password, age, gender, bloodtype)
{
	this->known_disease = known_disease;
}
