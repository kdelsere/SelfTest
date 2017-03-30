#ifndef _SESSION_H
#define _SESSION_H

#include <vector>
#include "NoteCard.h"

class Session{
public:
	Session();
	Session(std::vector<NoteCard> collection);
	void addCard(const NoteCard &card);
	void removeCard(const NoteCard &card);

private:
	std::vector<NoteCard> session;
};

#endif //_SESSION_H