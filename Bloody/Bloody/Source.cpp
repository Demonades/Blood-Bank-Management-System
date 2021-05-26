#include <iostream>;
#include<string>
#include<vector>
#include"person.h"
#include"Doner.h"
#include "Recipient.h"
using namespace std;

vector<Doner> doners, recipient;
int main()
{
	cout << "Enter type" << endl;
	string type;
	cin >> type;
	if (type == "donor")
	{
		Doner doner(1,"Sara","saraahmed@gmail","123",20,"F","b-","Zy elfol");
		doners.push_back(doner);
	}
	else if (type == "recipient")
	{
		cout << "3a3a3a3a3a" << endl;
	}
	else
	{
		cout << "NOTFOUND" << endl;
	}

	cout << "Data is: " << doners[0].known_disease;

	return 0;
}