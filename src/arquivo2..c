#include <stdio.h>
#include <stdlib.h>
#include <stdring.h>


int main(){
    char *label_nome = "nome: ";
    char *label_email = "E-mail: ";
    char *label_telefone = "telefone: ";
    char *label_idade = "idade: ";
    
    char input_nome[30];
    char input_email[50];
    char input_telefone[15];
    char input_idade[4];

    //Ponteiro que armazena o endereço de memória do
    //arquivo
    FILE *cadastro;
    cadastro = fopen("files/cadastro.txt","r+");

    printf("Digite o seu nome completo:\n");
    fgets(input_nome,30,stdin);

    printf("Digite o seu e-mail:\n");
    fgets(input_email,50,stdin);
    
    printf("Digite o seu  telefone:\n");
    fgets(input_telefone,15,stdin);
    
    printf("Digite o seu idade:\n");
    fgets(input_idade,4,stdin);
    
    
    
    //posicionar o cursor ao final da linha
    
    fseek(cadastro,0,SEEK_END);
    fputs(label_nome,cadastro);
    fputs(input_nome,cadastro);

    
    
    fseek(cadastro,0 SEEK_END);
    fputs(label_idade,cadastro);
    fputs(input_idade,cadastro);

    

    fseek(cadastro,0 SEEK_END);
    fputs(label_idade,cadastro);
    fputs(input_idade,cadastro);


    fseek(cadastro,0 SEEK_END);
    fputs(label_idade,cadastro);
    fputs(input_idade,cadastro);

    
    fseek( cadastro,0 SEEK_END);
    fputs("--------------------------------------------------------------------------------",cadastro);
    fclose(cadastro);
    fputs(input_idade,cadastro)
    printf("\nDados cadrastrados com sucesso!\n");

    return 0;
}