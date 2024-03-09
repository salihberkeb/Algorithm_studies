#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[]={5,3,2,8,6,4,1};
    int n=7,temp;

    for (size_t i = 0; i < n-1; i++)
    {
        for (size_t j = 0; j < n-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    
    
}