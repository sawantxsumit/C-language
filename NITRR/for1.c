#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=1;
    
    int choice;
    printf("\n Enter 1 for 'For loop' \n Enter 2 for 'While loop' \n Enter 3 for 'Do while loop' :");
    scanf("%d", &choice);
    printf("Even numbers between 1-100 :");
    switch (choice)
    {
    case 1:
        //using for loop
        for (; i < 101; i++)
        {
            if (i%2==0)
            {
                printf("%d\n", i);
            } 
        }
        break;
    case 2:
       // using while loop
        while (i<101)
        {
            if (i%2==0)
            {
                printf("%d\t", i);
            }
            i++;
        }
        break;
    case 3:
       
        // using do while loop
        do
        {
            if (i%2==0)
            {
                printf("%d\t", i);
            }
                i++;
        }
        while (i<=100);
        break;

    default:
        printf("Invalid input!");
        break;
    }

return 0;
}