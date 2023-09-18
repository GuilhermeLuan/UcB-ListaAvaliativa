#include <stdio.h>
int main(){
    char nivelFuncionario;
    double salarioFuncionario;
    
    scanf("%c", &nivelFuncionario);
    scanf("%lf", &salarioFuncionario);

    switch (nivelFuncionario) {
        case 'a':
            salarioFuncionario *= 1.05;
            break;
        case 'b':
            salarioFuncionario *= 1.07;
            break;
        case 'c':
            salarioFuncionario *= 1.08;
            break;
    }
    printf("R$ %.2lf\n", salarioFuncionario);

    return 0;
}