#include <stdio.h>
int main()
{
    int r, c;
    
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    
    int m[r][c];

    int i, j;
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Element[%d][%d]: ", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }

    int max=m[0][0];
    int max_r=0;
    int max_c=0;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(m[i][j]>max)
            {
                max=m[i][j];
                max_r=i;
                max_c=j;
            }
        }
    }

    printf("Maximum Element %d is at (%d, %d).\n", max, max_r+1, max_c+1);

    return 0;
}
