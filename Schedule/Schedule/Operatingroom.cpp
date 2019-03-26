#include "Operatingroom.h"

Operatingroom::Operatingroom()
{
	id = -1;
	capacity = 0;
	department = "";
}

Operatingroom::Operatingroom(int _id, int _capacity, string _department)
{
	id = _id;
	capacity = _capacity;
	department = _department;
}

Operatingroom::~Operatingroom()
{
}
