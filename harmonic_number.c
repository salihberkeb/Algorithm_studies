#include <stdio.h>

void polynomial_write_3(double a,double b,double c,double d)
{
//X^3 
 
    if (a!=0)
    {
        if (a==-1)
        {
            printf("-x^3");
        }

        else if (a==1)
        {
            printf("x^3");
        }
        else if (a==(int)a)
        {
            printf("%dx^3",(int)a);
        }

        else{
            printf("%.1fx^3",a);
        }
        if (b>0)
        {
            printf("+");
        }
    }
    else{
        
    }
//X^2
    if (b!=0)
    {
        if (b==-1.)
        {
            printf("-x^2");
        }

        else if (b==1)
        {
            printf("x^2");
        }
        else if (b==(int)b)
        {
            printf("%dx^2",(int)b);
        }

        else{
            printf("%.1fx^2",b);
        }
        if (c>0)
        {
            printf("+");
        }
    }
//X^1

    if (c!=0)
    {
        if (c==-1.)
        {
            printf("-x");
        }

        else if (c==1.0)
        {
            printf("x");
        }
        else if (c==(int)c)
        {
            printf("%dx",(int)c);
        }

        else
        {
            printf("%.1fx",c);
        }
        if (d>0)
        {
            printf("+");
        }
    }
        if (d!=0)
        {
            printf("%.1f",d);            
        }
        else
        {
            printf("");
        }
}

void decide_perfect_harmonic_number(int number)
{
    int sum=0,i;
    double is_it_harmonic,count=0.0,harmonic_sum=0.0;
    for ( i = 1; i <= number; i++)
    {
        if(number%i==0)
        {
            sum=sum+i;
            if (i==number)
            {
                sum-=i;
            }            
            count++;

            harmonic_sum = harmonic_sum+ (1.0/i);
        }
        
        is_it_harmonic=count/harmonic_sum;
    
    }
    if (number==sum)
    {
        printf("is it perfect number:YES\n");
    }
    else{
        printf("is it perfect number:NO\n");
    }

    if (is_it_harmonic-(int)is_it_harmonic==0)
    {
        printf("is it harmonic number:YES\n");
    }
    else
    {
        printf("is it harmonic number:NO\n");
    }
    
    printf("%f",is_it_harmonic);
    
}
int main(){
    decide_perfect_harmonic_number(25);
}