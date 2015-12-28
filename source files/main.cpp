#include <iostream>
#include "Turn.h"
#include "TABLE.h"
#include "SORT.h"
#include "ADDER.h"


Turn createTURN();
TABLE createTABLE();
SORT createSORT(string name);
ADDER createADDER();

using namespace std;
//string name
int main()
{
createTURN();
createTABLE();

ADDER suma = createADDER();
suma.makeTable();
suma.printTable();

}

ADDER createADDER(){
    ADDER adder;
    adder.addSubject(createSORT(" Wyniki totka "));
    adder.addSubject(createSORT(" Wyniki multilotka "));
    //adder.addSubject(createSORT(" Wyniki toto "));
    return adder;
}
//SORT tabela1 = createSORT(" Wyniki totka ");
//SORT tabela2 = createSORT(" Wyniki multilotka ");


Turn createTURN(){
	Turn turn;
    turn.CinInt();
    turn.CinString();

    return turn;
}

TABLE createTABLE(){
    TABLE tablica;
    tablica.digital();

    return tablica;

}

SORT createSORT(string name){
    SORT sorting;
    sorting.setName(name);
    sorting.sorting();

//name
    return sorting;
}
//string name
