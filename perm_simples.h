#ifndef perm_simples_h
#define perm_simples_h

#include "fat.h"

void perm_s(void) {
    setlocale(LC_ALL, "Portuguese");
    int n, result;

    system("cls");
    wprintf(L"Você selecionou: Permutação Simples. Digite o valor de \"n\": ");
    scanf(" %i", &n);

    result = fat(n);

    wprintf(L"\nO resultado é: %i.", result);

}

#endif
