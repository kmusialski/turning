#include "TABLE.h"


void greatestNumber(char *arrow,size_t arraySize)
{
    int y =0;
    int i = 0;
    int t = 1000;
    int z = 0;
    int suma = 0;
    int wynik = 0;
do{
    for (i; (i < arraySize);i++)
    {
       if (z == 4){
           i = i -3;
           z = 0;
            t = 1000;
            break;
        }
        y = (arrow[i] - '0');
        y = y*t;
        t=t/10;
        suma = suma + y;
        z++;
    }
    if(suma>=wynik){
        wynik=suma;
    }
    suma = 0;
    continue;
}while(i < arraySize);
cout<<wynik<<endl;
}


int TABLE::digital(){cout<<wynik<<endl;


char digits[] = "849211959925629991121231313215151515168484329995962323351921489494564894-5626185484999999915156151417415";
	//int maxNumber = 0;
char *arrow = digits;
size_t arraySize = sizeof(digits)/sizeof(digits[0]);
greatestNumber(arrow,arraySize); // Na ekranie pojawi sie liczba 94857


return 0;
}

