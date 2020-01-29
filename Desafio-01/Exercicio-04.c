/*
    4) Escreva um algoritmo que permita a leitura das notas de uma turma de 20 alunos.
    Calcular a média da turma e contar quantos alunos obtiveram nota acima desta média
    calculada. Escrever a média da turma e o resultado da contagem.
*/

#include <stdio.h>

    float calcularMedia(float nota1, float nota2){
        float mediaCalculada = (nota1+nota2)/2;

        return mediaCalculada;
    }

    int main(void) {
        float mediaDosAlunos [20],
              nota1 = 0,
              nota2 = 0,
              mediaDaSala = 0;
        int acimaDaMedia = 0;

    for(int i=0; i<20; i++){
        printf("\nAluno %i\n",i);
        printf("informe a nota 1: ");
        scanf("%f", &nota1);
        printf("informe a nota 2: ");
        scanf("%f", &nota2);
        
        mediaDosAlunos[i] = calcularMedia(nota1, nota2);
        mediaDaSala = mediaDaSala+(mediaDosAlunos[i]/20);
    }
    
    for(int i=0; i<20; i++){
        if (mediaDosAlunos[i]>mediaDaSala){
        acimaDaMedia++;
        }

        printf("\nMedia aluno %i = %.2f", i, mediaDosAlunos[i]);
    }

    printf("\n\n\nMedia da turma: %.2f", mediaDaSala);
    printf("\nAlunos acima da media: %i", acimaDaMedia);

return 0;
}