#include <stdio.h>
int main(){//0 1 1 2 3 5 8 11
    int terms,i,a=0,b=1,c=0;
    printf("enter a number for fibonacci:");
    scanf("%d",&terms);
    for (i = 1; i <= terms; i++)
    {  
        printf("%d ",c);
        a=b;  // a=1  a=0  a=1  a=1 a=2
        b=c;  // b=0  b=1  b=1  b=2 b=3
        c=a+b;// c=1  c=1  c=2  c=3 c=5
    }
    return 0;
    
}