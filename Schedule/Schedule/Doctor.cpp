#include"Doctor.h"

using namespace std;

Doctor::Doctor(int _id, string _name, unordered_set<int> _prefertime, unordered_set<int> _conflicttime)
{
	id = _id;
	name = _name;
	prefertime = _prefertime;
	originalconflicttime = _conflicttime;
}

Doctor::Doctor(int _id, string _name)
{
	id = _id;
	name = _name;
}

Doctor::Doctor()
{
	id = -1;
	name = "";
}

void Doctor::setconflicttime(unordered_set<int> ct)
{
	ct.insert(originalconflicttime.begin(), originalconflicttime.end());
	conflicttime = ct;
}

void Doctor::setprefertime(unordered_set<int> pt)
{
	prefertime.clear();
	prefertime.insert(pt.begin(), pt.end());
}
