#include <stdio.h>
#include "matematica.h"

int main(){
    float notas[3] = {7.0,10.0,8.0};
    float notas2[3] = {1.0,2.0,9.0};

    float media = calcula_media(notas,3);

    printf("A Média do aluno foi: %f\n",media);
    printf("A Média do aluno foi: %f\n",calcula_media(notas2,3));

    return 0;
}


//gcc main.c matematica.c -o main
//Compilar os 2 juntos 