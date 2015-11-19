#include <stdio.h>

void main(void){
        int i = 1;
        for(;i<1000;i++){
                printf("%d%s",i,": ");
                if(i%3 == 0)
                        printf("fizz");
                if(i%5==0)
                        printf("buzz");
                if(i%7==0)
                        printf("bizz");
                if(i%11==0)
                        printf("fuzz");
                printf("\n");
        }
}
