#include <stdio.h>

void single_factorial(int facto, int number)
{
    int i;
    for(i=1; i<=number; i++)
    {
        facto = facto*i;
    }
    printf("The factorial is %d ", facto);
}



void multi_factorial( int a[],int length)
{
    int i,j;
    for (i=0; i < length; i++)

    {
        int facto = 1;
        for(j=1; j<=a[i]; j++)
        {
            facto = facto*j;
        }
        printf("\n");
        printf("The factorial of %d is %d \n", a[i],facto);

    }

}



void main()
{
    int  i, number, j, choice, length;
    printf("Enter to Calculate Multiple factorials (2) or single factorial (1) ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter your Number to calculate its factorial ( jiska factorial find karna ho )");
        scanf("%d", &number);
        single_factorial(1,number);
    }

    else if (choice == 2)
    {
        printf("Enter the number of integer or elements ");
        scanf("%d",&length);
        int a[length];
        for (i=0; i<length; i++)
        {
            printf("Enter %dth number ", i+1);
            scanf("%d", &a[i]);
        }
        multi_factorial(a,length);
    }
    else
    {
        printf("\a Invalid Choice You have to select 1 for single integer factorial and 2 for multiple integer factorial ");
    }
}
