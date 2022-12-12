#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize=0;
    int *Arr=NULL;
    int i=0;

    printf("Enter the size u want:");
    scanf("%d",&iSize);

    Arr=(int *)malloc(sizeof(int) * iSize);
    printf("Memory gets Allocated\n");

    printf("Enter the number u want\n");

    for( i = 0 ; i < iSize ;  i++)
    {
        scanf("%d",&Arr[i]);

    }

    // Display the Elements of Array:
    for(i = 0; i<iSize; i++)
    {
      printf("Display element :%d\n",Arr[i]);
    }


    free(Arr);
    printf("Memory getd Deallocated\n");

    return 0;
}

//void malloc(int no);

//void free(void *ptr);