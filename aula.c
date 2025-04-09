
#include <stdio.h>

    void imprime(int a);

    int main (void){

        printf(1);
        return 0
    }

        void imprime (int a){
            printf("%d\n", a);
            imprime(a+1);

        }