#include "list"
#include "iostream"
#include <algorithm>
#include "SORT.h"

#ifndef TEST2_NOTE_H
#define TEST2_NOTE_H

using namespace std;

class ADDER {

private:
list<SORT> sorts;

public:
	void addTable(SORT sub);
	float makeTable();
	void convertTable();
	void printTable();

};



#endif //TEST2_NOTE_H
