#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char lin,op;
    float valor1,valor2,resultado;

    printf("Selecione a sua linguagem/Choose your language/Sélectionnez votre langue (p - Português | e - English | f - Français | s - Español): ");
    scanf(" %c",&lin);

    if(lin == 'p'){
        printf("Introduza o primeiro valor: ");
        scanf("%f",&valor1);
        printf("Introduza o segundo valor: ");
        scanf("%f",&valor2);
        printf("Soma = S | Subtração = M | Multiplicação = V| Divisão = D\n");
        printf("Escolha a operação que quer realizar entre os 2 valores: "); 
        scanf(" %c", &op);
        switch(op){
            case 'S' : printf("O resultado é %f\n",valor1+valor2);
            break;
            case 'M': printf("O resultado é %f\n",valor1-valor2);
            break;
            case 'V' : printf("O resultado é %f\n",valor1*valor2);
            break;
            case 'D':
            if (valor2 != 0) {
                printf("O resultado é %f\n", valor1 / valor2);
            } else {
                printf("Divisão por 0 não é permitido.\n");
            }
            break;
        default:
            printf("Operação invalida.\n");
        }
    }

    else if (lin == 'e'){
        printf("Input the first value: ");
        scanf("%f",&valor1);
        printf("Input the second: ");
        scanf("%f",&valor2);
        printf("Addition = A | Subtraction = S | Multiplication = M | Division = D\n");
        printf("Choose the operation you want to perform between the 2 values: ");
        scanf(" %c", &op); 
    
        printf("Enter the first value: ");
        scanf("%f", &valor1);
        printf("Enter the second value: ");
        scanf("%f", &valor2);
    
        switch(op) {
            case 'A':
                printf("The result is %f\n", valor1 + valor2);
                break;
            case 'S':
                printf("The result is %f\n", valor1 - valor2);
                break;
            case 'M':
                printf("The result is %f\n", valor1 * valor2);
                break;
            case 'D':
                if (valor2 != 0) {
                    printf("The result is %f\n", valor1 / valor2);
                } else {
                    printf("Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid operation.\n");
        }
    }

    else if (lin == 'f'){
        printf("Entrez la première valeur : ");
        scanf("%f", &valor1);
        printf("Entrez la deuxième valeur : ");
        scanf("%f", &valor2);
        printf("Addition = A | Soustraction = S | Multiplication = M | Division = D\n");
        printf("Choisissez l'opération à effectuer : ");
        scanf(" %c", &op);
        switch(op) {
            case 'A':
                printf("Le résultat est %f\n", valor1 + valor2);
                break;
            case 'S':
                printf("Le résultat est %f\n", valor1 - valor2);
                break;
            case 'M':
                printf("Le résultat est %f\n", valor1 * valor2);
                break;
            case 'D':
                if (valor2 != 0) {
                    printf("Le résultat est %f\n", valor1 / valor2);
                } else {
                    printf("Division par zéro non autorisée.\n");
                }
                break;
            default:
                printf("Opération invalide.\n");
        }
    }

    else if (lin == 's'){
        printf("Introduce el primer valor: ");
        scanf("%f", &valor1);
        printf("Introduce el segundo valor: ");
        scanf("%f", &valor2);
        printf("Suma = A | Resta = S | Multiplicación = M | División = D\n");
        printf("Elige la operación que deseas realizar: ");
        scanf(" %c", &op);
        switch(op) {
            case 'A':
                printf("El resultado es %f\n", valor1 + valor2);
                break;
            case 'S':
                printf("El resultado es %f\n", valor1 - valor2);
                break;
            case 'M':
                printf("El resultado es %f\n", valor1 * valor2);
                break;
            case 'D':
                if (valor2 != 0) {
                    printf("El resultado es %f\n", valor1 / valor2);
                } else {
                    printf("División por cero no está permitida.\n");
                }
                break;
            default:
                printf("Operación inválida.\n");
        }
    }

    else {
        printf("Idioma/language/langue/lengua inválido(a).\n");
    }

    return 0;
}
