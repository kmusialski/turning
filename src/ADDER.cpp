#include "ADDER.h"
#include "SORT.h"

list<int>result;
int Listsize;
int *table;
int *tabx;


void ADDER::addTable(SORT sub)
{
	sorts.push_back(sub);
}



void Sorter(int table[],int Listsize)
{
  int pom;

  for(int i=0;i<Listsize;i++)
    for(int j=0;j<Listsize-i-1;j++) //pętla wewnętrzna
    if(table[j]>table[j+1])
    {
      //zamiana miejscami
      pom = table[j];
      table[j] = table[j+1];
      table[j+1] = pom;
    }

}

float ADDER::makeTable()
{
    list<SORT>::iterator i = sorts.begin();
   // tempIterator++;
    list<int>::iterator j = result.begin();
    Listsize = 0;
    int k = 0;
for(i;i != sorts.end(); i++)
{
    result =  (i->Transfer());
    Listsize = Listsize + ((int)result.size());
    table = new int[Listsize];
    for ( k ,j= result.begin(); j != result.end(); ++j, ++k){

        table[k] = *j;
    }
    result.clear();
}

      for ( int k = 0; k < Listsize; ++k){

        cout<<table[k]<<" ";
    }
/*result =  (i->Transfer());



cout<<*j<<endl;

j++;

cout<<*j<<endl;

j++;

i++;

int k;
Listsize = (int)result.size();
table = new int[Listsize];

    for ( k = 0,j= result.begin(); j != result.end(); ++j, ++k){

        table[k] = *j;
    }

cout<<table[0]<<endl;
cout<<table[1]<<endl;

result.clear();
result =  (i->Transfer());

cout<<*j<<endl;

j++;

cout<<*j<<endl;




//result = (i->Transfer());

//cout<<*j<<endl;

//j++;

//cout<<*j<<endl;


  //  tempIterator++;
   // tempIterator++;
//    i--;
/*do{
    result =  (i->Transfer());
    i++;
    for(list<int>::iterator j = result.begin(); j != result.end(); ++j)
    {
        cout<<*j<<"p"<<endl;
    }


}while(i != sorts.end());


/*
	for (list<SORT>::iterator i = sorts.begin(); i != sorts.end(); i++) {
            cout<<endl;
        cout<<"sda"<<endl;
        result =  (i->Transfer());
            for (list<int>::iterator j = result.begin(); j != result.end(); ++j){
                    cout<<endl;
                    cout<<"bla"<<endl;
                cout<<*j<<endl;

            }
	}
//	}
*/
   // do{
  //        result = (i->Transfer());

  //          i++;
  //  }while(i != tempIterator);


  //  for (list<int>::iterator j = result.begin(); j != result.end(); ++j){

 //       cout << *j << " ";
  //  }





   // 	for ( tempIterator = sorts.begin(); tempIterator != i; ++tempIterator) {
   //       result =  (tempIterator->Transfer());

	//}

	//for_each(sorts.begin(),sorts.end(),AddToResult);

	//Listsize = (int)result.size();

	 return 0;
 }

void ADDER::convertTable(){

// Zapisanie listy w postaci tablicy
table = new int[Listsize];
list<int>::iterator j;
int i;
    for ( i = 0,j= result.begin(); j != result.end(); ++j, ++i){

        table[i] = *j;
    }

// sortowane tablicy


Sorter(table,Listsize);

}

void ADDER::printTable() {



    cout<<endl;
    cout<<"ciag znakow system listy"<<endl;
    for (list<int>::iterator j = result.begin(); j != result.end(); ++j){

        cout << *j << " ";
    }
    cout<<endl;

    cout<<"ciag znakow system tablicy"<<endl;

      for ( int i = 0; i < Listsize; ++i){

        cout<<table[i]<<" ";
    }
    cout<<endl;
    cout << "Sumaryczna ilosc losowan"<<endl;

    cout<<Listsize<<endl;

    cout<<sorts.size()<<endl;

}



