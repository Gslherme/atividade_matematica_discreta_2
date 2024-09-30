#ifndef arranjo_repeticao_h
#define arranjo_repeticao_h

#include <math.h>

void arranjo_r(void) {
    setlocale(LC_ALL, "Portuguese");
    int n, k, result;

    system("cls");
    wprintf(L"Você selecionou: Arranjo com Repetição. Digite o valor de \"n\": ");
    scanf(" %i", &n);
    wprintf(L"\nDigite o valor de \"k\": ");
    scanf(" %i", &k);

    result = pow(n, k);

    wprintf(L"\nO resultado é: %i", result);

}

#endif
