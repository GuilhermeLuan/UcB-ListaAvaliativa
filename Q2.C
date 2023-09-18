#include <stdio.h>

int main() {
    int numero, soma = 0;
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("%d eh par\n", numero);
    } else {
        printf("%d eh impar\n", numero);
    }

    int n = numero;
    while (n!=0){
        soma += n % 10;
        n /= 10;
    }

    printf("A soma dos algarismos de %d eh %d\n", numero, soma);
    return 0;
}