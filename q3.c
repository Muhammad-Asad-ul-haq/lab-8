#include<stdio.h>
int main()
{
    int s;
    int i, j;
    
    do{
        printf("Enter the starting number (odd): ");
        scanf("%d", &s);
        if(s%2==0){
            printf("Invalid input. Try again.");
        }
    }while(s%2==0);

    printf("\n");

    for(i=s;i>=1;i-=2)
    {
        for(j=i;j>=1;j-=2)
        {
            printf("%d ", j);
        }
        printf("\n");
    }   
    return 0;
}
