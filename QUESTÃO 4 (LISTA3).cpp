#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>1
int main (void){
int salario, emprestimo,calculo;
printf("[DIGITE O VALOR DO SEU SALARIO]");
scanf ("%d",&salario);
printf("[DIGITE O VALOR DO EMPRESTIMO]");
scanf ("%d",&emprestimo);
calculo = (salario * 20)/100;
if (calculo>=emprestimo)
{
printf ("EMPRESTIMO AUTORIZADO");
}
else
{
printf ("EMPRESTIMO NEGADO");
}
}
