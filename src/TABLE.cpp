#include "TABLE.h"


void greatestNumber(char *arrow,size_t arraySize)
{
    int i = 0;
    int x = 1000000;
    float t = x;
    int suma = 0;
    int wynik = 0;
do{
    for (i; (i < arraySize);i++)
    {
       if (t < 1){
           i = i -6;
            t = x;
            break;
        }
        suma = suma + ((arrow[i]- '0')*t);
        t=t/10;
    }
    if(suma>=wynik){
        wynik=suma;
    }
    suma = 0;
    continue;
}while(i < arraySize);
cout<<wynik<<endl;
}

int TABLE::digital(){


char digits[] = "12345678912345867891234586789123456789";
	//int maxNumber = 0;
char *arrow = digits;
size_t arraySize = sizeof(digits)/sizeof(digits[0]);
greatestNumber(arrow,arraySize); // Na ekranie pojawi sie liczba 24857


return 0;
}






