#include <stdio.h>
int main(){
    float notas,nota1,nota2,nota3,nota4, rs;
    
        printf("Digite nota do primeiro bimestre:\n");
        scanf("%f" ,&nota1);
    

        printf("Digite a nota do segundo bimestre:\n");
        scanf("%f" ,&nota2);
    
        printf("Digite a nota do terceiro bimestre:\n");
        scanf("%f" ,&nota3);
    
        printf("Digite a nota do quatro bimestre:\n");
        scanf("%f" ,&nota4);

        rs = (nota1 + nota2 + nota3 + nota4) / 4;
        /*
        Para alunos com média maior ou igual a 6, aprovado
        Para alunos com média menor ou igual a 4, reprovado
        Para os demais com notas entre maior 4 e menor 6, recuperação
        */



        if (rs < 6)
        {
        printf( " se o valor for menor que seis vocé  foi reprovado %.2f\n",rs);
        }
        else if(rs <= 4){
            printf(" se o valor for maior que seis vocé  foi aprovado %.2f\n",rs);
        
        }
        else{
            printf(" se o valor media do aluno é %.2f ele esta em recuperação\n",rs);

        }


    return 0;
}
    




