#include<stdio.h>

// program to print the pascal's triangle
int fact(int n)
{
    int fac=1;
   
    for(int i=1; i<=n; i++)
    {
        fac=fac*i;
    }
    return fac;
}
int combination(int n, int r)
{
    int ncr= fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int main()
{
    int n;
    printf(" enter the number of terms :");
    scanf("%d",&n);
    for(int i=0; i<=n; i++)
    {
       for(int j=0; j<=i; j++)
       {
        int icj= combination(i,j);
           printf("%d ", icj);
       }
       printf("\n");
    }
    return 0; 
}