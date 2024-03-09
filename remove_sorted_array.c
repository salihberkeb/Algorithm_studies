#include <stdio.h>

int removeDuplicates(int* nums, int numsSize){
    
    int *ptr_insert=nums;
    int *ptr_scanner=nums;
    int *ptr_end=nums+numsSize-1;
    int k=1;
    while(ptr_scanner<ptr_end)
    {
        while(*ptr_insert==*ptr_scanner&&ptr_scanner<ptr_end)
        {
            ptr_scanner++;
        }
    
    
        if (*ptr_insert != *ptr_scanner)
        {
            *ptr_insert++;
            *ptr_insert=*ptr_scanner;
            k++;
        }
    }
    for (size_t i = 0; i < numsSize-k; i++)
    {
        *(ptr_insert+i+1)=NULL;
    }
    
    for (size_t i = 0; i < numsSize; i++)
    {
        printf("%d\n",*(ptr_scanner-numsSize+1+i));
    }
    return k;
}

int main(){
    
    int numsize=12;
    int nums_list[]={0,0,1,1,1,2,2,3,3,4,5,5};
    int newSize=removeDuplicates(nums_list,numsize);
    printf("\n%d",newSize);
}