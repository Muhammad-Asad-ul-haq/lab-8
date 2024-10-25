#include <stdio.h>

int main() {
    int s, i, j;

   
    printf("Enter the size of the Matrix: ");
    scanf("%d", &s);

    int matrix[s][s];

    printf("Enter the Elements of the Matrix:\n");
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < s; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    printf("Diagonal Elements are:\n");
    for (i = 0; i < s; i++)
    {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    return 0;
}
