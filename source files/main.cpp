#include <iostream>
#include "Turn.h"
#include "TABLE.h"
#include "SORT.h"



Turn createTURN();
TABLE createTABLE();
SORT createSORT(string name);

using namespace std;
//string name
int main()
{
createTURN();
createTABLE();
SORT tabela1 = createSORT(" Wyniki totka ");
SORT tabela2 = createSORT(" Wyniki multilotka ");
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

//name
    return sorting;
}
//string name
