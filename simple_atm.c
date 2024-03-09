#include <stdio.h>
int main(){
    int islem,bakiye=1000,tutar,para_cekme,i=1;
    printf("islemler\n1-para cekme \n2-para yatirma\n3-bakiye sorgulama\n4-kart iade\n\n\n");
    printf("bankamatige hosgeldiniz,lutfen islem seciniz:");
    scanf("%d",&islem);
    while(i>0)    
        i++;
        switch(islem){
            case 1:
                printf("bakiye= %d",bakiye);
                printf("ne kadar para cekmek istiyorsunuz:\n");
                scanf("%d",&para_cekme);
                if (bakiye >= para_cekme){
                    bakiye = bakiye - para_cekme;
                    printf("para çekildi");
                    printf("%d",bakiye);
                }
                else{
                    printf("hatali islem");
                }
                
                break;
            case 2:
                printf("2");

            break;
            case 3:
                printf("3");
                break;
            case 4:
                printf("kartiniz iade ediliyor");
                break;
            default:
                printf("islem disi");
                break;
        }
    return 0;
    
}