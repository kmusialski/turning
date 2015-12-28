#include "ADDER.h"
#include "SORT.h"

int result =0;

void ADDER::addSubject(SORT sub)
{
	sorts.push_back(sub);
}
void ADDER::setMarks(list<int> newMarks){
    marks = newMarks;
};

float ADDER::makeTable()
{
	for (list<SORT>::iterator i = sorts.begin(); i != sorts.end(); ++i) {



   // for (list<int>::iterator j = marks.begin(); j != marks.end(); ++j) {
  //      cout << *j << " ";
  //  }
 //  cout<<i->Transfer();
  //result = i->Transfer();
    }
return 0;
 }



void ADDER::printTable() {
    cout<<endl;
    cout << "Sumaryczna ilosc losowan"<<endl;

    cout<<sorts.size();
    // tu byl b³ad bo wyrzuca³ wynik funkcji calculate

}



