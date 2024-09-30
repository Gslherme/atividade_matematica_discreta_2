#ifndef comb_repeticao_h
#define comb_repeticao_h

#include "fat.h"

void comb_r(void) {
    setlocale(LC_ALL, "Portuguese");
    int n, k, result;

    system("cls");
    wprintf(L"Você selecionou: Combinação com Repetição. Digite o valor de \"n\": ");
    scanf("%d", &n);
    wprintf(L"\nDigite o valor de \"k\": ");
    scanf("%d", &k);

    result = fat(n + (k - 1)) / (fat(k) * fat(n - 1));

    wprintf(L"\nO resultado é: %i", result);

}

#endif
