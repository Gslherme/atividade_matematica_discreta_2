#ifndef fat_h
#define fat_h

int fat(int valor_fat) {
    int fat = 1;
    while (valor_fat > 1) {
        fat = fat * valor_fat;
        valor_fat--;

    }

    return fat;

}

#endif
