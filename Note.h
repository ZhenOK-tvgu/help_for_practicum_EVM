#pragma once
#include <fstream>
using namespace std;
class Note
{
public:
	char name[50];
	int phone_number;
	int birthday[3];
	Note(const char*, int a, int b);
	Note();
	friend ostream& operator<<(ostream& os, const Note& m) {
		return os << m.name << " " << m.phone_number << " " << m.birthday;
	}
	friend istream& operator>>(ostream& os, const Note& m) {
		return os >> m.name >> " " >> m.phone_number >> " " >> m.birthday;
	}
};

