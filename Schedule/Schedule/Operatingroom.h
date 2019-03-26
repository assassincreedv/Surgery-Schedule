#pragma once
#include<string>

using namespace std;

class Operatingroom {

public:
	Operatingroom();
	Operatingroom(int _id, int _capacity, string _department);
	int getroomid() { return id; }
	int getroomcapacity() { return capacity; }
	string getroomdepartment() { return department; }
	~Operatingroom();

private:
	int id;
	int capacity;
	string department;
};