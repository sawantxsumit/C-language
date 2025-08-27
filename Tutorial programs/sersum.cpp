#include<stdio.h>

void main()
{
    int n, sum=0;
    printf("enter a number :");
    scanf("%d", &n);
     // to print he sum of the series 1-2+3-4+5-6+7...... upto n
     // even number = subtract 
     // odd number = add 
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0) { printf("%d - ",i); sum=sum+i;}
        else {printf("%d + ",i); sum=sum-i;}
    }printf("...... upto n");
    printf("\nthe sum of the series upto %d terms is %d", n, sum);
}
