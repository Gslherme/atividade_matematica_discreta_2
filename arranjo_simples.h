#ifndef arranjo_simples_h
#define arranjo_simples_h

#include "fat.h"

void arranjo_s(void) {
    setlocale(LC_ALL, "Portuguese");
    int n, k, a, b, nsubk, result;

    system("cls");
    wprintf(L"Você selecionou: Arranjo Simples. Digite o valor de \"n\": ");
    scanf("%d", &n);
    wprintf(L"\n\nDigite o valor de \"k\": ");
    scanf("%d", &k);

    nsubk = n - k;

    a = fat(n);
    b = fat(nsubk);

    result = a / b;

    wprintf(L"\nO resultado é: %i", result);

}

#endif
