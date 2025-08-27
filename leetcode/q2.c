#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};
struct node *a;
struct node *b;
struct node *head1 ,*head2, *temp;

void display(struct node *q, struct node *phead)
{
     q=phead;
    while(q != NULL)
    { 
        printf("%d\t", q->data);
        q=q->next;
    }
    printf("\n");
}

void sum(struct node *p , struct node *q )
{
    struct node *res= (struct node*)malloc(sizeof(struct node));
    
}
int main()
{
    int item,num;
    printf("enter the  number of elements you want to insert for list 1:");
    scanf("%d" , &num);
    printf("enter the value of head for list 1:");
    scanf("%d" , &item);

    a= (struct node*)malloc(sizeof(struct  node));
    
    a->data=item;
    a->next= NULL;
     head1=a;
    temp = head1;

    for (int i = 1; i < num; i++)
    {
        printf("enter the value of next node for list 1:");
        scanf("%d" , &item);
        a= (struct node*)malloc(sizeof(struct  node));
        a->data= item;
        a->next =NULL;
        
        temp->next= a;
        temp=temp->next;    
    }


    b= (struct node*)malloc(sizeof(struct  node));
    printf("enter the  number of elements you want to insert for list 2:");
    scanf("%d" , &num);
    printf("enter the value of head for list 2:");
    scanf("%d" , &item);
    
    b->data=item;
    b->next= NULL;

    
    head2=b;
    temp=head2;
    

    for (int i = 1; i < num; i++)
    {
        printf("enter the value of next node for list 2:");
        scanf("%d" , &item);
        b= (struct node*)malloc(sizeof(struct  node));
        b->data= item;
        b->next =NULL;
        
        temp->next= b;
        temp=temp->next;    
    }
    printf("the first linked list is :");
    display(a , head1);
    printf("the second linked list is :");
    display(b, head2);

return 0;
}

