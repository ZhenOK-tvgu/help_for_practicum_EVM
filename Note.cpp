#include "Note.h"
#include <string.h>
#include <iostream>
#include <time.h>
#include <fstream>

Note::Note(const char* n, int a, int b)
{
	strcpy_s(this->name, 50, n);
	phone_number = a;
	this->birthday[3] = b;
}

Note::Note()
{
}
