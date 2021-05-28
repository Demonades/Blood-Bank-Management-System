//
// Created by Lenovo on 5/28/2021.
//
#include <bits/stdc++.h>
using namespace std;
class BloodBag {
protected:
    string type;
public:
    BloodBag(string type, time_t date);
    //For registration and serialization, date will be handled implicitly
    BloodBag(string type);
    static map<string,queue<BloodBag>> deserialize();
    static string displayString(time_t t);

    time_t date;

    static void serialize(map<string, queue<BloodBag>> database);
};


