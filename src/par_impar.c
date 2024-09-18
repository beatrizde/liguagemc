#include <stdio.h>
    int main(){
        int num;
        printf("Digite um número:\n");
        scanf("%d",&num);
        if(num % 2 == 0){
            printf("O número digitado e Par:\n");

        }
        else {
            printf("O número digitado e Impar:\n");
        }
        return 0;
    }