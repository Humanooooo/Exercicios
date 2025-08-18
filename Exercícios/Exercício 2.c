#include <stdio.h>
int main (){
    float peso,altura,imc;
     printf ("Digita teu peso: ");
    scanf ("%f",&peso);
    printf("Digita tua altura agora mané ");
    scanf("%f",&altura);
    altura=altura*altura;
    imc=peso/altura;


        if (imc<=18,5){
        printf ("Abaixo do Peso ");
        }


        else if (imc>=18,6 && imc<=24,9){
        printf ("Saudável ");
        }

        else if (imc >=25,0 && imc<=29,9){
        printf ("Peso em excesso ");
        }

        else if (imc >=30 && imc<=34,9){
        printf ("Obesidade Grau I ");
        }

        else if (imc >35 && imc<=39,9){
        printf ("Obesidade Grau II (severa) ");
        }

        else {
        printf ("Obesidade Grau III");
        }

return (0);
}