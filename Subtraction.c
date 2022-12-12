#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Arr=NULL;
    int iSize=0;
    int j=0;
    int iSub=0;

    printf("How many element u want?\n");
    scanf("%d",&iSize);

    Arr=(int*)malloc(sizeof(int)*iSize);
    printf("Memory Allocated Succesfully\n");

    printf("Enter the number u want\n");

    //   1         2    3
    for(j=0;  j<iSize;  j++ )
    {
        scanf("%d",&Arr[j]);    //4
    }
    

    for(j=0;j<iSize;j++)
    {
        iSub=Arr[j];
        j++;
       // printf("%d\n", j);
        iSub = Arr[j] - iSub; 
        // printf("%d\n", j);
    }
    
    printf("Substarction is:%d\n",iSub);


    return 0;
}