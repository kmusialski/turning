#include "Turn.h"


void swapNum(int *num1, int *num2){

int z;

z= *num1;
*num1=*num2;
*num2=z;

}

void Turn::CinInt(){

int x = 66, y = -22;

swapNum(&x,&y);

cout<< x << " "<< y<<endl;
}
void discardVowels(char *text,size_t arraySize)
{
    char samo[]={"aAeEiIoOuU"};
    for (int i =(arraySize-2);i>=0;i--){

        for(int rozmiar =10 ;rozmiar>=0;rozmiar--){

            if(text[i]==samo[rozmiar]){
                text[i] = NULL;
        }
        }
    }
}


void normalText(char *text,size_t arraySize){

for (int i = 0 ; i <= (arraySize-2); i++){

        if(text[i]==NULL)
    {
        continue;
    }
    else {
         cout<<text[i];
    }
}
cout<<endl;

}

void reverseText(char *text,size_t arraySize){

for (int i = (arraySize-2); i >= 0; i--){

    if(text[i]==NULL)
    {
        continue;
    }
    else {
         cout<<text[i];
    }
}
cout<<endl;
}

void Turn::CinString(){

char ala[] ="Ala ma kota mruczka.";
size_t arraySize = sizeof(ala)/sizeof(ala[0]);

char *pTekst = ala;
//discardVowels(pTekst,arraySize);
normalText(pTekst,arraySize);
reverseText(pTekst,arraySize);

}
