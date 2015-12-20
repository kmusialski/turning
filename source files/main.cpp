#include "Turn.h"
#include "TABLE.h"

// Program generuje parados urodzin

Turn createTURN();
TABLE createTABLE();




int main()
{
createTURN();
createTABLE();
}


Turn createTURN(){
	Turn turn;
    turn.CinInt();
    turn.CinString();
}

TABLE createTABLE(){
    TABLE tablica;
    tablica.digital();

}
