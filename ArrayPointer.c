#include<stdio.h>

int main()
{
    int Arr[4]={10,21,51,101};

    printf("%d\n",sizeof(Arr));             //Display size of whole array
    printf("%d\n",sizeof(Arr[2]));          //Display size of second number index element in array

    printf("%d\n",Arr[2]);                  //Display element of 2 number element 
    printf("%d\n",Arr);                     //Base address of first index of array
    printf("%d\n",&Arr);                    //Address of whole array

    printf("%d\n",Arr+1);                   //base address of first index number element
    printf("%d\n",&Arr[1]);                 //base address of first index number element
    printf("%d\n",(&Arr)+1);

    printf("%d\n",Arr[2]);                  // Display second number index element of Array
    printf("%d\n",*(Arr+2));                //Display second number index element of Array
    printf("%d\n",*(2+Arr));                //Display second number index element of Array
    printf("%d\n",2[Arr]);                  //Display second number index element of Array

    return 0;
}

// Arr[3]
// *(Arr + 3);


// Arr[2];
// *(Arr + 2)

// // Array and pointer corelation
// A[N];
// is internally considered as
// *(A + N);

// Where A : Any name of array
// Where N : Any valid positive index of that array
