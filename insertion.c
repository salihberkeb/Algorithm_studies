#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[]={12,11,13,5,6};
    int n=5,j;
    int key;
    
    
for (size_t i = 1; i < n; i++)
{
    key=arr[i];
    j=i-1;
    while (j>=0 && arr[j]>key)
    {
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=key;
    
}
    
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}