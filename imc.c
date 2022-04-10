#include <stdio.h>

int main(void) {

float peso;

float altura;

printf ("informe seu peso: ");
scanf ("%f", &peso);

printf ("informe sua altura: ");
scanf ("%f", &altura);

float imc = peso / (altura * altura);

printf ("seu peso é %.1f \n", peso);
printf ("sua altura é %.2f \n", altura);
printf("seu imc é de %.1f \n", imc);

if ( imc < 18.5) {
printf ("abaixo do peso ideal. ");
}

if ((imc >= 18.5) && (imc <= 24.9)) {
printf ("peso normal. ");
}

if ((imc >= 25) && (imc <= 29.9)) {
printf ("sobrepeso. ");
}

if ((imc >= 30) && (imc <= 34.9)) {
printf ("obesidade grau 1. ");
}

if ((imc >= 35) && (imc <= 39.9)) {
printf ("obesidade grau 2. ");
}

if (imc >= 40) {
printf ("obesidade grau 3 ou mórbida");
}
  
   return 0;
}