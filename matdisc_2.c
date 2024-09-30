#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "perm_simples.h"
#include "arranjo_simples.h"
#include "comb_simples.h"
#include "perm_repeticao.h"

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int opcao, parar;

    do {
        system("cls");
        printf("Calculadora de Analise Combinatória - Gslherme:\n\n");
        printf("1. P(n)\n2. A(n,k)\n3. C(n,k)\n4. PRn\n5. AR(n,k)\n6. CR(n,k)\n7. Sair\n\n");
        wprintf(L"Digite o número que corresponda a operação que você deseja fazer: ");
        scanf(" %i", &opcao);

        switch(opcao) {
            case 1:
                perm_s();
                break;
            case 2:
                arranjo_s();
                break;
            case 3:
                comb_s();
                break;
            case 4:
                perm_r();
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                parar = 1;
                continue;

        }

        wprintf(L"\n\nDigite 0 caso você desejar parar o programa ou 1 se desejar fazer outra operação: ");
        scanf(" %i", &parar);

    } while (parar == 1);

    printf("\nPrograma finalizado. ");
    system("pause");

    return 0;

}
