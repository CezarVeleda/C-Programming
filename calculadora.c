#include <stdio.h>
#include <math.h>
void chamada2op(){
    printf("Digite os 2 operandos: \n");
};
int soma(int op1, int op2){
    printf("%d + %d = %d", op1, op2, op1+op2);
    return op1 + op2;
};
int subtracao(int op1, int op2){
    printf("%d - %d = %d", op1, op2, op1-op2);
    return op1 - op2;
};
int multiplicacao(int op1, int op2){
    printf("%d * %d = %d", op1, op2, op1*op2);
    return op1 * op2;
};
float divisao(int op1, int op2){
    printf("%d / %d = %d", op1, op2, op1/op2);
    return op1 / op2;
};
float radiciacao(int op1, int op2){
    double result = pow(op1, 1.0 / op2);
    printf("%.d √ %d = %.1f\n", op1, op2, result);
    return pow(op1, 1.0/op2);
}
int potenciacao(int op1, int op2){
    double result = pow(op1, op2);
    printf("%d ^ %d = %.2f \n", op1, op2, result);
    return pow(op1, op2);
}

int main(){
    int escolha, resultado, op1, op2;
    printf("-----------------\nCALCULADORA V:0.1\n-----------------\n");
    printf("Escolha sua função: \n");
    printf("(1)| Soma |\n(2)| Subtração |\n(3)| Multiplicação |\n(4)| Divisão |\n(5)| Radiciação |\n(6)| Potenciação | \n(zero)| Sair do programa |");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1: // soma
        chamada2op();
        scanf("%d", &op1);
        scanf("%d", &op2);
        resultado = soma(op1, op2);
        break;
    case 2: //subtracao
        chamada2op();
        scanf("%d", &op1);
        scanf("%d", &op2);
        resultado = subtracao(op1, op2);
        break;
    case 3: // multiplicacao
        chamada2op();
        scanf("%d", &op1);
        scanf("%d", &op2);
        resultado = multiplicacao(op1, op2);
        break;
    case 4: // divisao
        chamada2op();
        scanf("%d", &op1);
        scanf("%d", &op2);
        resultado = divisao(op1, op2);
        break;
    case 5: // radiciacao
        chamada2op();
        scanf("%d", &op1);
        scanf("%d", &op2);
        resultado = radiciacao(op1, op2);
        break;
    case 6: // potenciacao
        chamada2op();
        scanf("%d", &op1);
        scanf("%d", &op2);
        resultado = potenciacao(op1, op2);
        break;
    case 0:
        return 0;
    default:
        printf("Operação não identificada");
        break;
    }
}