#pragma once
class Note
{
public:
	char name[50];
	int phone_number;
	int birthday[3];
	Note(const char*, int a, int b);
	Note();
	~Note();
};

