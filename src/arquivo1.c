#include <stdio.h>
//Para trabalhar com arquivos, é necessario
//importar a biblioteca stdlib

#include <stdlib.h>
//importar a biblioteca
#include <string.h>

int main(){
system("clear");// limpar o terminal
// Declaração da variavel palavra como um ponteiro
// oara guardar os caracteres que forma uma string
char *palavra;
char *label_nome="nome: ";
printf("Digite o seu nome completo:\n");
//scanf("%s",palavra);
// O comando fgets(f->file | gets -> obter). Assim iremos
//obter o texto que o usuario está digitando no terminal.
//definimos também a quantidade de caracteres aceitos pelo
//fgets e o parâmetro stdin(std ->standard) | in -> entrada)
//ele olha para entrada padrão, que neste caso é teclado
//pelo terminal

fgets(palavra,20,stdin);
FILE *ar;
ar = fopen ("files/teste.txt","a+");
fseek(ar,0,SEEK_END); 

fputs( label_nome, ar);
fputs(palavra,ar);


printf("O arquivo está no endereço:%d\n",ar);
fclose(ar);
    return 0;
}