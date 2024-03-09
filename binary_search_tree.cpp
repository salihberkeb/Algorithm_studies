#include <stdio.h>
#include <stdlib.h>
s
struct Dugum {
    int veri;
    struct Dugum* sol;
    struct Dugum* sag;
};

struct Dugum* yeniDugumOlustur(int anahtar) {
    struct Dugum* dugum = (struct Dugum*)malloc(sizeof(struct Dugum));
    dugum->veri = anahtar;
    dugum->sol = dugum->sag = NULL;
    return dugum;
}

struct Dugum* ekle(struct Dugum* kok, int anahtar) {
    if (kok == NULL) {
        return yeniDugumOlustur(anahtar);
    }

    if (anahtar < kok->veri) {
        kok->sol = ekle(kok->sol, anahtar);
    } else if (anahtar > kok->veri) {
        kok->sag = ekle(kok->sag, anahtar);
    }

    return kok;
}

struct Dugum* ara(struct Dugum* kok, int anahtar) {
    if (kok == NULL || kok->veri == anahtar) {
        return kok;
    }

    if (anahtar < kok->veri) {
        return ara(kok->sol, anahtar);
    } else {
        return ara(kok->sag, anahtar);
    }
}

void inorder(struct Dugum* kok) {
    if (kok != NULL) {
        inorder(kok->sol);
        printf("%d ", kok->veri);
        inorder(kok->sag);
    }
}

int main() {
    struct Dugum* kok = NULL;

    kok = ekle(kok, 50);
    ekle(kok, 30);
    ekle(kok, 20);
    ekle(kok, 40);
    ekle(kok, 70);
    ekle(kok, 60);
    ekle(kok, 80);

    int arananAnahtar = 40;
    struct Dugum* sonuc = ara(kok, arananAnahtar);
    if (sonuc != NULL) {
        printf("%d BST'de bulundu.\n", arananAnahtar);
    } else {
        printf("%d BST'de bulunamadı.\n", arananAnahtar);
    }

    printf("Inorder : ");
    inorder(kok);
    printf("\n");

    return 0;
}
