#include "Recipient.h"
#include <bits/stdc++.h>

using namespace std;

Recipient::Recipient(string ID, string name, string mail, string password, string age, string gender, string bloodtype,
                     string Hospital, string Doctor) : person(ID, name, mail, password, age, gender, bloodtype) {
    this->Hospital = Hospital;
    this->Doctor = Doctor;
}

bool login(string ID, string password) {
    // check if the given data exists already
    return true;
}

void Recipient::update_recipient(string ID, string name, string mail, string password, string age, string gender,
                                 string bloodtype, string Hospital, string Doctor) {
    //if any of the paramter is empty will leave it the way it is
    if (!ID.empty())
        this->ID = ID;

    if (!name.empty())
        this->name = name;

    if (!mail.empty())
        this->mail = mail;

    if (!password.empty())
        this->password = password;

    if (!age.empty())
        this->age = age;

    if (!gender.empty())
        this->gender = gender;

    if (!bloodtype.empty())
        this->bloodtype = bloodtype;

    if (!Hospital.empty())
        this->Hospital = Hospital;

    if (!Doctor.empty())
        this->Doctor = Doctor;

}

void Recipient::serialize(vector<Recipient> v) {
    char delim = ',';
    //precondition: pass a fully initialized donor
    ofstream myfile;
    myfile.open("../recipient.txt");
    for (auto r: v) {
        myfile << r.ID << delim << r.name << delim << r.mail << delim << r.password << delim << r.age << delim
               << r.gender << delim << r.bloodtype << delim << r.Hospital << delim << r.Doctor << '\n';
    }
    myfile.close();
    //postcondition: donor is serialized and saved to donor file
}

vector<Recipient> Recipient::deserialize() {
    char delim = ',';
    vector<Recipient> recipients;
    ifstream myfile;
    string entry, word;
    myfile.open("../recipient.txt");
    while (getline(myfile, entry)) {
        stringstream s(entry);
        vector<string> v;
        while (getline(s, word, delim)) {
            v.push_back(word);
        }
        recipients.push_back(Recipient(v[0], v[1], v[2], v[3], v[4], v[5], v[6], v[7],v[8]));
    }
    myfile.close();
    return recipients;
}