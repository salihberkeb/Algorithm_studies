#include <stdio.h>
#include <stdlib.h>

struct dugum {
    int veri;
    struct dugum* sonraki;
};

struct dugum* yenidugumOlustur(int veri) {
    struct dugum* dugum = (struct dugum*)malloc(sizeof(struct dugum));
    dugum->veri = veri;
    dugum->sonraki = NULL;
    return dugum;
}

struct dugum* ekle(struct dugum* ilk, int veri) {
    struct dugum* yenidugum = yenidugumOlustur(veri);
    yenidugum->sonraki = ilk;
    return yenidugum;
}

void listeyiYazdir(struct dugum* ilk) {
    while (ilk != NULL) {
        printf("%d -> ", ilk->veri);
        ilk = ilk->sonraki;
    }
    printf("NULL\n");
}

int main() {
    struct dugum* ilk = NULL;
    ilk = ekle(ilk, 3);
    ilk = ekle(ilk, 7);
    ilk = ekle(ilk, 12);
    printf("Bağlı Liste: ");
    listeyiYazdir(ilk);

    return 0;
}
