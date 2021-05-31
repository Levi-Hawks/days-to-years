#include <stdio.h>
void main ()
{
    int Dias;                        /* Declaracao de variaveis */
    float Anos;
    printf("Entre com o número de dias: "); /* Entrada de dados */
    scanf("%d", &Dias);
    Anos=Dias/365.25;                 /* Conversao Dias -> Anos */
    printf("\n%d dias equivalem a %f anos.\n",Dias, Anos);
}
