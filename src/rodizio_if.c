#include <stdio.h>

int main(){
    int placa;
    printf ("Digite o final da placa do seu veiculo:\n");
    scanf("%d",&placa);

    if (placa == 1)
    {
       printf("Você não pode sair com o vericulo na segunda-feira\n");
    }

    else if (placa == 2)
    {
        printf("Você não pode sair na segunda-feira\n");
    }
    else if (placa == 3)
    {
        printf("Você não pode sair na terça-feira\n");
    }
    else if (placa == 4)
    {
        printf("Você não pode sair na terça-feira\n");
    }
    else if (placa == 5)
    {
        printf("Você não pode sair na quarta-feira\n");
    }
    else if (placa == 6)
    {
        printf("Você não pode sair na quarta-feira\n");
    }
    else if (placa == 7)
    {
        printf("Você não pode sair na quinta-feira\n");
    }
    else if (placa == 8)
    {
        printf("Você não pode sair na quinta-feira\n");
    }
    else if (placa == 9)
    {
        printf("Você não pode sair na sexta-feira\n");
    }
    else if (placa == 0)
    {
        printf("Você não pode sair na sexta-feira\n");
    }
    else{
        printf("Final de placa inexistente\n");
    }
    return 0;

}
