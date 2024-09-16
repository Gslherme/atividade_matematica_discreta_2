#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "fun1.h"

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int opcao, parar = 0;

    do {
        printf("Menu:\n\n");
        printf("1. P(n)\n2. A(n,k)\n3. C(n,k)\n4. PRn\n5. AR(n,k)\n6. CR(n,k)\n7. Sair\n\n");
        wprintf(L"Digite o número que corresponda a operação que você deseja fazer: \n");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                fat();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                parar = 1;

        }

        wprintf(L"Digite 0 caso você desejar parar o programa ou 1 se desejar fazer outra operação: \n");
        scanf("%d", &parar);

    } while (parar == 0);

    return 0;

}
