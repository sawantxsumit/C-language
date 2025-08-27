#include <stdio.h>
#include <string.h>
struct adress
{
	int houseno;
	int block;
	char city[100];
	char state[100];
	
};
void printadd(struct adress add);
int main() 
{
  struct adress add[5];	
  printf("Type adress for a person");
  scanf("%d %d %s %s" , &add[0].houseno,&add[0].block, add[0].city, add[0].state);
  
  printadd(add[0]);
}
void printadd (struct adress add)
{
	printf(" %d %d %s %s", add.houseno , add.block , add.city, add.state);
}
