#include <stdio.h>
int main()
{
    int row=3, col=3;
    
    int matrix[row][col];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Enter the element: ");
            scanf("%d", &matrix[i][j]);
        }
    }

    int present=0; 

    int s_saddle, col_index, minE;
    for(int i=0;i<row;i++)
    {
        minE=matrix[i][0];
        col_index=0;
        for(int j=1;j<col;j++)
        {
            if(matrix[i][j]<minE)
            {
                minE=matrix[i][j];
                col_index=j;
            }
        }

        int saddle=1;
        for(int k=0;k<row;k++)
        {
            if(matrix[k][col_index]>minE)
            {
                saddle=0;
                break;
            }
        }
        
        if(saddle == 1)
        {
            printf("Saddle point is found at (%d, %d): %d\n", i, col_index,minE);
            present =1;
        }
    }

    if(!present)
    {
        printf("No Saddle point is found.\n");
    }
}


    return 0;
}
