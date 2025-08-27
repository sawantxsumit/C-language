#include<stdio.h>

int main()
{
    int h1,m1,s1,h2,m2,s2,h3=0,m3=0,s3=0;
    printf("enter first time (hours) :");
    scanf("%d",&h1);
     printf("enter first time (minutes) :");
    scanf("%d",&m1);
     printf("enter first time (second) :");
    scanf("%d",&s1);
    printf("enter second time (hours) :");
    scanf("%d",&h2);
     printf("enter second time (minutes) :");
    scanf("%d",&m2);
     printf("enter second time (second) :");
    scanf("%d",&s2);
h3=h1+h2;

m3=m1+m2;
    if(m3>60)
    {
        h3++;
        m3=m3-60;
    }
    s3=s1+s2;
    if(s3>60) 
    {
        m3++;
        s3=s3-60;
    }
    
printf("the sum of the two given times is %d h %d m %d s",h3,m3,s3);
}