#include "ADDER.h"
#include "SORT.h"

list<int>result;
list<int>result2;

//list<int>::iterator i;
void ADDER::addTable(SORT sub)
{
	sorts.push_back(sub);
}


float ADDER::makeTable()
{

	for (list<SORT>::iterator i = sorts.begin(); i != sorts.end(); i++) {

        if(i == sorts.begin()) {
           result =  (i->Transfer());
        }
        else{
            result2 =  (i->Transfer());
        }

	}

    //for (list<SORT>::iterator i = sorts.begin(); i != sorts.end(); ++i) {







  //  for (list<int>::iterator j = marks.begin(); j != marks.end(); ++j) {
   //     cout << *j << " ";
  //  }
 //  cout<<i->Transfer();
  //result = i->Transfer();


	 return 0;
 }


void ADDER::printTable() {


    cout<<endl;
    for (list<int>::iterator j = result.begin(); j != result.end(); ++j){

        cout << *j << " ";
    }
    cout<<endl;
   // for (list<int>::iterator j = result2.begin(); j != result2.end(); ++j){

  //      cout << *j << " ";
   // }



    cout<<endl;
    cout << "Sumaryczna ilosc losowan"<<endl;

    cout<<sorts.size()<<endl;
    // tu byl b³ad bo wyrzuca³ wynik funkcji calculate

}



