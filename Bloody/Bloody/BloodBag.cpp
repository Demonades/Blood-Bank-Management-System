//
// Created by Lenovo on 5/28/2021.
//
#include <bits/stdc++.h>
#include "BloodBag.h"
using namespace std;
string toString(time_t &t) {
    std::ostringstream oss;
    oss << t;
    return oss.str();
}

time_t fromString(string& s ) {
    std::istringstream stream( s );
    time_t t;
    stream >> t;
    return t;
}

BloodBag::BloodBag(string type, time_t date){
    this->type = type;
    this->date = date;
}

BloodBag::BloodBag(string type){
    this->type = type;
}
/*/
 * 	int t2 = time(NULL);
	cout << difftime(t2, t1);
    //sec = (time_t) time(NULL);
    //cout <<asctime(localtime(&sec)) << endl;
        int t1 = time(NULL);
    //time_t sec = (time_t) time(NULL);
    //cout <<asctime(localtime(&sec)) << endl;


    from seconds str to seconds time_t and vice versa
    string s = toString(now);
    time_t t = fromString(s);
    tm * date = localtime(&t);
    cout << s  << " " << asctime(date);

 */
void BloodBag::serialize(map<string,queue<BloodBag>> database){
    //time_t now = time(NULL);
    //tm * date = localtime(&now);
    //precondition: pass a fully initialized recipient
    ofstream myfile;
    myfile.open("../bloodbag.txt");
    for(auto b: database) {
        while (!b.second.empty()) {
            myfile << b.second.front().type << " " << b.second.front().date << endl;
            b.second.pop();
        }
    }
    myfile.close();
    //postcondition: recipient is serialized and saved to recipient file
}
string BloodBag::displayString(time_t t){
    return asctime(localtime(&t));
}
map<string, queue<BloodBag>> BloodBag::deserialize() {
    map<string, queue<BloodBag>> database;
    string entry;
    ifstream myfile;
    myfile.open("../bloodbag.txt");
    while (getline(myfile, entry)) {
        string s = entry.substr(entry.find(' ') + 1);
        time_t t = fromString(s);
        string btype = entry.substr(0, entry.find(" "));
        //BloodBag b(btype, t);
        database[btype].push(BloodBag(btype,t));
    }
    myfile.close();
    return database;
};

//Code to traverse map of queues
/*/

 /*/