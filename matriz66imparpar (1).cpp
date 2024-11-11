#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
int matriz[6][6], matriz2[6][6], l, i, soma[6][6];

printf ("Insira um valor para os elementos da 1ª matriz:\n");
for (int l = 0; l < 6; l++){
for (int i = 0; i < 6; i++){
    printf ("Elemento [%d][%d] = ", l,i);
    scanf ("%d", &matriz[l][i]);
}
}
printf ("Insira um valor para os elementos da 2ª matriz:\n");
for (int l = 0; l < 6; l++){
for (int i = 0; i < 6; i++){
    printf ("Elemento [%d][%d] = ", l,i);
    scanf ("%d", &matriz2[l][i]);
}
}
for (int l = 0; l < 6; l++){
for (int i = 0; i < 6; i++){
    soma[l][i] = matriz[l][i] + matriz2[l][i];
}
}
printf ("\nA soma das matrizes é:\n");
for (int l = 0; l < 6; l++){
for (int i = 0; i < 6; i++){
    printf ("Elemento [%d][%d] = [%d]\n", l,i, soma[l][i]);
    if (soma [l][i]%2==0){
    printf ("\n[%d] é par.\n", soma[l][i]);}
    else {
        printf ("\n[%d] é ímpar.\n", soma[l][i]);
    }
}
}
}