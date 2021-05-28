#include <bits/stdc++.h>
#include"person.h"
#include"Donor.h"
#include "Recipient.h"
#include "BloodBag.h"

using namespace std;

vector<Donor> donors;
vector<Recipient> recipients;
int main()
{
    cout << "Enter type\n";
	string type;
	cin >> type;
	if (type == "donor")
	{
	    donors = Donor::deserialize();
		Donor donor("6", "Jemmie", "saraahmed@gmail", "123", "20", "M", "O-", "Zy elfol");
		donors.push_back(donor);
        Donor::serialize(donors);
	}
	else if (type == "recipient")
	{
	    recipients = Recipient::deserialize();
		Recipient r("7", "Zeyad", "saraahmed@gmail", "123", "20", "M", "A-", "Hospital", "Doctor");
		recipients.push_back(r);
		Recipient::serialize(recipients);
	}
	else if(type == "blood"){
	    BloodBag b("O+");
	    b.serialize();
	    map<string,queue<BloodBag>> database = b.deserialize();


        for(auto x: database){
            cout << x.first << endl;
            while(!x.second.empty()){
                cout << BloodBag::displayString(x.second.front().date);
                x.second.pop();
            }
            cout << endl << endl;
        }
	}
	else
	{
		cout << "NOTFOUND" << endl;
	}

	return 0;
}