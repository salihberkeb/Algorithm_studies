#include <stdio.h>
#include <stdlib.h>

int F(char *str)
{
    if (*str=='\0')
    {
        return 0;
    }
    if (*str=='i' || *str=='a'|| *str=='o'|| *str=='e'|| *str=='u')
    {
        return 1+F(str+1);
    }
    return F(str+1);
}

int main(){
    char str[30];
    int a;
    printf("Bir string giriniz: ");
    scanf("%s",str);


    a=F(str);
    printf("%d",a);
}