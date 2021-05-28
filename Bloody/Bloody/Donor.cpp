#include "Donor.h"
#include <bits/stdc++.h>


void Donor::serialize(vector <Donor> v) {
    char delim = ',';
    //precondition: pass a fully initialized donor
    ofstream myfile;
    myfile.open("../donor.txt");
    for(auto d: v) {
        myfile << d.ID << delim << d.name << delim << d.mail << delim << d.password << delim << d.age << delim << d.gender << delim
               << d.bloodtype << delim << d.known_disease << '\n';
    }
    myfile.close();
    //postcondition: donor is serialized and saved to donor file
}

vector<Donor> Donor::deserialize() {
    char delim = ',';
    vector<Donor> donors;
    ifstream myfile;
    string entry, word;
    myfile.open("../donor.txt");
    while (getline(myfile, entry)) {
        stringstream s(entry);
        vector<string> v;
        while (getline(s, word, delim)) {
            v.push_back(word);
        }
        donors.push_back(Donor(v[0], v[1], v[2], v[3], v[4], v[5], v[6], v[7]));
    }
    myfile.close();
    return donors;
}

Donor::Donor(string ID, string name, string mail, string password, string age, string gender, string bloodtype,
             string known_disease) : person(ID, name, mail, password, age, gender, bloodtype) {
    this->known_disease = known_disease;
}

void
Donor::update_donor(string ID, string name, string mail, string password, string age, string gender, string bloodtype,
                    string known_disease) {
    this->age = age;
}
