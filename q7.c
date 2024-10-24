#include <stdio.h>

int main() 
{
    int i, j, r, c;
    
    printf("Enter matrix order:\n");
    printf("Rows: ");
    scanf("%d", &r);
    printf("Columns: ");
    scanf("%d", &c);

    int arr[10][10]; 

    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        { 
            printf("Enter element: ");
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Original matrix:\n");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Transposed matrix:\n");
    for (i = 0; i < c; i++) 
    {
        for (j = 0; j < r; j++) 
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}
