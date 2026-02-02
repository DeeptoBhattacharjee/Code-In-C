//Program to display the elements of a 3x3 matrix using 2D Array
#include <stdio.h>

int main()
{
    int i,j,mat[3][3];

    //Input the elements to the 2D Array
    printf("Enter the elements of the 3x3 matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element[%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    
    //Display the elements to the 2D Array
    printf("The matrix:-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}