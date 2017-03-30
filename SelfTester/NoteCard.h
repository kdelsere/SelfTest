#ifndef _NOTECARD_H
#define _NOTECARD_H

#include <string>

using namespace std;

class NoteCard{
public:
	NoteCard(const string &side1, const string &side2);

	const int id;

	virtual const string& getSide1();
	virtual const string& getSide2();
	virtual void setSide1(const string &side1);
	virtual void setSide2(const string &side2);
protected:
	string side1;
	string side2;
	static unsigned long ids;
};

#endif //_NOTECARD_H