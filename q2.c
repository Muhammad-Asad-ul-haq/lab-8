#include<stdio.h>
int main()
{
    int s, e;
    int i, j;
    
    printf("Enter the starting point: ");
    scanf("%d", &s);
    printf("Enter the ending point: ");
    scanf("%d", &e);

    printf("Prime numbers between %d and %d are:\n", s,e);
    
    for(i=s;i<=e;i++)
    {
        if(i<2)
        {
            continue;
        }
        
        int prime =1;
        
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                prime = 0;
                break;
            }
        }
        if(prime==1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
