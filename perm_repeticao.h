#ifndef perm_repeticao_h
#define perm_repeticao_h

void perm_r(void) {
    setlocale(LC_ALL, "Portuguese");
    int n, n_rep, nx, a = 1, result;

    system("cls");
    wprintf(L"Você selecionou: Permutação com Repetição. Digite o valor de \"n\": ");
    scanf(" %i", &n);
    wprintf(L"\nDigite o número de elementos repetidos: ");
    scanf(" %i", &n_rep);

    for(int i = 1; i <= n_rep; i++) {
        wprintf(L"\nDigite o valor de n%i: ", i);
        scanf(" %i", &nx);
        a *= fat(nx);

    }

    result = fat(n) / a;

    wprintf(L"\nO resultado é: %i", result);

}

#endif
