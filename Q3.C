#include <stdio.h>
int main(){
    int senha, inputSenha;

    scanf("%d", &senha);
    printf("senha cadastrada: %d\n", senha);

    while (1){
        scanf("%d", &inputSenha);
        if(inputSenha == senha){
            printf("senha valida!\n");
            break;
        } else{
            printf("senha invalida!\n");
        }
    }
    return 0;
}