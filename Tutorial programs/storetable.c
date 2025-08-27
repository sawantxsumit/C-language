//#include <stdio.h>
//void storetable(int arr[][10], int n , int m , int number);
//int main() 
//{
//int tables[2][10];
//storetable(tables, 0 , 10 , 2);
//storetable(tables, 1 , 10 , 3);
//	for(int i=0; i<10 ; i++)
//	{
//		printf("%d \t", tables[0][i]);
//	}
//	printf("\n");
//		for(int i=0; i<10 ; i++)
//	{
//		printf("%d \t", tables[1][i]);
//	}
//return 0;
//	
//}
//
//void storetable(int arr[][10], int n , int m , int number)
//{
//	for(int i=0; i<m ; i++)
//	{
//		arr[n][i]= number *(i+1);
//	}

#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number for the multiplication table: ");
    scanf("%d", &num);

    int table[10]; // Array to store the multiplication table

    for (i = 0; i < 10; i++) {
        table[i] = num * (i + 1);
    }

    printf("Multiplication Table for %d:\n", num);
    for (i = 0; i < 10; i++) {
        printf("%d x %d = %d\n", num, i + 1, table[i]);
    }

    return 0;
}


