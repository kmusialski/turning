#include "TABLE.h"


void greatestNumber(char *arrow,size_t arraySize)
{
    int y =0;
    int i = 0;
    int t = 1000;
    int z = 1
    int suma = 0;
    int wynik = 0;



    for (i; (i <= arraySize);i++)
    {
        z++
        if (z == 4){
            z = 1;
            break;
        }
        y = (arrow[i] - '0');
        y = y*t;
        t=t/10;
        suma = suma + y;
    }

    i = i+1;
    t = 1000;

    if(suma>=wynik){
        wynik=suma;
    }
    continue;

}


int TABLE::digital(){


char digits[] = "8492119599";
	//int maxNumber = 0;
char *arrow = digits;
size_t arraySize = sizeof(digits)/sizeof(ala[0]);
greatestNumber(arrow,arraySize); // Na ekranie pojawi sie liczba 94857


return 0;
}

