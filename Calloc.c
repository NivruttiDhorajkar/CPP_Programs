#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize=0;
    int *p=NULL;

    printf("Enter the size u want:");
    scanf("%d\n",&iSize);   //5

    p=(int*)malloc(sizeof(int)*iSize);  //malloc(4*5);   malloc->20;

    p=(int*)calloc(sizeof(int),iSize);  //calloc(4,5);

    return 0;
}

//void malloc(int size);

//void calloc(int size, int elements);