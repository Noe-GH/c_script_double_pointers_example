#include <stdio.h>
#include <stdlib.h>

/*
    The code exemplifies the storing of array pointers in another array (double pointers).
*/

int main(int argc, char **argv)
{
    // Number of arrays and Size of each array:
    int NArrays, ArraysSize;
    // Pointers of the different arrays:
    float ** ArraysPtrs;
    
	printf("Type the number of arrays you want:\n");
    scanf("%i", &NArrays);
    printf("Type the size of the arrays:\n");
    scanf("%i", &ArraysSize);
    
    ArraysPtrs = malloc(NArrays*sizeof(float *));
    if(ArraysPtrs==NULL)
    {
        printf("Error when assigning the bit size of the array that contains the pointers of the arrays created.");
        exit(0);
    }
    printf("\n Row number \t Memory address of each array \t Memory address of the elements of each array \n");
    for(int i=0;i<NArrays;i++)
    {
        ArraysPtrs[i] = malloc(NArrays*sizeof(float));
        printf("%d \t\t %p \t\t\t\t", i, ArraysPtrs[i]);
        for(int j=0;j<ArraysSize;j++)
        {
            printf("%p ", &ArraysPtrs[i][j]);
        }
        printf("\n");
    }
    
	return 0;
    
}
