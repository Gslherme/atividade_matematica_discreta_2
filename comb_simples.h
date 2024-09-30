#ifndef comb_simples_h
#define comb_simples_h

#include "fat.h"

void comb_s(void) {
    setlocale(LC_ALL, "Portuguese");
    int n, k, result;

    system("cls");
    wprintf(L"Você selecionou: Combinação Simples. Digite o valor de \"n\": ");
    scanf("%d", &n);
    wprintf(L"\nDigite o valor de \"k\": ");
    scanf("%d", &k);

    result = fat(n) / (fat(k) * fat(n - k));

    wprintf(L"\nO resultado é: %i", result);

}

#endif
