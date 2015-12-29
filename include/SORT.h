#include<iostream>
#include<cstdlib>
#include "list"

#ifndef SORT_H
#define SORT_H

using namespace std;

class SORT
{
        private:
        string name;
        list<int> marks;
    public:
        void setMarks(list<int> newMarks);
         int sorting();
         list<int> Transfer();
         void setName(string newName);
         void PrintMarks();
    protected:

};

#endif // SORT_H
