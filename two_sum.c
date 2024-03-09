#include <stdio.h>
#define boyut 4

int two_sum(int list[], size_t boyutt,int target);

int main(){
    int list[boyut]={4,3,7,10};
    int target=7;
    two_sum(list,boyut,target);

    return 0;
    }


int two_sum(int list[],size_t boyutt,int target)
{
    int difference;
    int hashmap[40]={};
    int *hashmap_ptr=hashmap;
    
    for (size_t i = 0; i < boyutt; i++)
    {
        difference=target-list[i];
        if (difference >= 0 && difference < 100 && *(hashmap_ptr+difference) != 0)
        {
            printf("%d,%d",hashmap[difference]-1,i);
            return 0 ;
        }
        *(hashmap_ptr+list[i])=i+1;
    }
    printf("No solution found.\n");
    return 1;
}





        // printf("%d %d\n",list[i],hashmap[list[i]]);