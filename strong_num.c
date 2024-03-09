#include <stdio.h>
int main(){
    int strongnum,i,sum=0,originalnum,digit;
    long fact;
    printf("enter a number: ");
    scanf("%d",&strongnum);
    originalnum=strongnum;

    while (0<strongnum)
    {
        digit=strongnum%10;
        fact=1;
        for (i = 1; i <=digit; i++)
        {
            fact=fact*i;
        }
    
        
        sum =sum + fact;
        strongnum=strongnum/10;
    }
    if (sum==originalnum){
        printf("%d is a strong number",originalnum);
    }
    else{
        printf("it is not strong nunmber");
    }
    
    return 0;
}