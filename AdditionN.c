#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Arr=NULL;
    int iSize=0;
    int i=0;
    int iSum=0;

    printf("How many elements u wan?\n");
    scanf("%d",&iSize);

    Arr=(int *)malloc(sizeof(int)*iSize);
    printf("Memory Allocated Succesfully\n");

    printf("Enter the element u want:\n");

    for(i=0;i<iSize;i++)
    {
        scanf("%d",&Arr[i]);
    } 

    for(i=0;i<iSize;i++)
    {
        iSum=iSum+Arr[i];
    }

    printf("Addition is: %d\n",iSum);

    free(Arr);

    printf("Memory Dellocated Succeesfully\n ");

    return 0;
}