
#include <stdio.h>

int s,p;

void somaproduto(int a, int b){

        s = a+b;
        p = a*b; 
    }

    int main (void){

        somaproduto(4, 3);

        printf("soma: %d produto: %d", s, p);
        
        return 0;
    }

   