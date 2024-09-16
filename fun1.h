#ifndef fun1_h
#define fun1_h
#include <stdio.h>
#include <locale.h>

void fat(void) {
    setlocale(LC_ALL, "Portuguese");
    int fat = 1, n;

    printf("Digite o valor de \"n\": ");
    scanf("%d", &n);

    for (int top = 1; n > 1; n--) {
        fat = fat * n;

    }

    wprintf(L"\nO fatorial de %i, é %i. \n\n", n, fat);

}

#endif
