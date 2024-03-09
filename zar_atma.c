#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>
#define BOYUT 6

int main(){
    size_t zar_sonucu;
    size_t sayac;
    size_t dizi[BOYUT]={0};

    srand(time(NULL));

    for (sayac = 0; sayac < 6000000; sayac++)
    {
        zar_sonucu=(rand()%BOYUT);
        dizi[zar_sonucu]++;        
    }
    printf("Zar:\t Miktari:\n");
    size_t i=0;
    for ( ; i < 6; i++)
    {
        printf("%d\t%d\n",i,dizi[i]);
    }

    return 0;

}