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
int main()
{
createTURN();
createTABLE();

ADDER suma = createADDER();
suma.makeTable();
suma.convertTable();
suma.printTable();

}

ADDER createADDER(){
    ADDER adder;
    adder.addTable(createSORT(" Wyniki totka "));
    adder.addTable(createSORT(" Wyniki multilotka "));
    adder.addTable(createSORT(" Wyniki toto "));
    return adder;
}

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
    return sorting;
}
