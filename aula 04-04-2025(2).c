
#include <stdio.h>
#include <stdlib.h>

    void imprime(float a);

    int main (void){

        for(int i=0; i<10 ; i++)
        imprime((float)rand());

        return 0;


    int s, p;

    void imprime (int a){
        static int cont=0;

        printf("%d: %.2f", cont, a);
        if (cont % 5 == 0) printf("\n")

    }
        return 0;
    }

   