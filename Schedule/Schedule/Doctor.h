#pragma once
#include<string>
#include<vector>
#include<unordered_set>

using namespace std;



class Doctor {

public:
	Doctor(int _id, string _name, unordered_set<int> _prefertime, unordered_set<int> _conflicttime);
	Doctor(int _id, string _name);
	Doctor();
	int getid() { return id; }
	string getname() { return name; }
	unordered_set<int> getconflicttime() { return conflicttime; }
	unordered_set<int> getprefertime() { return prefertime; }
	void setconflicttime(unordered_set<int> ct);
	void setprefertime(unordered_set<int> pt);
	~Doctor() {};

private:
	int id;
	string name;
	unordered_set<int> prefertime;
	unordered_set<int> originalconflicttime;
	unordered_set<int> conflicttime;
};