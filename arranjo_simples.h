#ifndef arranjo_simples_h
#define arranjo_simples_h

#include "fat.h"

void arranjo_s(void) {
    setlocale(LC_ALL, "Portuguese");
    int n, k, result;

    system("cls");
    wprintf(L"Você selecionou: Arranjo Simples. Digite o valor de \"n\": ");
    scanf(" %i", &n);
    wprintf(L"\nDigite o valor de \"k\": ");
    scanf(" %i", &k);

    result = fat(n) / fat(n - k);

    wprintf(L"\nO resultado é: %i", result);

}

#endif
