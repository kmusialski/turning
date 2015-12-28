#include<iostream>
#include<cstdlib>
#include "list"

#ifndef SORT_H
#define SORT_H
//www.algorytm.edu.pl

using namespace std;

class SORT
{
        private:
        list<int> marks;
        string name;
    public:
        void setMarks(list<int> newMarks);
         int sorting();
         int Transfer();
         void setName(string newName);
    protected:

};

#endif // SORT_H
