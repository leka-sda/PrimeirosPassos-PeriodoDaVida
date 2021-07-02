#include <stdio.h>
#include <locale.h>

int main() {
    
    // INSERE CARACTERES ESPECIAIS DA LÍNGUA PORTUGUESA NO CÓDIGO
    setlocale (LC_ALL, "Portuguese");
    
    // APRESENTA-SE AO USUÁRIO
    printf(" ----------------------------------------------------------\n");
    printf("| Olá! Seja bem vindo(a) ao Age of Life!                   |\n");
    printf("| Vamos descobrir em que período da vida você se encontra? |\n");
    printf(" ----------------------------------------------------------\n");
    printf("\n");
    
    // DECLARA A VARIÁVEL E SOLICITA O DADO DO USUÁRIO
    int idade;
    printf ("Digite a sua idade: ");
    scanf ("%d", &idade);
    fflush (stdin);
    
    // APRESENTA O RESULTADO
    if (idade <= 11) {
        printf ("Você está na infância!\n");  
    }
        else if ((idade >= 12) && (idade <= 20)) {
            printf ("Você está na adolescência!\n");    
        }
        else if ((idade > 20) && (idade < 60)) {
            printf ("Você está na fase adulta!\n");            
        }
    else { 
        printf ("Você está na velhice!\n");    
    }
    
    // DESPEDE-SE DO USUÁRIO
    printf("\n");
    printf(" -----------------------------------------\n");
    printf("| Obrigado por participar do Age of Life! |\n");
    printf(" -----------------------------------------\n");
}