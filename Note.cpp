#include "Note.h"
#include <iostream>
#include <string.h>

Note::Note(const char* n, int a, int b)
{
	strcpy_s(name, 50, n);
	phone_number = a;
	birthday[3] = b;
}

Note::Note()
{
	name[0] = '\0';
	phone_number = 0;
	birthday[3] = 0;
}
