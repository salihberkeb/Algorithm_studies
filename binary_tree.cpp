#include <stdio.h>
#include <stdlib.h>

// Bt
struct node {
    int veri;
    struct node* sol;
    struct node* sag;
};

struct node* yeninodeOlustur(int veri) {
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->veri = veri;
    node->sol = node->sag = NULL;
    return node;
}

struct node* ekle(struct node* kok, int veri) {
    if (kok == NULL) {
        return yeninodeOlustur(veri);
    }

    if (veri < kok->veri) {
        kok->sol = ekle(kok->sol, veri);
    } else if (veri > kok->veri) {
        kok->sag = ekle(kok->sag, veri);
    }

    return kok;
}

void inorderYazdir(struct node* kok) {
    if (kok != NULL) {
        inorderYazdir(kok->sol);
        printf("%d ", kok->veri);
        inorderYazdir(kok->sag);
    }
}
int main() {
    struct node* kok = NULL;

    kok = ekle(kok, 50);
    ekle(kok, 30);
    ekle(kok, 20);
    ekle(kok, 40);
    ekle(kok, 70);
    ekle(kok, 60);
    ekle(kok, 80);

    printf("Inorder Yazdırma: ");
    inorderYazdir(kok);
    printf("\n");

    return 0;
}
