#include "list"
#include "iostream"
#include "SORT.h"

#ifndef TEST2_NOTE_H
#define TEST2_NOTE_H

using namespace std;

class ADDER {

private:
list<SORT> sorts;
list<int> marks;

public:
	void addSubject(SORT sub);
	void setMarks(list<int> newMarks);
	float makeTable();
	void printTable();

};



#endif //TEST2_NOTE_H
